/*
 * XREFs of HvlpHvToNtStatus @ 0x1401BFFC0
 * Callers:
 *     HvlpReadPerfRegister @ 0x1401BBCE4 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1401BC91C (HvlpWritePerfRegister.c)
 *     HvlHvDebuggerPowerHandler @ 0x1401BCE14 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x1401BD2A4 (HvlMapDeviceInterrupt.c)
 *     HvlRetargetDeviceInterrupt @ 0x1401BD8AC (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x1401BDEA0 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x1401BDF34 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1401BE00C (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1401BE060 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401BE0CC (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1401BE1C4 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1401BE204 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1401BE270 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1401BE2B4 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1401BE340 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x1401BE5FC (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401BE68C (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x1401BE6FC (HvlUnmapDeviceInterrupt.c)
 *     HvlpAttachRootSvmDevice @ 0x1401BE798 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1401BE850 (HvlpDetachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x14023CE6C (HvlpAddPhysicalMemory.c)
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
