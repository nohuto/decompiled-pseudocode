/*
 * XREFs of memcpy_0 @ 0x18009EAF8
 * Callers:
 *     memcpy_s @ 0x180001600 (memcpy_s.c)
 *     ?OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z @ 0x180009F90 (-OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z @ 0x18000CAA0 (-SetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z.c)
 *     ?SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAXIIPEAI@Z @ 0x18000DB24 (-SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAXIIPEAI@Z.c)
 *     ?OnPointerInfoFrame@GestureTargetingComponent@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x18000E420 (-OnPointerInfoFrame@GestureTargetingComponent@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInputFrame@GestureTargetingComponent@@@Z @ 0x18000ECC4 (-SetValueForKey@-$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInput.c)
 *     ?Enqueue@?$DynamicSizeQueue@UInputInfo@@$09@@QEAAJAEBUInputInfo@@@Z @ 0x1800106CC (-Enqueue@-$DynamicSizeQueue@UInputInfo@@$09@@QEAAJAEBUInputInfo@@@Z.c)
 *     ?Enqueue@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJAEBUChainedTarget@GestureTargetingTarget@@@Z @ 0x1800108B0 (-Enqueue@-$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJAEBUChainedTarget@G.c)
 *     ?SetValueForKey@?$DynamicSizeMap@I_N$09@@QEAAJAEBIAEB_N@Z @ 0x180010E64 (-SetValueForKey@-$DynamicSizeMap@I_N$09@@QEAAJAEBIAEB_N@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@AEBQEAUIInputTarget@@@Z @ 0x1800189CC (-SetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?SetValueForKey@?$DynamicSizeMap@U_GUID@@V?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@$00@@QEAAJAEBU_GUID@@AEBV?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@@Z @ 0x180018CDC (-SetValueForKey@-$DynamicSizeMap@U_GUID@@V-$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV-$vector.c)
 *     ?GetBounds@DisplayBinding@@UEAAJPEAJ0@Z @ 0x18001C370 (-GetBounds@DisplayBinding@@UEAAJPEAJ0@Z.c)
 *     ?GetRotation@DisplayBinding@@UEAA?AW4DISPLAYCONFIG_ROTATION@@XZ @ 0x18001C510 (-GetRotation@DisplayBinding@@UEAA-AW4DISPLAYCONFIG_ROTATION@@XZ.c)
 *     ?OnOrientationChanged@DisplayBinding@@UEAAJPEAUIInputDisplay@@W4DISPLAYCONFIG_ROTATION@@@Z @ 0x18001C940 (-OnOrientationChanged@DisplayBinding@@UEAAJPEAUIInputDisplay@@W4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     std::_Func_impl__lambda_d29ab57dd9545fc931c9dab5b1cf9752__std::allocator_int__bool_Input::PropertyNode_____ptr64_void_____ptr64_unsigned_long_::_Do_call @ 0x18001CE80 (std--_Func_impl__lambda_d29ab57dd9545fc931c9dab5b1cf9752__std--allocator_int__bool__ea_18001CE80.c)
 *     ??4CursorGlyphInfo@@QEAAAEAU0@$$QEAU0@@Z @ 0x180020A08 (--4CursorGlyphInfo@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z @ 0x18002178C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x180021890 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x180021994 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180021B14 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180021C60 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x180021E38 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ?Set@Value@Input@@QEAAJPEBXK@Z @ 0x18002711C (-Set@Value@Input@@QEAAJPEBXK@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18002A36C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18002A464 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18002A588 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18002A6E8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ?RecordContacts@TouchContactFilter@@QEAAXKPEBUTouchContactInfo@@@Z @ 0x180039E40 (-RecordContacts@TouchContactFilter@@QEAAXKPEBUTouchContactInfo@@@Z.c)
 *     memcpy_s_0 @ 0x18003CA8C (memcpy_s_0.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x180046814 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_180046814.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800468A0 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800468A0.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KAEBV12@@Z @ 0x180046CB0 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KAEBV12@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNION@@@Z @ 0x18005D2F0 (-SetValueForKey@-$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNIO.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KK$01@@QEAAJAEBK0@Z @ 0x18005D588 (-SetValueForKey@-$DynamicSizeMap@KK$01@@QEAAJAEBK0@Z.c)
 *     ?OnPointerInfoFrame@TouchProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x180060630 (-OnPointerInfoFrame@TouchProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z @ 0x180066724 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18006686C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K@Z @ 0x1800669E0 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K@Z.c)
 *     ?PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBX_K@Z @ 0x180069210 (-PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBX_K@Z.c)
 *     ?OnMessage@InputQueue@@QEAAJPEAUInputQueueMessage@@_K@Z @ 0x18006C590 (-OnMessage@InputQueue@@QEAAJPEAUInputQueueMessage@@_K@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KAEBUPreviousState@InputInfoSanitizer@@@Z @ 0x18007F1D8 (-SetValueForKey@-$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KAEBUPreviou.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
