/*
 * XREFs of sub_1400D08C8 @ 0x1400D08C8
 * Callers:
 *     NtLoadDriver @ 0x140493C20 (NtLoadDriver.c)
 *     IopUnloadDriver @ 0x140493DE4 (IopUnloadDriver.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall sub_1400D08C8(__int64 a1, SIZE_T a2)
{
  PVOID result; // rax

  if ( !ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithQuotaTag(PagedPool, a2, 0x20206F49u);
  result = ExAllocatePoolWithTagPriority(
             PagedPool,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
