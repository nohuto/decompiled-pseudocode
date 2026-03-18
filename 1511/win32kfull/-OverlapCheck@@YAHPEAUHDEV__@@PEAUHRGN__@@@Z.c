/*
 * XREFs of ?OverlapCheck@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C0262464
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1C0263250 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C02625A0 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 */

_BOOL8 __fastcall OverlapCheck(_DWORD *a1, HRGN a2)
{
  BOOL v4; // ebx
  HANDLE RectRgn; // rdi
  struct tagSIZE v6; // rax
  _DWORD *v7; // r9
  INT v8; // r10d
  _DWORD *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = a1;
  v4 = 0;
  RectRgn = EngCreateRectRgn(0, 0, 0, 0);
  if ( RectRgn )
  {
    PDEVOBJ::sizl((PDEVOBJ *)&v10);
    v6 = PDEVOBJ::sizl((PDEVOBJ *)&v10);
    if ( EngSetRectRgn(RectRgn, v8, a1[653], v8 + *v7, a1[653] + *(_DWORD *)(*(_QWORD *)&v6 + 4LL)) )
      v4 = (unsigned int)EngCombineRgn(RectRgn, RectRgn, a2, 1) > 1;
    EngDeleteRgn(RectRgn);
  }
  return v4;
}
