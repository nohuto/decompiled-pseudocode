/*
 * XREFs of atexit @ 0x180027D64
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800012C0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Generic_object__ @ 0x180001300 (_dynamic_initializer_for__std--_Error_objects_int_--_Generic_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Iostream_object__ @ 0x180001310 (_dynamic_initializer_for__std--_Error_objects_int_--_Iostream_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_System_object__ @ 0x180001320 (_dynamic_initializer_for__std--_Error_objects_int_--_System_object__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x180001330 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Microsoft--WRL--Details--DefaultModule_1___--.c)
 *     std::_dynamic_initializer_for___Fac_tidy_reg__ @ 0x180001390 (std--_dynamic_initializer_for___Fac_tidy_reg__.c)
 *     std::_dynamic_initializer_for__classic_locale__ @ 0x1800013A0 (std--_dynamic_initializer_for__classic_locale__.c)
 *     std::_dynamic_initializer_for__initlocks__ @ 0x1800013B0 (std--_dynamic_initializer_for__initlocks__.c)
 *     _dynamic_initializer_for__init_atexit__ @ 0x1800013D0 (_dynamic_initializer_for__init_atexit__.c)
 *     std::_dynamic_initializer_for__initlocks___0 @ 0x1800013E0 (std--_dynamic_initializer_for__initlocks___0.c)
 *     DllCanUnloadNow @ 0x180006750 (DllCanUnloadNow.c)
 *     DllGetClassObject @ 0x1800067C0 (DllGetClassObject.c)
 *     DllGetActivationFactory @ 0x1800068C0 (DllGetActivationFactory.c)
 *     ?Instance@ShellPlacementTelemetry@Logging@CreativeFramework@@KAPEAV123@XZ @ 0x18000B914 (-Instance@ShellPlacementTelemetry@Logging@CreativeFramework@@KAPEAV123@XZ.c)
 *     ?Instance@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@KAPEAV123@XZ @ 0x18000D6B4 (-Instance@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@KAPEAV123@XZ.c)
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 *     ??1Completer@?$static_lazy@VShellPlacementTelemetry@Logging@CreativeFramework@@@details@wil@@QEAA@XZ @ 0x180016064 (--1Completer@-$static_lazy@VShellPlacementTelemetry@Logging@CreativeFramework@@@details@wil@@QEA.c)
 *     ??1Completer@?$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@details@wil@@QEAA@XZ @ 0x18001615C (--1Completer@-$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x1800199B4 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x180019AF0 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x180019C2C (--$HandleEvent@$09I_K@-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$08$$$V@PlacementHealth@?A0x15bf3041@@YAXPEBG@Z @ 0x180019D68 (--$HandleEvent@$08$$$V@PlacementHealth@-A0x15bf3041@@YAXPEBG@Z.c)
 * Callees:
 *     _onexit_0 @ 0x180027CC0 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
