/*
 * XREFs of cjVTFDIFIMETRICS @ 0x1C01163F8
 * Callers:
 *     bVtfdLoadFont @ 0x1C0115284 (bVtfdLoadFont.c)
 *     vVtfdFill_IFIMetrics @ 0x1C0115A34 (vVtfdFill_IFIMetrics.c)
 * Callees:
 *     StringCchLengthA @ 0x1C0117704 (StringCchLengthA.c)
 */

__int64 __fastcall cjVTFDIFIMETRICS(__int64 a1)
{
  __int64 v1; // r11
  unsigned __int64 v2; // rax
  unsigned int v3; // edx
  char v4; // al
  int v5; // ecx
  unsigned int v6; // ecx
  unsigned __int64 v7; // rcx
  int v8; // eax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  StringCchLengthA(
    (STRSAFE_PCNZCH)(a1
                   + (*(unsigned __int8 *)(a1 + 105) | (*(unsigned __int8 *)(a1 + 108) << 24) | (unsigned __int64)(*(unsigned __int16 *)(a1 + 106) << 8))),
    0x7FFFFFFFuLL,
    &pcchLength);
  v2 = 2LL * (unsigned int)(pcchLength + 1);
  if ( v2 <= 0xFFFFFFFF && (int)v2 + 3 >= (unsigned int)v2 )
  {
    v3 = ((v2 + 3) & 0xFFFFFFFC) + 192;
    if ( v3 >= 0xC0 )
    {
      v4 = *(_BYTE *)(v1 + 80);
      if ( *(unsigned __int16 *)(v1 + 83) > 0x190u )
        v5 = 2 - (v4 != 0);
      else
        v5 = v4 != 0 ? 2 : 4;
      v6 = v5 - 1;
      if ( !v6 )
        return v3;
      v7 = 20LL * v6;
      if ( v7 <= 0xFFFFFFFF )
      {
        v8 = v7 + 12;
        if ( (unsigned int)v7 < 0xFFFFFFF4 && v8 + v3 >= v3 )
        {
          v3 += v8;
          return v3;
        }
      }
    }
  }
  return 0LL;
}
