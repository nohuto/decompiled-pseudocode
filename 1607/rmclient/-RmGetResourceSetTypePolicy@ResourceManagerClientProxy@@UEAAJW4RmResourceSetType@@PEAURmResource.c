/*
 * XREFs of ?RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18000C860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceManagerClientProxy::RmGetResourceSetTypePolicy(__int64 a1, __int64 a2, __int64 a3)
{
  return ExecutionModel::ResourceSetTypeToInfoConverter::GetRmResourceSetInfo(a1 + 16, a2, a3);
}
