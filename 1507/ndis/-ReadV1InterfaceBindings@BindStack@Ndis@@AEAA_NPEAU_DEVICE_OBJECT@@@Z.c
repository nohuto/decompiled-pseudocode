/*
 * XREFs of ?ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z @ 0x1C00B25C8
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ??$QueryValueMultisz@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_@@@Z @ 0x1C00A5324 (--$QueryValueMultisz@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8a.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00A55D4 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 *     ?ReadV1FilterList@BindStack@Ndis@@AEAAJAEAVKRegKey@@@Z @ 0x1C00B269C (-ReadV1FilterList@BindStack@Ndis@@AEAAJAEAVKRegKey@@@Z.c)
 */

char __fastcall Ndis::BindStack::ReadV1InterfaceBindings(Ndis::BindStack *this, PDEVICE_OBJECT DeviceObject)
{
  HANDLE v3; // rbx
  char v4; // di
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF
  HANDLE v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( IoOpenDeviceRegistryKey(DeviceObject, 2u, 8u, &v7) < 0 )
    return 0;
  v3 = 0LL;
  v4 = 1;
  if ( v7 )
    v3 = v7;
  Handle = 0LL;
  if ( (int)KRegKey::Open((KRegKey *)&Handle, 1u, L"Linkage", v3) < 0
    || (int)Ndis::BindStack::ReadV1FilterList(this, (struct KRegKey *)&Handle) < 0
    || (int)KRegKey::QueryValueMultisz<_lambda_fa4c34603c51c7c89984ed578d5a8406_,_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_>(
              &Handle,
              (_UNICODE_STRING *)&Ndis::UpperBindValueName,
              (__int64)this,
              this) < 0 )
  {
    v4 = 0;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v3 )
    ZwClose(v3);
  return v4;
}
