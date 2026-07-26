/*
 * XREFs of ?ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z @ 0x1C00DD958
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A8460 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00A2098 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 *     ?ReadV1OrV2ProtocolList@BindStack@Ndis@@AEAAJAEAVKRegKey@@PEBU_UNICODE_STRING@@@Z @ 0x1C00A5D28 (-ReadV1OrV2ProtocolList@BindStack@Ndis@@AEAAJAEAVKRegKey@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ReadV1FilterList@BindStack@Ndis@@AEAAJAEAVKRegKey@@@Z @ 0x1C00DD8D8 (-ReadV1FilterList@BindStack@Ndis@@AEAAJAEAVKRegKey@@@Z.c)
 */

char __fastcall Ndis::BindStack::ReadV1InterfaceBindings(Ndis::BindStack *this, PDEVICE_OBJECT DeviceObject)
{
  char v3; // di
  HANDLE v4; // rbx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF
  HANDLE v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( IoOpenDeviceRegistryKey(DeviceObject, 2u, 8u, &v7) < 0 )
    return 0;
  v4 = 0LL;
  v3 = 1;
  if ( v7 )
    v4 = v7;
  Handle = 0LL;
  if ( (int)KRegKey::Open((KRegKey *)&Handle, 1u, (wchar_t *)L"Linkage", v4) < 0
    || (int)Ndis::BindStack::ReadV1FilterList(this, (struct KRegKey *)&Handle) < 0
    || (int)Ndis::BindStack::ReadV1OrV2ProtocolList(
              this,
              (struct KRegKey *)&Handle,
              (struct _UNICODE_STRING *)&Ndis::UpperBindValueName) < 0 )
  {
    v3 = 0;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v4 )
    ZwClose(v4);
  return v3;
}
