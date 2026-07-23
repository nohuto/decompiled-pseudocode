/*
 * XREFs of KiDecrementProcessStackCount @ 0x1400CC9C0
 * Callers:
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiOutSwapKernelStacks @ 0x1400A5934 (KiOutSwapKernelStacks.c)
 *     KiSuspendThread @ 0x1400C7874 (KiSuspendThread.c)
 *     KeDeleteThread @ 0x1400C9970 (KeDeleteThread.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 */

int __fastcall KiDecrementProcessStackCount(__int64 a1)
{
  signed __int64 v2; // rax
  char v3; // di
  unsigned __int8 CurrentIrql; // si
  signed __int32 v5; // eax
  signed __int64 *v6; // rbx
  signed __int64 v7; // rcx
  signed __int32 v8; // ett

  LODWORD(v2) = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 572), 0xFFFFFFF8) & 0xFFFFFFF8;
  if ( (_DWORD)v2 == 8 )
  {
    v3 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KiAcquireKobjectLockSafe(a1);
    v5 = *(_DWORD *)(a1 + 572);
    if ( (v5 & 7) == 0 && *(_QWORD *)(a1 + 48) != a1 + 48 && (v5 & 0xFFFFFFF8) == 0 )
    {
      while ( 1 )
      {
        v8 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 572), v5 & 0xFFFFFFF8 | 3, v5);
        if ( v8 == v5 )
          break;
        if ( (v5 & 0xFFFFFFF8) != 0 )
          goto LABEL_5;
      }
      v3 = 1;
    }
LABEL_5:
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    LODWORD(v2) = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v3 )
    {
      v6 = (signed __int64 *)(a1 + 264);
      _m_prefetchw(&KiProcessOutSwapListHead);
      v2 = KiProcessOutSwapListHead;
      do
      {
        *v6 = v2;
        v7 = v2;
        v2 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v6, v2);
      }
      while ( v2 != v7 );
      if ( !v2 )
        LODWORD(v2) = KeSetEvent(&KiSwapEvent, 10, 0);
    }
  }
  return v2;
}
