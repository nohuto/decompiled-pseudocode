/*
 * XREFs of itrp_GetCVTScale @ 0x1C00B806C
 * Callers:
 *     itrp_RCVT @ 0x1C00B4D20 (itrp_RCVT.c)
 *     itrp_MPPEM @ 0x1C00B9E90 (itrp_MPPEM.c)
 *     itrp_WCVT @ 0x1C00B9F30 (itrp_WCVT.c)
 *     itrp_DeltaEngine @ 0x1C00BC474 (itrp_DeltaEngine.c)
 *     itrp_MIAP @ 0x1C00BC8C0 (itrp_MIAP.c)
 *     InvokeGetCVTEntry @ 0x1C00BF9EC (InvokeGetCVTEntry.c)
 *     itrp_ChangeCvtSlow @ 0x1C011AD9C (itrp_ChangeCvtSlow.c)
 *     itrp_CheckSingleWidth @ 0x1C02DC67C (itrp_CheckSingleWidth.c)
 * Callees:
 *     FixMul @ 0x1C00B6E4C (FixMul.c)
 *     FracSqrt @ 0x1C00BB4FC (FracSqrt.c)
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

  if ( !HIWORD(dword_1C0323138) )
    return *(unsigned int *)(qword_1C0323160 + 312);
  if ( !(_WORD)dword_1C0323138 )
    return *(unsigned int *)(qword_1C0323160 + 316);
  result = (unsigned int)dword_1C03231A8;
  if ( !dword_1C03231A8 )
  {
    v1 = SHIWORD(dword_1C0323138);
    fixed = FixMul(*(_DWORD *)(qword_1C0323160 + 312), *(_DWORD *)(qword_1C0323160 + 312));
    FixMul(4 * (__int16)((v3 * v3 + 0x2000) >> 14), fixed);
    v5 = FixMul(v4, v4);
    v6 = FixMul(4 * (__int16)((v1 * v1 + 0x2000) >> 14), v5);
    v8 = v6 + v7;
    result = 0x10000LL;
    if ( v8 <= 0x10000 )
    {
      result = (unsigned int)((int)(FracSqrt((unsigned int)(v8 << 14)) + 0x2000) >> 14);
      dword_1C03231A8 = result;
    }
  }
  return result;
}
