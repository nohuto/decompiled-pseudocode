/*
 * XREFs of KiForceSymbolReferences @ 0x1407CFAC0
 * Callers:
 *     KiInitSystem @ 0x1407B29AC (KiInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 */

__int64 KiForceSymbolReferences()
{
  unsigned __int64 v0; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  signed __int32 v4; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp+10h] BYREF

  if ( !KeGetPcr()->Prcb.Number )
  {
    v0 = KeAbPreAcquire((ULONG_PTR)&BugCheckParameter2, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&BugCheckParameter2, 0LL) )
    {
      if ( v0 )
        KeAbPostReleaseEx((ULONG_PTR)&BugCheckParameter2, v0);
    }
    else if ( v0 )
    {
      *(_BYTE *)(v0 + 26) |= 1u;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ExTryAcquireSpinLockExclusiveAtDpcLevel(&v4);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
