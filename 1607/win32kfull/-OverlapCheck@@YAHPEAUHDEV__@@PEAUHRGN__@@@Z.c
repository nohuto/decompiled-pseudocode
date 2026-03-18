/*
 * XREFs of ?OverlapCheck@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C025FE38
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1C0260D60 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C025FF68 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 */

_BOOL8 __fastcall OverlapCheck(_DWORD *a1, HRGN a2)
{
  BOOL v4; // ebx
  HANDLE RectRgn; // rdi
  struct tagSIZE v6; // rax
  int v7; // r10d
  _DWORD *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = a1;
  v4 = 0;
  RectRgn = EngCreateRectRgn(0, 0, 0, 0);
  if ( RectRgn )
  {
    PDEVOBJ::sizl((PDEVOBJ *)&v9);
    v6 = PDEVOBJ::sizl((PDEVOBJ *)&v9);
    if ( EngSetRectRgn(RectRgn, a1[652], a1[653], a1[652] + *(_DWORD *)v6.cx, v7 + a1[653]) )
      v4 = (unsigned int)EngCombineRgn(RectRgn, RectRgn, a2, 1) > 1;
    EngDeleteRgn(RectRgn);
  }
  return v4;
}
