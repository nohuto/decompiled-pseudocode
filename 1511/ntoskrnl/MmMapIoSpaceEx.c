/*
 * XREFs of MmMapIoSpaceEx @ 0x1400C0C7C
 * Callers:
 *     MmMapIoSpace @ 0x1400BD418 (MmMapIoSpace.c)
 *     BgpFwLibraryEnable @ 0x14011BDB8 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x140136D9C (HvlEnlightenProcessor.c)
 *     HvlPhase1Initialize @ 0x1401428B0 (HvlPhase1Initialize.c)
 *     sub_1401AEFE0 @ 0x1401AEFE0 (sub_1401AEFE0.c)
 *     HvlpInitializeHvCrashdump @ 0x1401B4B7C (HvlpInitializeHvCrashdump.c)
 *     WmipFirmwareTableHandler @ 0x14020CE00 (WmipFirmwareTableHandler.c)
 *     PopGetHwConfigurationSignature @ 0x14039DB44 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x140484514 (WmipGetSMBiosTableData.c)
 *     WmipFindSMBiosStructure @ 0x14065ECA8 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14065EDA4 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x14065EE90 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x14065F2B8 (WmipParseSysIdTable.c)
 *     VerifierMmMapIoSpace @ 0x1406CFDF8 (VerifierMmMapIoSpace.c)
 *     KiVerifyXcpt15 @ 0x14072D2A0 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x14074FA48 (PipInitComputerIds.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x140062870 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
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
