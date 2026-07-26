/*
 * XREFs of ?ReadV1OrV2ProtocolList@BindStack@Ndis@@AEAAJAEAVKRegKey@@PEBU_UNICODE_STRING@@@Z @ 0x1C009C5A8
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C009C5C0 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Ndis::BindStack::ReadV1OrV2ProtocolList(
        Ndis::BindStack *this,
        struct KRegKey *a2,
        const struct _UNICODE_STRING *a3)
{
  return KRegKey::QueryValueMultisz<_lambda_fa4c34603c51c7c89984ed578d5a8406_,_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_>(
           a2,
           a3,
           this,
           this);
}
