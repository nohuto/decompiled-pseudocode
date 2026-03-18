/*
 * XREFs of HUBDSM_CheckingIfEnableU1NeedsToBeUpdated @ 0x1C001BCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfEnableU1NeedsToBeUpdated(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx
  int v3; // edx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = *(_DWORD *)(v1 + 2200);
  if ( (v3 & 0x10) == 0 && (v3 & 4) != 0 )
    v2 = 4009;
  if ( (v3 & 0x14) == 0x10 )
    return 4013;
  return v2;
}
