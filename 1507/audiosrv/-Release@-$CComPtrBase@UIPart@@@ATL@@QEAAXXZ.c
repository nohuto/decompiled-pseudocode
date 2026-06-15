/*
 * XREFs of ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180068230
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001D4B0 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001E630 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180040374 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$0 @ 0x180047220 (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$2 @ 0x18004725C (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$2.c)
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$3 @ 0x180047268 (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$3.c)
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$4 @ 0x18004745D (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$4.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const_____ptr64_&___ptr64_int_&___ptr64__::_1_::dtor$0 @ 0x180048BD0 (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_un.c)
 *     ?ProviderFinalRelease@CMeterHardware@@UEAAXXZ @ 0x18006D090 (-ProviderFinalRelease@CMeterHardware@@UEAAXXZ.c)
 *     ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18006D4E0 (-InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ @ 0x18006D900 (-NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMuteHardware@@UEAAXXZ @ 0x18006DCA0 (-ProviderFinalRelease@CMuteHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x18006DD50 (-ProviderFinalRelease@CMuteSoftware@@UEAAXXZ.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x18006E090 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18006EF10 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ @ 0x18006F5F0 (-NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x18006FA40 (-ProviderFinalRelease@CVolumeHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x18006FAF0 (-ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180070BC0 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x1800983D8 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18009C9C0 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComPtrBase<IPart>::Release(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
