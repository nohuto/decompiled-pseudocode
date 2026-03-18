/*
 * XREFs of GreSetLayout @ 0x1C0075DC0
 * Callers:
 *     NtGdiCreateCompatibleDC @ 0x1C0025AB0 (NtGdiCreateCompatibleDC.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     GreCreateCompatibleDC @ 0x1C006C030 (GreCreateCompatibleDC.c)
 * Callees:
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C002C830 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004373C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetLayout(HDC a1, int a2, int a3)
{
  unsigned int v5; // ebx
  DC *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
    v5 = DC::dwSetLayout(v7[0], a2, a3);
  else
    v5 = -1;
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v5;
}
