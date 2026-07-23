/*
 * XREFs of BiTranslateObjectIdentifier @ 0x1406D5B04
 * Callers:
 *     BiExportEfiBootManager @ 0x1406D4BB8 (BiExportEfiBootManager.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1406D54D0 (BiHandleFirmwareDefaultEntry.c)
 *     BiTranslateDisplayOrder @ 0x1406D59C4 (BiTranslateDisplayOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BiTranslateObjectIdentifier(_QWORD *a1, _QWORD *a2, _DWORD *a3)
{
  _QWORD *v3; // r9
  unsigned int v5; // r10d
  int v6; // eax
  __int64 v7; // rcx

  v3 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
    return (unsigned int)-1073741275;
  v5 = 0;
  while ( 1 )
  {
    v6 = *((_DWORD *)v3 + 12);
    if ( (v6 & 4) != 0 )
    {
      v7 = *a2 - v3[2];
      if ( *a2 == v3[2] )
        v7 = a2[1] - v3[3];
      if ( !v7 )
        break;
    }
    v3 = (_QWORD *)*v3;
    if ( v3 == a1 )
      return (unsigned int)-1073741275;
  }
  if ( (v6 & 3) == 0 )
    return (unsigned int)-1073741275;
  else
    *a3 = *((_DWORD *)v3 + 8);
  return v5;
}
