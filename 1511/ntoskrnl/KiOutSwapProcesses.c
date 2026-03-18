/*
 * XREFs of KiOutSwapProcesses @ 0x14003272C
 * Callers:
 *     KeSwapProcessOrStack @ 0x140136234 (KeSwapProcessOrStack.c)
 * Callees:
 *     MmOutSwapProcess @ 0x1400328BC (MmOutSwapProcess.c)
 *     KiReadyOutSwappedThreads @ 0x14003307C (KiReadyOutSwappedThreads.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 */

signed __int64 __fastcall KiOutSwapProcesses(_QWORD *a1)
{
  _QWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v4; // rdx
  int v5; // eax
  _QWORD *v6; // rdi
  _QWORD *v7; // r9
  unsigned __int64 v8; // r14
  char v9; // bp
  signed __int64 result; // rax
  int v11; // edx
  _QWORD *v12; // r8
  _QWORD *v13; // rax
  signed __int64 *v14; // r8
  signed __int64 v15; // rcx

  do
  {
    v2 = a1 - 33;
    a1 = (_QWORD *)*a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KiAcquireKobjectLockSafe(v2);
    v5 = *((_DWORD *)v2 + 143);
    v6 = v2 + 31;
    v7 = (_QWORD *)v2[31];
    if ( v7 == v2 + 31 || (v5 & 7) == 6 )
    {
      _InterlockedXor((volatile signed __int32 *)v2 + 143, ((unsigned __int8)v5 ^ 0xFD) & 7);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      v8 = CurrentIrql;
      __writecr8(CurrentIrql);
      MmOutSwapProcess(v2);
      v9 = 0;
      __writecr8(2uLL);
      result = KiAcquireKobjectLockSafe(v2);
      if ( (_QWORD *)*v6 == v6 )
      {
        v11 = 1;
      }
      else
      {
        v11 = 2;
        v14 = v2 + 33;
        _m_prefetchw(&KiProcessInSwapListHead);
        result = KiProcessInSwapListHead;
        do
        {
          *v14 = result;
          v15 = result;
          result = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v14, result);
        }
        while ( result != v15 );
        if ( !result )
          v9 = 1;
      }
      _InterlockedXor((volatile signed __int32 *)v2 + 143, v11 ^ 5);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      if ( v9 )
      {
        result = KiAcquireKobjectLockSafe(&KiSwapEvent);
        KiSwapEvent.Header.SignalState = 1;
        _InterlockedAnd((volatile signed __int32 *)&KiSwapEvent, 0xFFFFFF7F);
      }
      __writecr8(v8);
    }
    else
    {
      v12 = (_QWORD *)*v6;
      v13 = (_QWORD *)v2[32];
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v13 != v6 )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = v13;
      v2[32] = v2 + 31;
      *v6 = v6;
      _InterlockedXor((volatile signed __int32 *)v2 + 143, 3u);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      LOBYTE(v4) = CurrentIrql;
      result = KiReadyOutSwappedThreads(v7, v4);
    }
  }
  while ( a1 );
  return result;
}
