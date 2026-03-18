/*
 * XREFs of PsQueryProcessSignatureMitigationPolicy @ 0x14063ED5C
 * Callers:
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 * Callees:
 *     SeCompareSigningLevels @ 0x140448D98 (SeCompareSigningLevels.c)
 */

void __fastcall PsQueryProcessSignatureMitigationPolicy(__int64 a1, _DWORD *a2)
{
  *a2 = 0;
  if ( *(_BYTE *)(a1 + 1720) < 8u || *(_BYTE *)(a1 + 1721) < 8u )
  {
    if ( (unsigned int)SeCompareSigningLevels() && (unsigned int)SeCompareSigningLevels() )
      *a2 |= 2u;
  }
  else
  {
    *a2 = 1;
  }
  if ( (*(_DWORD *)(a1 + 1724) & 0x2000) != 0 )
    *a2 |= 4u;
}
