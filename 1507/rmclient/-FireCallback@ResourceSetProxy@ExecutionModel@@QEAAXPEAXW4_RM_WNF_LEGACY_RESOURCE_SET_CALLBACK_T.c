/*
 * XREFs of ?FireCallback@ResourceSetProxy@ExecutionModel@@QEAAXPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x18000FEA4
 * Callers:
 *     ?ResourceSetCallbackHandler@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x18000F9FC (-ResourceSetCallbackHandler@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXPEAU_RM_WNF_LEGACY_RE.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005DB0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

struct IUnknown *__fastcall ExecutionModel::ResourceSetProxy::FireCallback(__int64 a1)
{
  struct IUnknown *result; // rax
  struct IUnknown *v2; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  struct IUnknown *v4; // [rsp+30h] [rbp+8h] BYREF

  result = (struct IUnknown *)&retaddr;
  v2 = *(struct IUnknown **)(a1 + 40);
  if ( v2 )
    return ATL::AtlComPtrAssign(&v4, v2);
  return result;
}
