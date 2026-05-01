/*
 * XREFs of IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x1800216A4
 * Callers:
 *     ?RmpSystemQueryPackagePartitions@@YAJPEBG_KPEAPEAX2PEAK@Z @ 0x180013AD8 (-RmpSystemQueryPackagePartitions@@YAJPEBG_KPEAPEAX2PEAK@Z.c)
 *     PsmInitializeServiceExtension4 @ 0x18001CB20 (PsmInitializeServiceExtension4.c)
 *     ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x18001F804 (-RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z.c)
 *     ?RmpSystemNotifyGameModeExtensionRecipientsPresent@@YAXE@Z @ 0x180037CE8 (-RmpSystemNotifyGameModeExtensionRecipientsPresent@@YAXE@Z.c)
 *     ?RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z @ 0x180037D0C (-RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180021470 (ApiSetQueryApiSetPresence_0.c)
 */

char IsNotifyGameModeExtensionRecipientsPresentPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18004D690 == 1 )
    return 1;
  if ( dword_18004D690 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"68", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_18004D690 = 2 - (v1 != 0);
  return result;
}
