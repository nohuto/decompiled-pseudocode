/*
 * XREFs of HvlpHvToNtStatus @ 0x1401BFEA4
 * Callers:
 *     HvlpReadPerfRegister @ 0x1401BBBC8 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1401BC800 (HvlpWritePerfRegister.c)
 *     HvlHvDebuggerPowerHandler @ 0x1401BCCF8 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x1401BD188 (HvlMapDeviceInterrupt.c)
 *     HvlRetargetDeviceInterrupt @ 0x1401BD790 (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x1401BDD84 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x1401BDE18 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1401BDEF0 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1401BDF44 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401BDFB0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1401BE0A8 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1401BE0E8 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1401BE154 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1401BE198 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1401BE224 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x1401BE4E0 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401BE570 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x1401BE5E0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpAttachRootSvmDevice @ 0x1401BE67C (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1401BE734 (HvlpDetachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x14023CD50 (HvlpAddPhysicalMemory.c)
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
