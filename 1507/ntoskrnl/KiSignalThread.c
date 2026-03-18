/*
 * XREFs of KiSignalThread @ 0x14000D8F0
 * Callers:
 *     KeAlertThread @ 0x14000C1F0 (KeAlertThread.c)
 *     KiSuspendThread @ 0x14000CA68 (KiSuspendThread.c)
 *     KiSignalThreadForApc @ 0x14000D028 (KiSignalThreadForApc.c)
 *     KiTryUnwaitThreadWithPriority @ 0x14000D710 (KiTryUnwaitThreadWithPriority.c)
 *     KiResumeThread @ 0x14000E65C (KiResumeThread.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KiSignalThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // dl
  char result; // al
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // r14d
  __int64 v14; // rdx
  _QWORD *v15; // rcx

  v6 = *(_BYTE *)(a2 + 112);
  result = 0;
  v9 = v6 & 7;
  if ( v9 == 1 || v9 == 4 )
  {
    v10 = *(_QWORD *)(a2 + 232);
    if ( v10 )
    {
      if ( (*(_BYTE *)v10 & 0x7F) == 0x15 )
      {
        v11 = (unsigned __int8)*(_DWORD *)(a2 + 540);
        *(_DWORD *)(a2 + 540) = v11;
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 4 * v11 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 40));
      }
    }
    v12 = *(_QWORD *)(a2 + 712);
    if ( v12 )
    {
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 22672), 0LL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v13);
        }
        while ( *(_QWORD *)(v12 + 22672) );
      }
      if ( *(_QWORD *)(a2 + 712) )
      {
        v14 = *(_QWORD *)(a2 + 216);
        v15 = *(_QWORD **)(a2 + 224);
        if ( *(_QWORD *)(v14 + 8) != a2 + 216 || *v15 != a2 + 216 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *(_QWORD *)(a2 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 22672), 0LL);
    }
    *(_BYTE *)(a2 + 388) = 7;
    *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 11400);
    *(_QWORD *)(a1 + 11400) = a2 + 216;
    *(_QWORD *)(a2 + 200) = a3;
    return 1;
  }
  if ( a4 )
  {
    if ( (v6 & 7) == 0 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 2;
      *(_QWORD *)(a2 + 200) = a3;
      *(_BYTE *)(a4 + 17) = 0;
      return 1;
    }
    if ( v9 == 5 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 6;
    }
    else if ( v9 == 3 )
    {
      *(_BYTE *)(a4 + 17) = 2;
    }
  }
  return result;
}
