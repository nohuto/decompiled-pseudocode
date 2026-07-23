/*
 * XREFs of SeCompareSigningLevelsForAuditableProcess @ 0x14050491C
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 * Callees:
 *     SeCompareSigningLevels @ 0x14045C0B0 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeCompareSigningLevelsForAuditableProcess(__int64 a1, int a2)
{
  __int64 result; // rax

  result = SeCompareSigningLevels();
  if ( !(_DWORD)result && !a2 )
    return (*(unsigned __int8 *)(a1 + 1738) >> 3) & 1;
  return result;
}
