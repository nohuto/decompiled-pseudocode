/*
 * XREFs of SeCompareSigningLevelsForAuditableProcess @ 0x1405218BC
 * Callers:
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     MiCreateNewSection @ 0x140522048 (MiCreateNewSection.c)
 * Callees:
 *     SeCompareSigningLevels @ 0x14045D1E0 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeCompareSigningLevelsForAuditableProcess(__int64 a1, int a2)
{
  __int64 result; // rax

  result = SeCompareSigningLevels();
  if ( !(_DWORD)result && !a2 )
    return (*(unsigned __int8 *)(a1 + 1738) >> 3) & 1;
  return result;
}
