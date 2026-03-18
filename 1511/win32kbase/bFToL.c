/*
 * XREFs of bFToL @ 0x1C0071CFC
 * Callers:
 *     vConvertXformToMatrix @ 0x1C0014000 (vConvertXformToMatrix.c)
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C0015110 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C00152D0 (-bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z.c)
 *     bCvtPts1 @ 0x1C0015A64 (bCvtPts1.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C002C280 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     efSin @ 0x1C007ACC0 (efSin.c)
 *     bCvtPts @ 0x1C0081490 (bCvtPts.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00B7BC8 (-vMakeIso@DC@@QEAAXXZ.c)
 *     bCvtVts @ 0x1C00E654C (bCvtVts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bFToL(float a1, _DWORD *a2, char a3)
{
  unsigned int v3; // r9d
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = 1;
  v4 = (unsigned __int8)(SLODWORD(a1) >> 23) - 118;
  if ( (a3 & 8) != 0 )
    v4 += 4;
  if ( v4 > 40 )
  {
    return 0;
  }
  else
  {
    v5 = LODWORD(a1) & 0x7FFFFF | 0x800000LL;
    if ( v4 < 0 )
      v6 = v5 >> -(char)v4;
    else
      v6 = v5 << v4;
    if ( (a3 & 1) == 0 )
      v6 += 0x80000000LL;
    v7 = v6 >> 32;
    if ( a1 < 0.0 )
      LODWORD(v7) = -(int)v7;
    *a2 = v7;
  }
  return v3;
}
