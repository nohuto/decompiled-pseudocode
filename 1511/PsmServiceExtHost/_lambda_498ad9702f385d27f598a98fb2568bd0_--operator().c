/*
 * XREFs of _lambda_498ad9702f385d27f598a98fb2568bd0_::operator() @ 0x18004FDB0
 * Callers:
 *     ?CreateEnergyUsageWnfStates@AppEnergyInformation@@IEAAJPEAUEnergyNotificationStates@@@Z @ 0x180050054 (-CreateEnergyUsageWnfStates@AppEnergyInformation@@IEAAJPEAUEnergyNotificationStates@@@Z.c)
 * Callees:
 *     <none>
 */

HLOCAL *__fastcall lambda_498ad9702f385d27f598a98fb2568bd0_::operator()(__int64 a1)
{
  _DWORD *v2; // rcx
  _DWORD *v3; // rcx
  HLOCAL *result; // rax

  v2 = *(_DWORD **)a1;
  if ( *v2 || v2[1] )
    NtDeleteWnfStateName(v2);
  v3 = *(_DWORD **)(a1 + 8);
  if ( *v3 || v3[1] )
    NtDeleteWnfStateName(v3);
  result = *(HLOCAL **)(a1 + 16);
  if ( *result )
    return (HLOCAL *)LocalFree(*result);
  return result;
}
