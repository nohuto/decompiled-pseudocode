/*
 * XREFs of KiDecrementProcessStackCount @ 0x14002DAC8
 * Callers:
 *     KeDeleteThread @ 0x14002DA44 (KeDeleteThread.c)
 *     KiSuspendThread @ 0x140030EF4 (KiSuspendThread.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KiOutSwapKernelStacks @ 0x1400E8164 (KiOutSwapKernelStacks.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

int __fastcall KiDecrementProcessStackCount(__int64 a1)
{
  signed __int64 v2; // rax
  char v3; // di
  unsigned __int8 CurrentIrql; // si
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  signed __int64 *v7; // rbx
  signed __int64 v8; // rcx

  LODWORD(v2) = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 572), 0xFFFFFFF8) & 0xFFFFFFF8;
  if ( (_DWORD)v2 == 8 )
  {
    v3 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KiAcquireKobjectLockSafe(a1);
    v5 = *(_DWORD *)(a1 + 572);
    if ( (v5 & 7) == 0 && *(_QWORD *)(a1 + 48) != a1 + 48 )
    {
      while ( (v5 & 0xFFFFFFF8) == 0 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 572), v5 & 0xFFFFFFF8 | 3, v5);
        if ( v6 == v5 )
        {
          v3 = 1;
          break;
        }
      }
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    LODWORD(v2) = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v3 )
    {
      v7 = (signed __int64 *)(a1 + 264);
      _m_prefetchw(&KiProcessOutSwapListHead);
      v2 = KiProcessOutSwapListHead;
      do
      {
        *v7 = v2;
        v8 = v2;
        v2 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v7, v2);
      }
      while ( v2 != v8 );
      if ( !v2 )
        LODWORD(v2) = KeSetEvent(&KiSwapEvent, 10, 0);
    }
  }
  return v2;
}
