/*
 * XREFs of PsQueryProcessSignatureMitigationPolicy @ 0x14067D4A8
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 * Callees:
 *     SeCompareSigningLevels @ 0x14045C0B0 (SeCompareSigningLevels.c)
 */

void __fastcall PsQueryProcessSignatureMitigationPolicy(__int64 a1, _DWORD *a2)
{
  *a2 = 0;
  if ( *(_BYTE *)(a1 + 1736) < 8u || *(_BYTE *)(a1 + 1737) < 8u )
  {
    if ( (unsigned int)SeCompareSigningLevels() && (unsigned int)SeCompareSigningLevels() )
      *a2 |= 2u;
  }
  else
  {
    *a2 = 1;
  }
  if ( (*(_DWORD *)(a1 + 1740) & 0x2000) != 0 )
    *a2 |= 4u;
}
