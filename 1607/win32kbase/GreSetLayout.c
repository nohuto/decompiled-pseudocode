/*
 * XREFs of GreSetLayout @ 0x1C0079D30
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C001CB50 (GreCreateCompatibleDC.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C002BA20 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C00BD410 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreSetLayout(HDC a1, int a2, int a3)
{
  unsigned int v5; // ebx
  DC *v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
    v5 = DC::dwSetLayout(v7[0], a2, a3);
  else
    v5 = -1;
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v8);
  return v5;
}
