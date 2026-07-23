/*
 * XREFs of ResCCompareCacheIDs @ 0x18008A0F0
 * Callers:
 *     ??$GetFirstEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@@@Z @ 0x1800FF8F0 (--$GetFirstEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCAC.c)
 *     ??$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z @ 0x1800FFA6C (--$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResCCompareCacheIDs(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // r9

  v2 = 0;
  if ( !a1 )
    return (unsigned int)-(a2 != 0LL);
  if ( !a2 || *a1 > *a2 )
    return 1LL;
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  v3 = a2[1];
  if ( a1[1] > v3 )
    return 1LL;
  if ( a1[1] < v3 )
    return (unsigned int)-1;
  return v2;
}
