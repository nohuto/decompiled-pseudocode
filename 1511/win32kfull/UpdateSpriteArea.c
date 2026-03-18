/*
 * XREFs of UpdateSpriteArea @ 0x1C014577C
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     UpdateSprite @ 0x1C006BC94 (UpdateSprite.c)
 *     GreConvertMemToRedirectionDC @ 0x1C009B164 (GreConvertMemToRedirectionDC.c)
 *     GreHintSpriteBlt @ 0x1C0145A60 (GreHintSpriteBlt.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0293A00 (GreConvertRedirectionToMemDC.c)
 */

__int64 __fastcall UpdateSpriteArea(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        HDC a4,
        HDC a5,
        __int64 a6,
        __m128i *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 result; // rax
  unsigned int v14; // ecx
  bool v16; // zf
  unsigned int v18; // edx
  __m128i v19; // xmm6
  LONG v20; // eax
  int v21; // r15d
  unsigned int v22; // r14d
  int v23; // edi
  HDC v24; // rdi
  __int64 v25; // r8
  int v26; // [rsp+38h] [rbp-D0h]
  struct tagPOINT v27[2]; // [rsp+78h] [rbp-90h] BYREF
  int v28; // [rsp+88h] [rbp-80h]
  unsigned int v29; // [rsp+8Ch] [rbp-7Ch]
  int v30; // [rsp+90h] [rbp-78h]
  int v31; // [rsp+94h] [rbp-74h]
  unsigned int v32; // [rsp+98h] [rbp-70h]
  unsigned int v33; // [rsp+9Ch] [rbp-6Ch]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  struct tagSIZE v35; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-58h]
  __int64 v37; // [rsp+B8h] [rbp-50h]
  HDC v38; // [rsp+C0h] [rbp-48h]
  __int64 v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  struct tagRECT v41; // [rsp+D8h] [rbp-30h] BYREF

  result = 0LL;
  v27[0].x = 0;
  v14 = *((_DWORD *)a1 + 28);
  v16 = (*((_BYTE *)a1 + 50) & 8) == 0;
  v36 = a2;
  v18 = *((_DWORD *)a1 + 29);
  v39 = a3;
  v33 = v18;
  v38 = a5;
  v40 = a6;
  v34 = 0LL;
  v32 = v14;
  if ( !v16 && a2 )
  {
    v19 = *a7;
    v35.cx = *((_DWORD *)a1 + 30) - v14;
    v20 = *((_DWORD *)a1 + 31) - v18;
    v41.bottom = v19.m128i_i32[3] - v18;
    v41.top = v19.m128i_i32[1] - v18;
    v41.right = v19.m128i_i32[2] - v14;
    v35.cy = v20;
    v41.left = _mm_cvtsi128_si32(v19) - v14;
    GreOffsetRgn(a6, -v14, -v18);
    v30 = a8 + v19.m128i_i32[2] - a10;
    v28 = a8 + _mm_cvtsi128_si32(v19) - a10;
    v31 = a9 + v19.m128i_i32[3] - a11;
    v29 = a9 + v19.m128i_i32[1] - a11;
    v37 = GreSelectBitmap(a5, a3);
    if ( a5 != a4 )
      v34 = GreSelectBitmap(a4, a2);
    GreHintSpriteBlt((HWND)*a1);
    GreSelectVisRgn(a4, a6, 4LL);
    v21 = GreConvertMemToRedirectionDC(a4, v27);
    v22 = v29;
    v23 = v28;
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(
      *a1,
      *a1,
      v39,
      (unsigned int)v41.left,
      v41.top,
      v41.right,
      v41.bottom,
      *a1,
      *a1,
      v36,
      v28,
      v29,
      v28 + v41.right - v41.left,
      v29 + v41.bottom - v41.top);
    v26 = v23;
    v24 = v38;
    NtGdiBitBltInternal(
      a4,
      v41.left,
      v41.top,
      v41.right - v41.left,
      v41.bottom - v41.top,
      v38,
      v26,
      v22,
      0x80CC0020,
      0,
      0);
    if ( v21 )
      GreConvertRedirectionToMemDC(a4);
    v27[0] = (struct tagPOINT)a1[14];
    UpdateSprite((HDEV)*gpDispInfo, (__int64)a1, v25, 0LL, 0LL, &v35, a4, v27, 0, 0LL, 0x40000000u, &v41);
    GreSelectVisRgn(a4, v40, 4LL);
    GreOffsetRgn(v40, v32, v33);
    GreSelectBitmap(v24, v37);
    result = v34;
    if ( v34 )
      return GreSelectBitmap(a4, v34);
  }
  return result;
}
