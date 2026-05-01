/*
 * XREFs of ?Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180014250
 * Callers:
 *     ?Handle_ResSet_Apply@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KKW4_ApplyResourcesType@@@Z @ 0x180014EE0 (-Handle_ResSet_Apply@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KKW4_ApplyResourc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::Apply(ExecutionModel::HostResourceInfo **this)
{
  if ( this[20] )
    return ExecutionModel::HostResourceInfo::HostApplyResourceSet(
             this[20],
             (struct ExecutionModel::ResourceSetImpl *)this,
             0);
  else
    return 2147500037LL;
}
