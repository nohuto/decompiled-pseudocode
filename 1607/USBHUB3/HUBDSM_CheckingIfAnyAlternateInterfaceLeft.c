/*
 * XREFs of HUBDSM_CheckingIfAnyAlternateInterfaceLeft @ 0x1C001AB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfAnyAlternateInterfaceLeft(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // edx
  __int64 *v3; // r10
  __int64 i; // rcx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4061;
  v3 = (__int64 *)(*(_QWORD *)(v1 + 48) + 16LL);
  for ( i = *v3; ; i = *(_QWORD *)(v5 + 8) )
  {
    v5 = i - 8;
    if ( v3 == (__int64 *)(v5 + 8) )
      break;
    if ( (*(_DWORD *)(v5 + 28) & 2) != 0 )
    {
      *(_QWORD *)(v1 + 64) = v5;
      return 4089;
    }
  }
  return v2;
}
