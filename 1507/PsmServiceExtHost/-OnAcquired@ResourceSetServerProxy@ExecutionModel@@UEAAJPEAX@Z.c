/*
 * XREFs of ?OnAcquired@ResourceSetServerProxy@ExecutionModel@@UEAAJPEAX@Z @ 0x180001D60
 * Callers:
 *     <none>
 * Callees:
 *     ?SendData@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x180001D88 (-SendData@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetServerProxy::OnAcquired(
        ExecutionModel::ResourceSetServerProxy *this,
        void *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_BYTE *)this + 49) )
    return ExecutionModel::ResourceSetServerProxy::SendData(this, *((_QWORD *)this + 5), 0LL, 0xFFFFFFFFLL);
  return result;
}
