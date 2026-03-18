/*
 * XREFs of GreGetPaletteEntries @ 0x1C00EAB90
 * Callers:
 *     <none>
 * Callees:
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C0013B24 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EB1E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall GreGetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int Entries; // ebx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  EPALOBJ::EPALOBJ((EPALOBJ *)v9, a1);
  Entries = 0;
  if ( v9[0] )
  {
    Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)v9, a2, a3, a4, 0);
    DEC_SHARE_REF_CNT(v9[0]);
  }
  else
  {
    EngSetLastError(6u);
  }
  return Entries;
}
