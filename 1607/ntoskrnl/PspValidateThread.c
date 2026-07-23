/*
 * XREFs of PspValidateThread @ 0x1400EC448
 * Callers:
 *     PsSetThreadProperty @ 0x1400AF06C (PsSetThreadProperty.c)
 *     PsGetThreadProperty @ 0x1400EC3B0 (PsGetThreadProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspValidateThread(_KTHREAD *a1)
{
  if ( a1 == KeGetCurrentPrcb()->IdleThread )
    return 3221225659LL;
  if ( KeGetCurrentIrql() >= 2u
    || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(a1[-1].WriteTransferCount) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8)] == PsThreadType )
  {
    if ( a1 != KeGetCurrentThread() || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      return 0LL;
    return 3221225659LL;
  }
  return 3221225485LL;
}
