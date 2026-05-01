/*
 * XREFs of ?FireCallback@ResourceSetClientProxy@@QEAAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@U_RM_REVOKE_MESSAGE@@@Z @ 0x18000BF28
 * Callers:
 *     ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x18000C184 (-LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_S.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18000B9A8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

struct IUnknown *__fastcall ResourceSetClientProxy::FireCallback(__int64 a1, int a2, int a3)
{
  struct IUnknown *result; // rax
  struct IUnknown *v5; // rdx
  int v7; // edi
  int v8; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  struct IUnknown *v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+40h] [rbp+18h]

  result = (struct IUnknown *)&retaddr;
  v11 = a3;
  v5 = *(struct IUnknown **)(a1 + 424);
  if ( v5 )
    result = ATL::AtlComPtrAssign(&v10, v5);
  if ( !a2 )
    return (struct IUnknown *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(MEMORY[0] + 32LL))(0LL, *(_QWORD *)(a1 + 32));
  v7 = a2 - 1;
  if ( !v7 )
    return (struct IUnknown *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(MEMORY[0] + 24LL))(0LL, *(_QWORD *)(a1 + 32));
  v8 = v7 - 1;
  if ( !v8 )
    return (struct IUnknown *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(MEMORY[0] + 40LL))(0LL, *(_QWORD *)(a1 + 32));
  if ( v8 == 1 )
    return (struct IUnknown *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(MEMORY[0] + 48LL))(0LL, *(_QWORD *)(a1 + 32));
  return result;
}
