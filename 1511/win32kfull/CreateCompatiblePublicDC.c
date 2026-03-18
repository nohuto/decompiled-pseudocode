/*
 * XREFs of CreateCompatiblePublicDC @ 0x1C00CCE28
 * Callers:
 *     xxxClientGetTextExtentPointW @ 0x1C00CCAFC (xxxClientGetTextExtentPointW.c)
 *     xxxClientExtTextOutW @ 0x1C014C20C (xxxClientExtTextOutW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0214C20 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0214F8C (xxxClientPSMTextOut.c)
 * Callees:
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0040968 (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiGetDCObject @ 0x1C0040C40 (NtGdiGetDCObject.c)
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     GreGetLayout @ 0x1C006B8B4 (GreGetLayout.c)
 *     GreSetTextAlign @ 0x1C00CCFB8 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00CD038 (GreGetTextAlign.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  HBRUSH DCObject; // rax
  int v8; // r15d
  int v9; // r14d
  __int64 CompatibleBitmapInternal; // rax
  __int64 v11; // rbp
  __int64 *DPIMetrics; // rax
  __int64 v13; // rbx
  HDC result; // rax
  unsigned __int16 v15[2]; // [rsp+60h] [rbp-38h] BYREF
  int v16; // [rsp+64h] [rbp-34h]
  int v17; // [rsp+68h] [rbp-30h]

  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1, v4);
  v6 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 1LL) )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  DCObject = (HBRUSH)NtGdiGetDCObject((__int64)a1, 327680LL);
  GreExtGetObjectW(DCObject, 32LL, v15);
  v8 = v17;
  v9 = v16;
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal((__int64)a1, v16, v17, 0, 0LL);
  v11 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !(unsigned int)GreSetBitmapOwner(CompatibleBitmapInternal, 2147483650LL) )
  {
    GreDeleteDC(v6);
    if ( v11 )
      GreDeleteObject(v11);
    return 0LL;
  }
  GreSelectBitmap(v6, v11);
  DPIMetrics = (__int64 *)GetDPIMetrics();
  v13 = GreSelectFont((__int64)a1, *DPIMetrics);
  GreSelectFont((__int64)a1, v13);
  GreSelectFont((__int64)v6, v13);
  GreGetTextAlign(a1);
  GreSetTextAlign(v6);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v6, (unsigned int)(v9 - 1), 1LL);
  NtGdiBitBltInternal(v6, 0, 0, v9, v8, a1, 0, 0, 0xCC0020u, 0, 0);
  result = v6;
  *a2 = v11;
  return result;
}
