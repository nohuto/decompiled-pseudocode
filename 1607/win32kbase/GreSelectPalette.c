/*
 * XREFs of GreSelectPalette @ 0x1C005C9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C005CA28 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 */

HPALETTE __fastcall GreSelectPalette(HDC a1, HPALETTE a2, int a3)
{
  HPALETTE v5; // rbx
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] && *(_WORD *)(v7[0] + 12LL) == 1 )
    v5 = SelectPaletteWorker((struct XDCOBJ *)v7, a2, a3);
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v5;
}
