/*
 * XREFs of HUBDSM_CheckingIfU2TimeoutNeedsToBeChanged @ 0x1C001BD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfU2TimeoutNeedsToBeChanged(__int64 a1)
{
  __int64 v1; // rax
  char v2; // cl

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_BYTE *)(v1 + 2199);
  if ( v2 == *(_BYTE *)(v1 + 2197) )
    return 4061LL;
  *(_BYTE *)(v1 + 2197) = v2;
  return 4089LL;
}
