/*
 * XREFs of ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C009C5C0
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ?ReadV1OrV2ProtocolList@BindStack@Ndis@@AEAAJAEAVKRegKey@@PEBU_UNICODE_STRING@@@Z @ 0x1C009C5A8 (-ReadV1OrV2ProtocolList@BindStack@Ndis@@AEAAJAEAVKRegKey@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KAEAVKRegKey@@@Z @ 0x1C009C628 (-OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KAEAVKRegKey@@@Z.c)
 *     ??$QueryValueBlob@V_lambda_999d7960ce7bd727c937eec9f53d3cb3_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_999d7960ce7bd727c937eec9f53d3cb3_@@@Z @ 0x1C009CFA0 (--$QueryValueBlob@V_lambda_999d7960ce7bd727c937eec9f53d3cb3_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 */

bool __fastcall Ndis::BindStack::ReadV2InterfaceBindings(Ndis::BindStack *this, const struct _GUID *a2)
{
  __int64 v3; // rdx
  bool v4; // bl
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v4 = Ndis::BindStack::OpenV2InterfaceKey(a2, (unsigned int)a2, (struct KRegKey *)&Handle) >= 0
    && (int)KRegKey::QueryValueBlob<_lambda_999d7960ce7bd727c937eec9f53d3cb3_>(&Handle, v3, this) >= 0
    && (int)Ndis::BindStack::ReadV1OrV2ProtocolList(this, (struct KRegKey *)&Handle, &Ndis::ProtocolListValueName) >= 0;
  if ( Handle )
    ZwClose(Handle);
  return v4;
}
