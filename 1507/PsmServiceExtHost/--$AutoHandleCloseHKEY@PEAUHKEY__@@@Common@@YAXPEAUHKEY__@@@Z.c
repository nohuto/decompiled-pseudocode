/*
 * XREFs of ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0
 * Callers:
 *     ?GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z @ 0x180002B90 (-GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z.c)
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x180007CA0 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 *     ??1RegistryKey@Common@@QEAA@XZ @ 0x180007F44 (--1RegistryKey@Common@@QEAA@XZ.c)
 *     ?MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@PEA_NPEAU_GUID@@2@Z @ 0x18001B5B0 (-MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@.c)
 *     ?Initialize@GameConfigStoreServer@ExecutionModel@@QEAAJPEBG@Z @ 0x18001BB0C (-Initialize@GameConfigStoreServer@ExecutionModel@@QEAAJPEBG@Z.c)
 *     ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x18001BD20 (-AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ExecutionModel::ReadPolicies @ 0x18001BE60 (ExecutionModel--ReadPolicies.c)
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x18001C21C (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ?Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z @ 0x18001C284 (-Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z.c)
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x18001D360 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 *     ?RpsGetDeviceTierName@@YAJPEAGPEAI@Z @ 0x180022070 (-RpsGetDeviceTierName@@YAJPEAGPEAI@Z.c)
 *     ?DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameConfig@2@PEAI@Z @ 0x180043AD8 (-DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameC.c)
 *     ?GetAllGameIds@GameConfigStoreServer@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z @ 0x180043F30 (-GetAllGameIds@GameConfigStoreServer@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z.c)
 *     ?GetGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z @ 0x1800440D0 (-GetGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z.c)
 *     ?GetGameIdsByExeName@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z @ 0x180044200 (-GetGameIdsByExeName@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z.c)
 *     ?GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@Z @ 0x1800442C0 (-GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@.c)
 *     ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180044D60 (-ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x180045018 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 *     ?RemoveGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@@Z @ 0x1800454C0 (-RemoveGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x1800455E4 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 *     ?VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z @ 0x1800461BC (-VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall Common::AutoHandleCloseHKEY<HKEY__ *>(HKEY a1)
{
  LSTATUS result; // eax

  result = (_DWORD)a1 - 1;
  if ( (unsigned __int64)a1 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    return RegCloseKey(a1);
  return result;
}
