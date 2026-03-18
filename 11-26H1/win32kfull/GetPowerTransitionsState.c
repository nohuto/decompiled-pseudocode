/*
 * XREFs of GetPowerTransitionsState @ 0x1401C38C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPowerTransitionsState(_OWORD *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(UserSessionState + 42376)) )
    __int2c();
  result = W32GetUserSessionState(v5, v4);
  *a1 = *(_OWORD *)(result + 2748);
  a1[1] = *(_OWORD *)(result + 2764);
  a1[2] = *(_OWORD *)(result + 2780);
  a1[3] = *(_OWORD *)(result + 2796);
  return result;
}
