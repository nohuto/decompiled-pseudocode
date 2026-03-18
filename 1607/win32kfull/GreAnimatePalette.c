/*
 * XREFs of GreAnimatePalette @ 0x1C02B3F60
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00F0E34 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00F0E60 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02B742C (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreAnimatePalette(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // ebx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)v9, a1);
  if ( v9[0] && (*(_DWORD *)(v9[0] + 24LL) & 0x100) != 0 )
    v7 = XEPALOBJ::ulAnimatePalette((XEPALOBJ *)v9, a2, a3, a4);
  EPALOBJ::~EPALOBJ((EPALOBJ *)v9);
  return v7;
}
