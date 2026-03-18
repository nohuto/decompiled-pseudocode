/*
 * XREFs of HvlpHvToNtStatus @ 0x1401AE8CC
 * Callers:
 *     HvlMapDeviceInterrupt @ 0x1401B08E0 (HvlMapDeviceInterrupt.c)
 *     HvlRetargetDeviceInterrupt @ 0x1401B0F5C (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x1401B1558 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x1401B15EC (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1401B16C4 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1401B1718 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401B1784 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1401B187C (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1401B18BC (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1401B1928 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1401B196C (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1401B19F8 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x1401B1CB0 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401B1D40 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x1401B1DB0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpAttachRootSvmDevice @ 0x1401B1E4C (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1401B1F04 (HvlpDetachRootSvmDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpHvToNtStatus(unsigned __int16 a1)
{
  switch ( a1 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
  }
  return a1 | 0xC0350000;
}
