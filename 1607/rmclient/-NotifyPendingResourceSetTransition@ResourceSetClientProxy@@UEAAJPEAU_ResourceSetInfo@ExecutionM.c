/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18000C2E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180006040 (__security_check_cookie.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@QEAAJPEAURmResourceSetInfo@@@Z @ 0x18000C26C (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@QEAAJPEAURmResourceSetInfo@@@Z.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000CE40 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 */

CLIENT_CALL_RETURN __fastcall ResourceSetClientProxy::NotifyPendingResourceSetTransition(
        ResourceSetClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct RmResourceSetInfo *a3)
{
  _BYTE v5[1456]; // [rsp+20h] [rbp-5C8h] BYREF

  ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(a2, (const struct ExecutionModel::_ResourceSetInfo *)v5, a3);
  return ResourceSetClientProxy::NotifyPendingResourceSetTransition(this, (struct RmResourceSetInfo *)v5);
}
