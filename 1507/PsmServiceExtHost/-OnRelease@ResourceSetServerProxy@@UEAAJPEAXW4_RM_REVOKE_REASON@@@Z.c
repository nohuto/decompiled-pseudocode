/*
 * XREFs of ?OnRelease@ResourceSetServerProxy@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z @ 0x1800333D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetServerProxy::OnRelease(__int64 a1, __int64 a2, unsigned int a3)
{
  return ResourceSetServerProxy::SendData(a1, a2, 1LL, a3);
}
