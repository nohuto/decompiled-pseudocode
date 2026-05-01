/*
 * XREFs of ?Apply@ResourceSetImpl@ExecutionModel@@UEAAJK@Z @ 0x18004E4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::Apply(ExecutionModel::HostResourceInfo **this, unsigned int a2)
{
  if ( this[20] )
    return ExecutionModel::HostResourceInfo::HostApplyResourceSet(
             this[20],
             (struct ExecutionModel::ResourceSetImpl *)this,
             a2);
  else
    return 2147500037LL;
}
