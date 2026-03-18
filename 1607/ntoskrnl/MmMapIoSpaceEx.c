/*
 * XREFs of MmMapIoSpaceEx @ 0x14009B870
 * Callers:
 *     MmMapIoSpace @ 0x14009B474 (MmMapIoSpace.c)
 *     BgpFwLibraryEnable @ 0x140126FDC (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x140139B58 (HvlEnlightenProcessor.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1401BB72C (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x1401C08E8 (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1401C3E00 (BgkNotifyDisplayOwnershipLost.c)
 *     WmipFirmwareTableHandler @ 0x14022496C (WmipFirmwareTableHandler.c)
 *     InbvPortInitialize @ 0x14023DE2C (InbvPortInitialize.c)
 *     PopGetHwConfigurationSignature @ 0x1403D21C4 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x1404BE7E0 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C53C (ExpGetSystemPlatformBinary.c)
 *     WmipFindSMBiosStructure @ 0x14069D294 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14069D3B8 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x14069D4A4 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x14069D940 (WmipParseSysIdTable.c)
 *     VerifierMmMapIoSpace @ 0x14071BEBC (VerifierMmMapIoSpace.c)
 *     KiVerifyXcpt15 @ 0x1407772E0 (KiVerifyXcpt15.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14002BD00 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x14009B8AC (MiMapContiguousMemory.c)
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
