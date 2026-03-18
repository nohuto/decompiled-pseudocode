/*
 * XREFs of FsRtlAllocatePoolWithQuota @ 0x1401B9214
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 */

PVOID __fastcall FsRtlAllocatePoolWithQuota(POOL_TYPE a1, unsigned int a2)
{
  PVOID result; // rax

  result = ExAllocatePoolWithQuotaTag(a1, a2, 0x74725346u);
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
