/*
 * XREFs of GreGetBrushOrg @ 0x1C0124710
 * Callers:
 *     _DrawIconEx @ 0x1C005137C (_DrawIconEx.c)
 *     MNEraseBackground @ 0x1C023F9D4 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0241710 (xxxMNDrawFullNC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBrushOrg(HDC a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
  {
    v3 = 1;
    *a2 = *(_QWORD *)(v5[0] + 136LL);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v3;
}
