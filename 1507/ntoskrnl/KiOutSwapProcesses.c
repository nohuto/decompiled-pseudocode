/*
 * XREFs of KiOutSwapProcesses @ 0x1401100B8
 * Callers:
 *     KeSwapProcessOrStack @ 0x140164CD4 (KeSwapProcessOrStack.c)
 * Callees:
 *     MmOutSwapProcess @ 0x14011029C (MmOutSwapProcess.c)
 *     KiReadyOutSwappedThreads @ 0x1401106FC (KiReadyOutSwappedThreads.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

signed __int64 __fastcall KiOutSwapProcesses(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v5; // edi
  int v6; // eax
  _QWORD *v7; // rdi
  _QWORD *v8; // r9
  unsigned __int64 v9; // r15
  char v10; // bp
  signed __int64 result; // rax
  unsigned int v12; // esi
  int v13; // edx
  _QWORD *v14; // r8
  _QWORD *v15; // rax
  signed __int64 *v16; // r8
  signed __int64 v17; // rcx
  unsigned int v18; // ebx

  do
  {
    v3 = a1 - 33;
    a1 = (_QWORD *)*a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v5 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)v3, 7u) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
      while ( (*(_DWORD *)v3 & 0x80u) != 0 );
    }
    v6 = *((_DWORD *)v3 + 143);
    v7 = v3 + 31;
    v8 = (_QWORD *)v3[31];
    if ( v8 == v3 + 31 || (v6 & 7) == 6 )
    {
      _InterlockedXor((volatile signed __int32 *)v3 + 143, ((unsigned __int8)v6 ^ 0xFD) & 7);
      _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
      v9 = CurrentIrql;
      __writecr8(CurrentIrql);
      MmOutSwapProcess(v3);
      v10 = 0;
      result = 2LL;
      __writecr8(2uLL);
      v12 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v3, 7u) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v12);
        }
        while ( (*(_DWORD *)v3 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v3, 7u) );
        result = 2LL;
      }
      if ( (_QWORD *)*v7 == v7 )
      {
        v13 = 1;
      }
      else
      {
        v13 = 2;
        v16 = v3 + 33;
        _m_prefetchw(&KiProcessInSwapListHead);
        result = KiProcessInSwapListHead;
        do
        {
          *v16 = result;
          v17 = result;
          result = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v16, result);
        }
        while ( result != v17 );
        if ( !result )
          v10 = 1;
      }
      a2 = v13 ^ 5u;
      _InterlockedXor((volatile signed __int32 *)v3 + 143, a2);
      _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
      if ( v10 )
      {
        v18 = 0;
        while ( _interlockedbittestandset((volatile signed __int32 *)&KiSwapEvent, 7u) )
        {
          do
          {
            if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v18);
            result = (unsigned int)KiSwapEvent.Header.Lock;
          }
          while ( (KiSwapEvent.Header.Type & 0x80u) != 0 );
        }
        KiSwapEvent.Header.SignalState = 1;
        _InterlockedAnd((volatile signed __int32 *)&KiSwapEvent, 0xFFFFFF7F);
      }
      __writecr8(v9);
    }
    else
    {
      v14 = (_QWORD *)*v7;
      v15 = (_QWORD *)v3[32];
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v15 != v7 )
        __fastfail(3u);
      *v15 = v14;
      v14[1] = v15;
      v3[32] = v3 + 31;
      *v7 = v7;
      _InterlockedXor((volatile signed __int32 *)v3 + 143, 3u);
      _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
      LOBYTE(a2) = CurrentIrql;
      result = KiReadyOutSwappedThreads(v8, a2);
    }
  }
  while ( a1 );
  return result;
}
