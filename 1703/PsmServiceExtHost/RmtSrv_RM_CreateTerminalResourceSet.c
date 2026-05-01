/*
 * XREFs of RmtSrv_RM_CreateTerminalResourceSet @ 0x180029A50
 * Callers:
 *     <none>
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18000E370 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEA_K@Z @ 0x18002C6C8 (-RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSet.c)
 *     ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x18003835C (-CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceS.c)
 */

__int64 __fastcall RmtSrv_RM_CreateTerminalResourceSet(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  struct ResourceManagerServerProxy *v3; // rbx
  struct ExecutionModel::_ResourceSetInfo *v5; // r8
  ExecutionModel *v6; // r9
  _BYTE v8[384]; // [rsp+20h] [rbp-198h] BYREF

  v3 = g_pProxy;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v8);
  ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(v6, (const struct RmResourceSetInfo *)v8, v5);
  return RmSrvCreateTerminalResourceSetFromResourceSetInfo(
           *((struct _RM_SERVICE_GLOBALS **)v3 + 2),
           (struct ExecutionModel::_ResourceSetInfo *)v8,
           a3);
}
