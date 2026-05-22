/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009DF10
 * Callers:
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x180011DE8 (--1DWMInputRouter@@MEAA@XZ.c)
 *     ??1?$DynamicSizeMap@U_GUID@@V?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@$00@@QEAA@XZ @ 0x180017E58 (--1-$DynamicSizeMap@U_GUID@@V-$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UI.c)
 *     ?SetValueForKey@?$DynamicSizeMap@U_GUID@@V?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@$00@@QEAAJAEBU_GUID@@AEBV?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@@Z @ 0x180018CDC (-SetValueForKey@-$DynamicSizeMap@U_GUID@@V-$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV-$vector.c)
 *     ?ProcessInit@PropertyDefinitions@@SAJXZ @ 0x180029524 (-ProcessInit@PropertyDefinitions@@SAJXZ.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180056210 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800563A0 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_GTargetingArbitrationComponent@@MEAAPEAXI@Z @ 0x18007F5C0 (--_GTargetingArbitrationComponent@@MEAAPEAXI@Z.c)
 *     ?OnHitTest@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18007F7E0 (-OnHitTest@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarg.c)
 *     ?OnGetTargetWithFocus@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18007FC50 (-OnGetTargetWithFocus@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEA.c)
 *     ?DoConvergedTargetingDecision@TargetingArbitrationComponent@@UEAAJPEAUtagINPUTDEST@@PEAUIInputDisplay@@PEAUInputInfo@@PEAW4InputTargetingResult@@@Z @ 0x180080090 (-DoConvergedTargetingDecision@TargetingArbitrationComponent@@UEAAJPEAUtagINPUTDEST@@PEAUIInputDi.c)
 *     ??_EBufferedInputTarget@@MEAAPEAXI@Z @ 0x1800803F0 (--_EBufferedInputTarget@@MEAAPEAXI@Z.c)
 *     _DWMInputRouter::_DWMInputRouter_::_1_::dtor$12 @ 0x18009F884 (_DWMInputRouter--_DWMInputRouter_--_1_--dtor$12.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$14 @ 0x1800A0A28 (_PropertyDefinitions--ProcessInit_--_1_--dtor$14.c)
 *     _TargetingArbitrationComponent::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1800A3358 (_TargetingArbitrationComponent--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _TargetingArbitrationComponent::OnHitTest_::_1_::dtor$2 @ 0x1800A3392 (_TargetingArbitrationComponent--OnHitTest_--_1_--dtor$2.c)
 *     _TargetingArbitrationComponent::OnGetTargetWithFocus_::_1_::dtor$2 @ 0x1800A33EF (_TargetingArbitrationComponent--OnGetTargetWithFocus_--_1_--dtor$2.c)
 *     _TargetingArbitrationComponent::DoConvergedTargetingDecision_::_1_::dtor$0 @ 0x1800A3440 (_TargetingArbitrationComponent--DoConvergedTargetingDecision_--_1_--dtor$0.c)
 *     _BufferedInputTarget::BufferedInputTarget_::_1_::dtor$2 @ 0x1800A3499 (_BufferedInputTarget--BufferedInputTarget_--_1_--dtor$2.c)
 *     _BufferedInputTarget::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x1800A34FA (_BufferedInputTarget--_scalar_deleting_destructor__--_1_--dtor$2.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18009DF7C (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
