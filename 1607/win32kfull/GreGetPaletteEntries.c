/*
 * XREFs of GreGetPaletteEntries @ 0x1C00F04E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C003A7BC (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00F0E34 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00F0E60 (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int Entries; // ebx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  EPALOBJ::EPALOBJ((EPALOBJ *)v9, a1);
  Entries = 0;
  if ( v9[0] )
    Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)v9, a2, a3, a4, 0);
  else
    EngSetLastError(6u);
  EPALOBJ::~EPALOBJ((EPALOBJ *)v9);
  return Entries;
}
