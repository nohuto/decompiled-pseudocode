/*
 * XREFs of ?Apply@ResourceSetImpl@ExecutionModel@@UEAAJK@Z @ 0x180047940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::Apply(ExecutionModel::HostResourceInfo **this, unsigned int a2)
{
  if ( this[19] )
    return ExecutionModel::HostResourceInfo::HostApplyResourceSet(
             this[19],
             (struct ExecutionModel::ResourceSetImpl *)this,
             a2);
  else
    return 2147500037LL;
}
