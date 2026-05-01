/*
 * XREFs of ?InternalAddRef@?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@IEBAXXZ @ 0x18004AC88
 * Callers:
 *     ??$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Details@WRL@Microsoft@@YAJPEAPEAVAppEnergyInformation@@$$QEAPEAUIEnergyNotificationServer@@$$QEAPEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Z @ 0x1800482BC (--$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecService.c)
 *     ??$emplace@AEAPEBGPEAVAppEnergyInformation@@@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@utl@@_N@1@AEAPEBG$$QEAPEAVAppEnergyInformation@@@Z @ 0x18004880C (--$emplace@AEAPEBGPEAVAppEnergyInformation@@@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@.c)
 *     ?GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@Z @ 0x180049AC8 (-GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV-$ComPtr@VAppEnergyInformation.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AppEnergyInformation>::InternalAddRef(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
  return result;
}
