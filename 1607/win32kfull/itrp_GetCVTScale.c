/*
 * XREFs of itrp_GetCVTScale @ 0x1C0144104
 * Callers:
 *     itrp_RCVT @ 0x1C00CC0F0 (itrp_RCVT.c)
 *     itrp_MPPEM @ 0x1C00CC310 (itrp_MPPEM.c)
 *     itrp_WCVT @ 0x1C00CC5A0 (itrp_WCVT.c)
 *     itrp_DeltaEngine @ 0x1C00CD854 (itrp_DeltaEngine.c)
 *     itrp_MIAP @ 0x1C00CF700 (itrp_MIAP.c)
 *     InvokeGetCVTEntry @ 0x1C0111BF0 (InvokeGetCVTEntry.c)
 *     itrp_ChangeCvtSlow @ 0x1C01440B4 (itrp_ChangeCvtSlow.c)
 *     itrp_CheckSingleWidth @ 0x1C02E048C (itrp_CheckSingleWidth.c)
 * Callees:
 *     FixMul @ 0x1C00C947C (FixMul.c)
 *     FracSqrt @ 0x1C00D1438 (FracSqrt.c)
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

  if ( !HIWORD(dword_1C03294B8) )
    return *(unsigned int *)(qword_1C03294E0 + 312);
  if ( !(_WORD)dword_1C03294B8 )
    return *(unsigned int *)(qword_1C03294E0 + 316);
  result = (unsigned int)dword_1C0329528;
  if ( !dword_1C0329528 )
  {
    v1 = SHIWORD(dword_1C03294B8);
    fixed = FixMul(*(_DWORD *)(qword_1C03294E0 + 312), *(_DWORD *)(qword_1C03294E0 + 312));
    FixMul(4 * (__int16)((v3 * v3 + 0x2000) >> 14), fixed);
    v5 = FixMul(v4, v4);
    v6 = FixMul(4 * (__int16)((v1 * v1 + 0x2000) >> 14), v5);
    v8 = v6 + v7;
    result = 0x10000LL;
    if ( v8 <= 0x10000 )
    {
      result = (unsigned int)((int)(FracSqrt(v8 << 14) + 0x2000) >> 14);
      dword_1C0329528 = result;
    }
  }
  return result;
}
