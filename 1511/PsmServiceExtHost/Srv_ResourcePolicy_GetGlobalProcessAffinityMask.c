/*
 * XREFs of Srv_ResourcePolicy_GetGlobalProcessAffinityMask @ 0x18004BF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Srv_ResourcePolicy_GetGlobalProcessAffinityMask(__int64 a1, _DWORD *a2, _WORD *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v5; // rax

  if ( !a2 || !a3 || !a4 )
    return 2147500035LL;
  if ( !*a2 )
    return 2147942487LL;
  v5 = *(_QWORD *)(*((_QWORD *)g_pResourcePolicyEngineServerProxy + 12) + 88LL);
  *a3 = 0;
  *a4 = v5;
  result = 0LL;
  *a2 = 1;
  return result;
}
