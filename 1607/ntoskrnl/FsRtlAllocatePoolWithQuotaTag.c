/*
 * XREFs of FsRtlAllocatePoolWithQuotaTag @ 0x1401B923C
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 */

PVOID __fastcall FsRtlAllocatePoolWithQuotaTag(POOL_TYPE a1, unsigned int a2, ULONG a3)
{
  PVOID result; // rax

  result = ExAllocatePoolWithQuotaTag(a1, a2, a3);
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
