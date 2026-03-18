/*
 * XREFs of KiForceSymbolReferences @ 0x1407FA9CC
 * Callers:
 *     KiInitSystem @ 0x1407E496C (KiInitSystem.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 */

__int64 __fastcall KiForceSymbolReferences(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  signed __int32 v8; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp+10h] BYREF

  if ( !KeGetPcr()->Prcb.Number )
  {
    v4 = KeAbPreAcquire((ULONG_PTR)&BugCheckParameter2, 0LL, 1LL, a4);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&BugCheckParameter2, 0LL) )
    {
      if ( v4 )
        KeAbPostReleaseEx((ULONG_PTR)&BugCheckParameter2, v4);
    }
    else if ( v4 )
    {
      *(_BYTE *)(v4 + 26) |= 1u;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ExTryAcquireSpinLockExclusiveAtDpcLevel(&v8);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
