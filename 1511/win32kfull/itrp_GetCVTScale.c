/*
 * XREFs of itrp_GetCVTScale @ 0x1C00B0D08
 * Callers:
 *     itrp_MPPEM @ 0x1C00ADD80 (itrp_MPPEM.c)
 *     itrp_WCVT @ 0x1C00ADE20 (itrp_WCVT.c)
 *     itrp_RCVT @ 0x1C00AE760 (itrp_RCVT.c)
 *     itrp_DeltaEngine @ 0x1C00B4844 (itrp_DeltaEngine.c)
 *     itrp_MIAP @ 0x1C00B5040 (itrp_MIAP.c)
 *     InvokeGetCVTEntry @ 0x1C00B814C (InvokeGetCVTEntry.c)
 *     itrp_CheckSingleWidth @ 0x1C014470C (itrp_CheckSingleWidth.c)
 *     itrp_ChangeCvtSlow @ 0x1C01449D0 (itrp_ChangeCvtSlow.c)
 * Callees:
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 *     FracSqrt @ 0x1C00B3C4C (FracSqrt.c)
 */

__int64 itrp_GetCVTScale()
{
  __int64 result; // rax
  int v1; // ebx
  int fixed; // eax
  int v3; // r10d
  int v4; // r11d
  int v5; // eax
  int v6; // eax
  int v7; // r10d
  int v8; // r10d

  if ( !HIWORD(dword_1C0323E08) )
    return *(unsigned int *)(qword_1C0323E30 + 312);
  if ( !(_WORD)dword_1C0323E08 )
    return *(unsigned int *)(qword_1C0323E30 + 316);
  result = (unsigned int)dword_1C0323E78;
  if ( !dword_1C0323E78 )
  {
    v1 = SHIWORD(dword_1C0323E08);
    fixed = FixMul(*(_DWORD *)(qword_1C0323E30 + 312), *(_DWORD *)(qword_1C0323E30 + 312));
    FixMul(4 * (__int16)((v3 * v3 + 0x2000) >> 14), fixed);
    v5 = FixMul(v4, v4);
    v6 = FixMul(4 * (__int16)((v1 * v1 + 0x2000) >> 14), v5);
    v8 = v6 + v7;
    result = 0x10000LL;
    if ( v8 <= 0x10000 )
    {
      result = (unsigned int)((int)(FracSqrt((unsigned int)(v8 << 14)) + 0x2000) >> 14);
      dword_1C0323E78 = result;
    }
  }
  return result;
}
