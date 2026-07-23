/*
 * XREFs of MmMapIoSpaceEx @ 0x14009B070
 * Callers:
 *     MmMapIoSpace @ 0x14009AC74 (MmMapIoSpace.c)
 *     BgpFwLibraryEnable @ 0x14012754C (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x14013A0C8 (HvlEnlightenProcessor.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1401BB610 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x1401C07CC (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1401C3CE4 (BgkNotifyDisplayOwnershipLost.c)
 *     WmipFirmwareTableHandler @ 0x140224798 (WmipFirmwareTableHandler.c)
 *     InbvPortInitialize @ 0x14023DD10 (InbvPortInitialize.c)
 *     PopGetHwConfigurationSignature @ 0x1403D21C4 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x1404AA510 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C9E8 (ExpGetSystemPlatformBinary.c)
 *     WmipFindSMBiosStructure @ 0x14069D378 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14069D49C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x14069D588 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x14069DA24 (WmipParseSysIdTable.c)
 *     VerifierMmMapIoSpace @ 0x14071BEBC (VerifierMmMapIoSpace.c)
 *     KiVerifyXcpt15 @ 0x1407772E0 (KiVerifyXcpt15.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x14009B0AC (MiMapContiguousMemory.c)
 */

__int64 __fastcall MmMapIoSpaceEx(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  __int64 v4; // r10
  __int64 v5; // r11

  ProtectionMask = MiMakeProtectionMask(a3);
  if ( (ProtectionMask & 2) != 0 && (ProtectionMask & 0xFFFFFFF8) == 0x18 && (ProtectionMask & 7) != 0 )
    return 0LL;
  else
    return MiMapContiguousMemory(v4, v5, ProtectionMask, 0LL);
}
