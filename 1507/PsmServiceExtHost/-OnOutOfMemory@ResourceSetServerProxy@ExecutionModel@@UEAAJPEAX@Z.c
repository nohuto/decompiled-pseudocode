/*
 * XREFs of ?OnOutOfMemory@ResourceSetServerProxy@ExecutionModel@@UEAAJPEAX@Z @ 0x180047FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendData@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x180001D88 (-SendData@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetServerProxy::OnOutOfMemory(
        ExecutionModel::ResourceSetServerProxy *this,
        void *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 48) )
  {
    if ( !*((_BYTE *)this + 49) )
      return ExecutionModel::ResourceSetServerProxy::SendData((__int64)this, *((_QWORD *)this + 5), 3u, -1);
  }
  return result;
}
