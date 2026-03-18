/*
 * XREFs of GreSetLayout @ 0x1C0012430
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C00165F0 (GreCreateCompatibleDC.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     NtGdiCreateCompatibleDC @ 0x1C0042910 (NtGdiCreateCompatibleDC.c)
 * Callees:
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C003CB30 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetLayout(HDC a1, int a2, unsigned int a3)
{
  unsigned int v5; // ebx
  DC *v7[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
    v5 = DC::dwSetLayout(v7[0], a2, a3);
  else
    v5 = -1;
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v5;
}
