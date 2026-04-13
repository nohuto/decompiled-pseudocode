/*
 * XREFs of _lambda_31b30073c32c2d01143855768ac2b990_::__lambda_31b30073c32c2d01143855768ac2b990_ @ 0x18000F088
 * Callers:
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18000E350 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 *     ??_E?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_31b30073c32c2d01143855768ac2b990_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x18001A9B0 (--_E-$COperationLambda0@V-$CCallAsyncLambda@V_lambda_31b30073c32c2d01143855768ac2b990_@@@Interna.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$7 @ 0x180028B7F (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$7.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006F80 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIProcessCreat.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

HRESULT __fastcall lambda_31b30073c32c2d01143855768ac2b990_::__lambda_31b30073c32c2d01143855768ac2b990_(_QWORD *a1)
{
  __int64 v1; // rsi
  HRESULT result; // eax
  __int64 v4; // rsi
  HSTRING v5; // rcx
  HSTRING v6; // rcx
  HSTRING v7; // rcx
  HSTRING v8; // rcx
  volatile signed __int64 *v9; // rcx

  v1 = a1[12];
  if ( v1 )
  {
    a1[12] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  v4 = a1[11];
  if ( v4 )
  {
    a1[11] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (HSTRING)a1[9];
  if ( v5 )
    result = WindowsDeleteString(v5);
  v6 = (HSTRING)a1[7];
  if ( v6 )
    result = WindowsDeleteString(v6);
  v7 = (HSTRING)a1[5];
  if ( v7 )
    result = WindowsDeleteString(v7);
  v8 = (HSTRING)a1[3];
  if ( v8 )
    result = WindowsDeleteString(v8);
  v9 = (volatile signed __int64 *)a1[1];
  if ( v9 )
  {
    a1[1] = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v9);
  }
  return result;
}
