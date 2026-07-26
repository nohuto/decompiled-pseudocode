/*
 * XREFs of ?ReadV1OrV2ProtocolList@BindStack@Ndis@@AEAAJAEAVKRegKey@@PEBU_UNICODE_STRING@@@Z @ 0x1C00A3680
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00A3618 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ?ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z @ 0x1C00E372C (-ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Ndis::BindStack::ReadV1OrV2ProtocolList(
        Ndis::BindStack *this,
        struct KRegKey *a2,
        const struct _UNICODE_STRING *a3)
{
  return KRegKey::QueryValueMultisz<_lambda_7dba7dab9bc3060b810d705c95db8e00_,_lambda_91558b45fed37b56f47adbcac45390b4_>(
           a2,
           a3,
           this,
           this);
}
