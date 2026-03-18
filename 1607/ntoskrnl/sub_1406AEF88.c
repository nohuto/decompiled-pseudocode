/*
 * XREFs of sub_1406AEF88 @ 0x1406AEF88
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140496474 (ExUpdateLicenseDataInternal.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1404A475C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExInitLicenseData @ 0x1407B505C (ExInitLicenseData.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 */

NTSTATUS __fastcall sub_1406AEF88(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
