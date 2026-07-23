/*
 * XREFs of ExpWnfReleaseCapturedScopeInstanceId @ 0x1404613A4
 * Callers:
 *     NtUpdateWnfStateData @ 0x140460B94 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140460F60 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1404C015C (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x14057CF64 (NtDeleteWnfStateData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpWnfReleaseCapturedScopeInstanceId(int a1, PVOID *a2, char a3)
{
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  PVOID v6; // rcx

  v3 = a1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        if ( *a2 )
          return ObfDereferenceObjectWithTag(*a2, 0x20666E57u);
      }
    }
    else
    {
      v6 = *a2;
      if ( *a2 )
      {
        LOBYTE(a2) = a3;
        return SeReleaseSid(v6, a2, 0LL);
      }
    }
  }
  else if ( *a2 )
  {
    return ObfDereferenceObject(*a2);
  }
  return result;
}
