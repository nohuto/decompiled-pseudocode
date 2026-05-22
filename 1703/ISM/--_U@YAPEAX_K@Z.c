/*
 * XREFs of ??_U@YAPEAX_K@Z @ 0x18009E024
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18000AD58 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z @ 0x18000CAA0 (-SetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z.c)
 *     ??0GestureTargetingComponent@@IEAA@XZ @ 0x18000D698 (--0GestureTargetingComponent@@IEAA@XZ.c)
 *     ?SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAXIIPEAI@Z @ 0x18000DB24 (-SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAXIIPEAI@Z.c)
 *     ?OnPointerInfoFrame@GestureTargetingComponent@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x18000E420 (-OnPointerInfoFrame@GestureTargetingComponent@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInputFrame@GestureTargetingComponent@@@Z @ 0x18000ECC4 (-SetValueForKey@-$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInput.c)
 *     ??0GestureTargetingTarget@@IEAA@PEAVGestureTargetingComponent@@PEAUIInputTarget@@@Z @ 0x18000EFA8 (--0GestureTargetingTarget@@IEAA@PEAVGestureTargetingComponent@@PEAUIInputTarget@@@Z.c)
 *     ?Enqueue@?$DynamicSizeQueue@UInputInfo@@$09@@QEAAJAEBUInputInfo@@@Z @ 0x1800106CC (-Enqueue@-$DynamicSizeQueue@UInputInfo@@$09@@QEAAJAEBUInputInfo@@@Z.c)
 *     ?Enqueue@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJAEBUChainedTarget@GestureTargetingTarget@@@Z @ 0x1800108B0 (-Enqueue@-$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJAEBUChainedTarget@G.c)
 *     ?SetValueForKey@?$DynamicSizeMap@I_N$09@@QEAAJAEBIAEB_N@Z @ 0x180010E64 (-SetValueForKey@-$DynamicSizeMap@I_N$09@@QEAAJAEBIAEB_N@Z.c)
 *     ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180011898 (--0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x180011DE8 (--1DWMInputRouter@@MEAA@XZ.c)
 *     ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x180013540 (-NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z @ 0x180013E50 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z @ 0x1800143C0 (-InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x1800145D4 (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z @ 0x180016190 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z.c)
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180016F50 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@AEBQEAUIInputTarget@@@Z @ 0x1800189CC (-SetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?SetValueForKey@?$DynamicSizeMap@U_GUID@@V?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@$00@@QEAAJAEBU_GUID@@AEBV?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@@Z @ 0x180018CDC (-SetValueForKey@-$DynamicSizeMap@U_GUID@@V-$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV-$vector.c)
 *     ?GetHMonitors@DisplayBinding@@UEBAJPEAPEAPEAUHMONITOR__@@PEAI@Z @ 0x18001C0D0 (-GetHMonitors@DisplayBinding@@UEBAJPEAPEAPEAUHMONITOR__@@PEAI@Z.c)
 *     ?Set@Value@Input@@QEAAJPEBXK@Z @ 0x18002711C (-Set@Value@Input@@QEAAJPEBXK@Z.c)
 *     ?Deserialize@Value@Input@@QEAAJIPEAUIStream@@PEAK@Z @ 0x1800271B0 (-Deserialize@Value@Input@@QEAAJIPEAUIStream@@PEAK@Z.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x18005C34C (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18005C970 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNION@@@Z @ 0x18005D2F0 (-SetValueForKey@-$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNIO.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KK$01@@QEAAJAEBK0@Z @ 0x18005D588 (-SetValueForKey@-$DynamicSizeMap@KK$01@@QEAAJAEBK0@Z.c)
 *     ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005FE00 (-OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?RuntimeClassInitialize@InputQueue@@UEAAJPEAUIInputQueueHost@@I@Z @ 0x18006C190 (-RuntimeClassInitialize@InputQueue@@UEAAJPEAUIInputQueueHost@@I@Z.c)
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800707D4 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x180072514 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ?Create@TouchDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180073BB4 (-Create@TouchDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180074348 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007BF60 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x18007C714 (-IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007CD00 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18007DC14 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007DDC0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ??0InputInfoSanitizer@@QEAA@PEAUIInputClient@@_N1@Z @ 0x18007E364 (--0InputInfoSanitizer@@QEAA@PEAUIInputClient@@_N1@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KAEBUPreviousState@InputInfoSanitizer@@@Z @ 0x18007F1D8 (-SetValueForKey@-$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KAEBUPreviou.c)
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JW4GetPoseAtTimePurpose@234@PEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x18008A960 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JW4GetPoseAtTimePur.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new[](size_t a1)
{
  return operator new(a1);
}
