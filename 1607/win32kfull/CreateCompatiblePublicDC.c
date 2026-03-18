/*
 * XREFs of CreateCompatiblePublicDC @ 0x1C00B966C
 * Callers:
 *     xxxClientGetTextExtentPointW @ 0x1C00B9374 (xxxClientGetTextExtentPointW.c)
 *     xxxClientExtTextOutW @ 0x1C0151798 (xxxClientExtTextOutW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C020DA2C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C020DDD8 (xxxClientPSMTextOut.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     NtGdiGetDCObject @ 0x1C004C540 (NtGdiGetDCObject.c)
 *     GreGetLayout @ 0x1C005D99C (GreGetLayout.c)
 *     GreSetTextAlign @ 0x1C00B9838 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00B98B0 (GreGetTextAlign.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, __int64 *a2)
{
  __int64 v4; // rdx
  HDC result; // rax
  __int64 CompatibleDC; // rax
  HDC v7; // rdi
  struct HLFONT__ *DCObject; // rax
  int v9; // r15d
  int v10; // r14d
  __int64 CompatibleBitmapInternal; // rax
  __int64 v12; // rbp
  unsigned __int16 v13[2]; // [rsp+60h] [rbp-38h] BYREF
  int v14; // [rsp+64h] [rbp-34h]
  int v15; // [rsp+68h] [rbp-30h]

  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1, v4);
  v7 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 1LL) )
  {
    GreDeleteDC(v7);
    return 0LL;
  }
  DCObject = (struct HLFONT__ *)NtGdiGetDCObject(a1, 327680);
  GreExtGetObjectW(DCObject, 32, v13);
  v9 = v15;
  v10 = v14;
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, 0LL);
  v12 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !(unsigned int)GreSetBitmapOwner(CompatibleBitmapInternal, 2147483650LL) )
  {
    GreDeleteDC(v7);
    if ( v12 )
      GreDeleteObject(v12);
    return 0LL;
  }
  GreSelectBitmap(v7, v12);
  GetDPIMetrics();
  GreSelectFontInternal(a1);
  GreSelectFontInternal(a1);
  GreSelectFontInternal(v7);
  GreGetTextAlign(a1);
  GreSetTextAlign(v7);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v7, (unsigned int)(v10 - 1), 1LL);
  NtGdiBitBltInternal(v7, 0, 0, v10, v9, a1, 0, 0, 0xCC0020u, 0, 0);
  result = v7;
  *a2 = v12;
  return result;
}
