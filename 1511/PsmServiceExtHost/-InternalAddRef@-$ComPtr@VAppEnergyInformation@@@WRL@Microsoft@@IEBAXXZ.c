/*
 * XREFs of ?InternalAddRef@?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@IEBAXXZ @ 0x180051B20
 * Callers:
 *     ??$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Details@WRL@Microsoft@@YAJPEAPEAVAppEnergyInformation@@$$QEAPEAUIEnergyNotificationServer@@$$QEAPEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Z @ 0x18004F26C (--$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecService.c)
 *     ??$_NewNodeConstruct@AEAPEBGPEAVAppEnergyInformation@@@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@AEAAPEAU?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@1@AEAPEBG$$QEAPEAVAppEnergyInformation@@@Z @ 0x18004F788 (--$_NewNodeConstruct@AEAPEBGPEAVAppEnergyInformation@@@-$_HashTable@V-$basic_string@GU-$char_tra.c)
 *     ?GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@Z @ 0x180050AA0 (-GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV-$ComPtr@VAppEnergyInformation.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AppEnergyInformation>::InternalAddRef(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
  return result;
}
