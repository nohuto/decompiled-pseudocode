/*
 * XREFs of RtlGetNtVersionNumbers @ 0x180074FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RtlGetNtVersionNumbers(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  if ( a1 )
    *a1 = 10;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = -268425216;
}
