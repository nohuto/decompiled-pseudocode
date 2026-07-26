/*
 * XREFs of ndisRemovePMLowestPriorityEntry @ 0x1C00C4A7C
 * Callers:
 *     ndisPMAddProtocolOffload @ 0x1C00010F8 (ndisPMAddProtocolOffload.c)
 *     ndisPMAddWOLPattern @ 0x1C00048A8 (ndisPMAddWOLPattern.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisRemovePMLowestPriorityEntry(__int64 *a1, unsigned int a2)
{
  __int64 *v2; // rax
  __int64 *v3; // r8
  unsigned int v4; // r10d
  __int64 v5; // rcx

  v2 = (__int64 *)*a1;
  v3 = 0LL;
  v4 = 1;
  if ( !*a1 )
    return 0LL;
  do
  {
    if ( *((_DWORD *)v2 + 8) > v4 )
    {
      v4 = *((_DWORD *)v2 + 8);
      v3 = a1;
    }
    a1 = v2;
    v2 = (__int64 *)*v2;
  }
  while ( v2 );
  if ( !v3 )
    return 0LL;
  v5 = *v3;
  if ( !*v3 )
    return 0LL;
  if ( *(_DWORD *)(v5 + 32) <= a2 )
    return 0LL;
  *v3 = *(_QWORD *)v5;
  return v5;
}
