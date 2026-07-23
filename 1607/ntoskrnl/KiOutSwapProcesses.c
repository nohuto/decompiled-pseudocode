/*
 * XREFs of KiOutSwapProcesses @ 0x140090730
 * Callers:
 *     KeSwapProcessOrStack @ 0x14013D844 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiReadyOutSwappedThreads @ 0x1400908A0 (KiReadyOutSwappedThreads.c)
 *     MmOutSwapProcess @ 0x1400909CC (MmOutSwapProcess.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 */

signed __int64 __fastcall KiOutSwapProcesses(_QWORD *a1)
{
  ULONG_PTR v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  int v4; // eax
  ULONG_PTR v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rcx
  _QWORD *v8; // rax
  signed __int64 result; // rax
  char v10; // r14
  int v11; // edx
  signed __int64 *v12; // r8
  signed __int64 v13; // rcx

  do
  {
    v2 = (ULONG_PTR)(a1 - 33);
    a1 = (_QWORD *)*a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KiAcquireKobjectLockSafe(v2);
    v4 = *(_DWORD *)(v2 + 572);
    v5 = v2 + 248;
    v6 = *(_QWORD *)(v2 + 248);
    if ( v6 == v2 + 248 || (v4 & 7) == 6 )
    {
      _InterlockedXor((volatile signed __int32 *)(v2 + 572), ((unsigned __int8)v4 ^ 0xFD) & 7);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      __writecr8(CurrentIrql);
      MmOutSwapProcess(v2);
      v10 = 0;
      __writecr8(2uLL);
      result = KiAcquireKobjectLockSafe(v2);
      if ( *(_QWORD *)v5 == v5 )
      {
        v11 = 1;
      }
      else
      {
        v11 = 2;
        v12 = (signed __int64 *)(v2 + 264);
        _m_prefetchw(&KiProcessInSwapListHead);
        result = KiProcessInSwapListHead;
        do
        {
          *v12 = result;
          v13 = result;
          result = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v12, result);
        }
        while ( result != v13 );
        if ( !result )
          v10 = 1;
      }
      _InterlockedXor((volatile signed __int32 *)(v2 + 572), v11 ^ 5);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      if ( v10 )
      {
        result = KiAcquireKobjectLockSafe(&KiSwapEvent);
        KiSwapEvent.Header.SignalState = 1;
        _InterlockedAnd((volatile signed __int32 *)&KiSwapEvent, 0xFFFFFF7F);
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      v7 = *(_QWORD *)v5;
      v8 = *(_QWORD **)(v2 + 256);
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v8 != v5 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *(_QWORD *)(v2 + 256) = v2 + 248;
      *(_QWORD *)v5 = v5;
      _InterlockedXor((volatile signed __int32 *)(v2 + 572), 3u);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      result = KiReadyOutSwappedThreads(v6, CurrentIrql);
    }
  }
  while ( a1 );
  return result;
}
