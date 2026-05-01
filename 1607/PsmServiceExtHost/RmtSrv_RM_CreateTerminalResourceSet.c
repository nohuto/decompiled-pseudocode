/*
 * XREFs of RmtSrv_RM_CreateTerminalResourceSet @ 0x180028E30
 * Callers:
 *     <none>
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800107B0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEA_K@Z @ 0x18002D81C (-RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSet.c)
 *     ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180038288 (-CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceS.c)
 */

int __fastcall RmtSrv_RM_CreateTerminalResourceSet(__int64 a1, ExecutionModel *a2, unsigned __int64 *a3)
{
  struct ResourceManagerServerProxy *v3; // rbx
  struct ExecutionModel::_ResourceSetInfo *v6; // r8
  _BYTE v8[384]; // [rsp+20h] [rbp-198h] BYREF

  v3 = g_pProxy;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v8);
  ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(a2, (const struct RmResourceSetInfo *)v8, v6);
  return RmSrvCreateTerminalResourceSetFromResourceSetInfo(
           *((struct _RM_SERVICE_GLOBALS **)v3 + 2),
           (struct ExecutionModel::_ResourceSetInfo *)v8,
           a3);
}
