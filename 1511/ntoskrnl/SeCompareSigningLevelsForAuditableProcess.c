/*
 * XREFs of SeCompareSigningLevelsForAuditableProcess @ 0x1404C06B8
 * Callers:
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 * Callees:
 *     SeCompareSigningLevels @ 0x140448D98 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeCompareSigningLevelsForAuditableProcess(__int64 a1, int a2)
{
  __int64 result; // rax

  result = SeCompareSigningLevels();
  if ( !(_DWORD)result && !a2 )
    return (*(unsigned __int8 *)(a1 + 1722) >> 3) & 1;
  return result;
}
