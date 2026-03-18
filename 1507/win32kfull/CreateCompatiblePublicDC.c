/*
 * XREFs of CreateCompatiblePublicDC @ 0x1C0126D64
 * Callers:
 *     xxxClientExtTextOutW @ 0x1C0123184 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0126A38 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0214D78 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02150E4 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     GreGetLayout @ 0x1C008E4AC (GreGetLayout.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiGetDCObject @ 0x1C00D3E90 (NtGdiGetDCObject.c)
 *     GreSetTextAlign @ 0x1C00FA3AC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FAEBC (GreGetTextAlign.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, __int64 *a2)
{
  __int64 v4; // rdx
  HDC result; // rax
  __int64 CompatibleDC; // rax
  HDC v7; // rdi
  HSURF DCObject; // rax
  int v9; // r15d
  int v10; // r14d
  __int64 CompatibleBitmapInternal; // rax
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int TextAlign; // eax
  unsigned __int16 v17[2]; // [rsp+60h] [rbp-38h] BYREF
  int v18; // [rsp+64h] [rbp-34h]
  int v19; // [rsp+68h] [rbp-30h]

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
  DCObject = (HSURF)NtGdiGetDCObject(a1, 327680);
  GreExtGetObjectW(DCObject, 32, v17);
  v9 = v19;
  v10 = v18;
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, v18, v19, 0, 0LL);
  v12 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !(unsigned int)GreSetBitmapOwner(CompatibleBitmapInternal, 2147483650LL) )
  {
    GreDeleteDC(v7);
    if ( v12 )
      GreDeleteObject(v12);
    return 0LL;
  }
  GreSelectBitmap(v7, v12);
  GetDPIMetrics(v14, v13, v15);
  GreSelectFontInternal(a1);
  GreSelectFontInternal(a1);
  GreSelectFontInternal(v7);
  TextAlign = GreGetTextAlign(a1);
  GreSetTextAlign(v7, TextAlign);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v7, (unsigned int)(v10 - 1), 1LL);
  NtGdiBitBltInternal(v7, 0, 0, v10, v9, a1, 0, 0, 0xCC0020u, 0, 0);
  result = v7;
  *a2 = v12;
  return result;
}
