/*
 * XREFs of FsRtlAllocatePoolWithQuotaTag @ 0x1401E2CD4
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall FsRtlAllocatePoolWithQuotaTag(POOL_TYPE a1, unsigned int a2, ULONG a3)
{
  PVOID result; // rax

  result = ExAllocatePoolWithQuotaTag(a1, a2, a3);
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
