/*
 * XREFs of ndisFindPortByPortNumber @ 0x1C003F0E8
 * Callers:
 *     NdisMFreePort @ 0x1C003EC70 (NdisMFreePort.c)
 *     ndisPnPPortActivation @ 0x1C003F114 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003F694 (ndisPnPPortDeactivation.c)
 *     ndisRollbackPortDeactivation @ 0x1C003FC00 (ndisRollbackPortDeactivation.c)
 *     ndisUpdateMiniportPortStates @ 0x1C003FCA0 (ndisUpdateMiniportPortStates.c)
 *     ndisOidPrePortState @ 0x1C0046FA0 (ndisOidPrePortState.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisFindPortByPortNumber(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r9
  __int64 v3; // r8
  __int64 *i; // rax
  unsigned int v5; // ecx

  v2 = (__int64 *)(a1 + 2760);
  v3 = 0LL;
  for ( i = *(__int64 **)(a1 + 2760); i != v2; i = (__int64 *)*i )
  {
    v5 = *((_DWORD *)i + 7);
    if ( v5 == a2 )
      return i;
    if ( v5 > a2 )
      return (__int64 *)v3;
  }
  return (__int64 *)v3;
}
