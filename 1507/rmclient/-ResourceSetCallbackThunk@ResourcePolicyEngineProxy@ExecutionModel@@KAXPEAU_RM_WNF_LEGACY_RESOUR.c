/*
 * XREFs of ?ResourceSetCallbackThunk@ResourcePolicyEngineProxy@ExecutionModel@@KAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@PEAX@Z @ 0x18000F8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ResourcePolicyEngineProxy::ResourceSetCallbackThunk(
        struct _RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD *a1,
        ExecutionModel::ResourcePolicyEngineProxy *this)
{
  ExecutionModel::ResourcePolicyEngineProxy::ResourceSetCallbackHandler(this, a1);
}
