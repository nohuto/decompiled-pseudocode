/*
 * XREFs of KeRetryOutswapProcess @ 0x1400B3328
 * Callers:
 *     MiProcessWorkingSets @ 0x1400CB4E0 (MiProcessWorkingSets.c)
 *     MmReleaseCommitForMemResetPages @ 0x1401E0E70 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 */

int __fastcall KeRetryOutswapProcess(volatile signed __int32 *a1)
{
  unsigned __int8 CurrentIrql; // di
  signed __int64 v3; // rax
  signed __int64 *v4; // rbx
  signed __int64 v5; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe(a1);
  LODWORD(v3) = a1[143] & 7;
  if ( (_DWORD)v3 == 1 )
    _InterlockedXor(a1 + 143, 7u);
  _InterlockedAnd(a1, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  if ( (_DWORD)v3 == 1 )
  {
    v4 = (signed __int64 *)(a1 + 66);
    _m_prefetchw(&KiProcessOutSwapListHead);
    v3 = KiProcessOutSwapListHead;
    do
    {
      *v4 = v3;
      v5 = v3;
      v3 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v4, v3);
    }
    while ( v3 != v5 );
    if ( !v3 )
      LODWORD(v3) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v3;
}
