/*
 * XREFs of SeCompareSigningLevelsForAuditableProcess @ 0x140555D0C
 * Callers:
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     SeCompareSigningLevels @ 0x140509298 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeCompareSigningLevelsForAuditableProcess(__int64 a1, int a2)
{
  __int64 result; // rax

  result = SeCompareSigningLevels();
  if ( !(_DWORD)result && !a2 )
    return (*(unsigned __int8 *)(a1 + 1714) >> 3) & 1;
  return result;
}
