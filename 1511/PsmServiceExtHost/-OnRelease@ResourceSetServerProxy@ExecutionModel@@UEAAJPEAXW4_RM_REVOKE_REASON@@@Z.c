/*
 * XREFs of ?OnRelease@ResourceSetServerProxy@ExecutionModel@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z @ 0x18004F030
 * Callers:
 *     <none>
 * Callees:
 *     ?SendData@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x1800043B8 (-SendData@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetServerProxy::OnRelease(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)(a1 + 48) )
  {
    if ( !*(_BYTE *)(a1 + 49) )
      return ExecutionModel::ResourceSetServerProxy::SendData(a1, *(_QWORD *)(a1 + 40), 1u, a3);
  }
  return result;
}
