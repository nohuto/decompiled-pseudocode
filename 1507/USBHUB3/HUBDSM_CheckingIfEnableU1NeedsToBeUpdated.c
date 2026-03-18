/*
 * XREFs of HUBDSM_CheckingIfEnableU1NeedsToBeUpdated @ 0x1C001B060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfEnableU1NeedsToBeUpdated(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // r8d

  v1 = 4077;
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 960) + 2200LL);
  if ( (v2 & 0x10) == 0 && (v2 & 4) != 0 )
    v1 = 4009;
  if ( (v2 & 0x14) == 0x10 )
    return 4013;
  return v1;
}
