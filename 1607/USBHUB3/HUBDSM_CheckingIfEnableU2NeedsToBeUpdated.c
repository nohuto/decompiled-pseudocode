/*
 * XREFs of HUBDSM_CheckingIfEnableU2NeedsToBeUpdated @ 0x1C001BCF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfEnableU2NeedsToBeUpdated(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx
  unsigned int v3; // edx
  int v4; // eax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = *(_DWORD *)(v1 + 2200);
  v4 = (v3 >> 5) & 1;
  if ( !v4 && (v3 & 8) != 0 )
    v2 = 4009;
  if ( v4 && (v3 & 8) == 0 )
    return 4013;
  return v2;
}
