/*
 * XREFs of ?LegacyResourceSetCallbackHandlerThunk@ResourceManagerClientProxy@@SAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@PEAX@Z @ 0x1800143A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ResourceManagerClientProxy::LegacyResourceSetCallbackHandlerThunk(
        struct _RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD *a1,
        ResourceManagerClientProxy *this)
{
  ResourceManagerClientProxy::LegacyResourceSetCallbackHandler(this, a1);
}
