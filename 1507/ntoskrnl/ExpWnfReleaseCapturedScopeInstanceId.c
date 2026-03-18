/*
 * XREFs of ExpWnfReleaseCapturedScopeInstanceId @ 0x140502BAC
 * Callers:
 *     NtUpdateWnfStateData @ 0x140501A48 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1405026FC (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x14054BE40 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x1405BF43C (NtDeleteWnfStateData.c)
 * Callees:
 *     <none>
 */

void __fastcall ExpWnfReleaseCapturedScopeInstanceId(int a1, PVOID *a2, char a3)
{
  int v3; // ecx
  int v4; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 && *a2 )
        ObfDereferenceObjectWithTag(*a2, 0x20666E57u);
    }
    else if ( *a2 )
    {
      SeReleaseSid(*a2, a3, 0);
    }
  }
  else if ( *a2 )
  {
    ObfDereferenceObject(*a2);
  }
}
