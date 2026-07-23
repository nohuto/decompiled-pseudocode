/*
 * XREFs of sub_1406AF0C0 @ 0x1406AF0C0
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14051CB5C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExInitLicenseData @ 0x1407B505C (ExInitLicenseData.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 */

NTSTATUS __fastcall sub_1406AF0C0(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
