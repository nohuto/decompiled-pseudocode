/*
 * XREFs of ResCCompareCacheIDs @ 0x180086270
 * Callers:
 *     ??$GetFirstEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@@@Z @ 0x1800F778C (--$GetFirstEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCAC.c)
 *     ??$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z @ 0x1800F7870 (--$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResCCompareCacheIDs(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v4; // r9

  v2 = 0;
  if ( !a1 )
    return (unsigned int)-(a2 != 0LL);
  if ( !a2 || *a1 > *a2 )
    return 1LL;
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  v4 = a2[1];
  if ( a1[1] > v4 )
    return 1LL;
  if ( a1[1] < v4 )
    return (unsigned int)-1;
  return v2;
}
