/*
 * XREFs of _lambda_50e7782a30e90defa1ee26bf640ccf69_::operator() @ 0x180042384
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_50e7782a30e90defa1ee26bf640ccf69____Windows::Internal::CNoResult_::Run @ 0x1800437A0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_50e7782a30e90de.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18002FD9C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180038C10 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003BCD4 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0C.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800429C4 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAA.c)
 *     ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x180042D98 (--A-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@U-$less@V-$basic_stri.c)
 *     ??$Start@PEBGPEBGPEBG@ActionInvoked@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBG00@Z @ 0x1800430D4 (--$Start@PEBGPEBGPEBG@ActionInvoked@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_50e7782a30e90defa1ee26bf640ccf69_::operator()(__int64 a1)
{
  const char *v2; // r9
  unsigned int v4; // [rsp+20h] [rbp-1D8h]
  void *v5[2]; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v6; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v7; // [rsp+58h] [rbp-1A0h]
  void *v8[2]; // [rsp+60h] [rbp-198h] BYREF
  __int64 v9; // [rsp+70h] [rbp-188h]
  unsigned __int64 v10; // [rsp+78h] [rbp-180h]
  void *v11[2]; // [rsp+80h] [rbp-178h] BYREF
  __int64 v12; // [rsp+90h] [rbp-168h]
  unsigned __int64 v13; // [rsp+98h] [rbp-160h]
  _QWORD v14[40]; // [rsp+A0h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v13 = 7LL;
  v12 = 0LL;
  LOWORD(v11[0]) = 0;
  std::wstring::assign(v11, (char *)L"ctx.creativeId", aCtxCreativeid[0] != 0 ? 0xE : 0);
  std::map<std::wstring,std::wstring>::operator[](*(_QWORD *)a1 + 80LL, v11);
  v10 = 7LL;
  v9 = 0LL;
  LOWORD(v8[0]) = 0;
  std::wstring::assign(v8, (char *)L"ctx.placementId", aCtxPlacementid[0] != 0 ? 0xF : 0);
  std::map<std::wstring,std::wstring>::operator[](*(_QWORD *)a1 + 80LL, v8);
  v7 = 7LL;
  v6 = 0LL;
  LOWORD(v5[0]) = 0;
  std::wstring::assign(v5, (char *)L"ctx.action", aCtxAction[0] != 0 ? 0xA : 0);
  std::map<std::wstring,std::wstring>::operator[](*(_QWORD *)a1 + 80LL, v5);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvoked::Start<unsigned short const *,unsigned short const *,unsigned short const *>((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvoked *)v14);
  if ( v7 >= 8 )
    operator delete(v5[0]);
  v7 = 7LL;
  v6 = 0LL;
  LOWORD(v5[0]) = 0;
  if ( v10 >= 8 )
    operator delete(v8[0]);
  v10 = 7LL;
  v9 = 0LL;
  LOWORD(v8[0]) = 0;
  if ( v13 >= 8 )
    operator delete(v11[0]);
  v13 = 7LL;
  v12 = 0LL;
  LOWORD(v11[0]) = 0;
  try
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 64LL) + 8LL))(*(_QWORD *)(*(_QWORD *)a1 + 64LL));
  }
  catch ( ... )
  {
    v4 = wil::details::in1diag3::Return_CaughtException(
           retaddr,
           (void *)0x88,
           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
           v2);
    v14[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvoked::`vftable';
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v14);
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v14);
    return v4;
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v14);
  v14[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvoked::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v14);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v14);
  return 0LL;
}
