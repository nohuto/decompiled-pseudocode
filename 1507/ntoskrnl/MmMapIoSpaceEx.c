/*
 * XREFs of MmMapIoSpaceEx @ 0x140115984
 * Callers:
 *     MmMapIoSpace @ 0x140114D44 (MmMapIoSpace.c)
 *     BgpFwLibraryEnable @ 0x14015003C (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x14016337C (HvlEnlightenProcessor.c)
 *     HvlPhase1Initialize @ 0x1401706D4 (HvlPhase1Initialize.c)
 *     sub_1401E60EC @ 0x1401E60EC (sub_1401E60EC.c)
 *     HvlpInitializeHvCrashdump @ 0x1401EFA5C (HvlpInitializeHvCrashdump.c)
 *     WmipFirmwareTableHandler @ 0x14025C0C4 (WmipFirmwareTableHandler.c)
 *     PopGetHwConfigurationSignature @ 0x1403F0020 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x14052E0E8 (WmipGetSMBiosTableData.c)
 *     WmipFindSMBiosStructure @ 0x1406E1550 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1406E164C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1406E1738 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1406E1B60 (WmipParseSysIdTable.c)
 *     VerifierMmMapIoSpace @ 0x1407538C4 (VerifierMmMapIoSpace.c)
 *     KiVerifyXcpt15 @ 0x14079A2A0 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x1407B6E78 (PipInitComputerIds.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14008E520 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x1401159C0 (MiMapContiguousMemory.c)
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
