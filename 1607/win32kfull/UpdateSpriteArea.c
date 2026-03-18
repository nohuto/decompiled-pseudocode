/*
 * XREFs of UpdateSpriteArea @ 0x1C00D661C
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     UpdateSprite @ 0x1C00527B0 (UpdateSprite.c)
 *     GreHintSpriteBlt @ 0x1C00D6900 (GreHintSpriteBlt.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00D8824 (GreConvertMemToRedirectionDC.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0293120 (GreConvertRedirectionToMemDC.c)
 */

__int64 __fastcall UpdateSpriteArea(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        HDC a4,
        __int64 a5,
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
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // [rsp+78h] [rbp-90h] BYREF
  int v25[4]; // [rsp+88h] [rbp-80h]
  unsigned int v26; // [rsp+98h] [rbp-70h]
  unsigned int v27; // [rsp+9Ch] [rbp-6Ch]
  __int64 v28; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  __int64 v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  __int64 v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  __int64 v35[2]; // [rsp+D8h] [rbp-30h] BYREF

  result = 0LL;
  LODWORD(v24) = 0;
  v14 = *((_DWORD *)a1 + 28);
  v16 = (*((_BYTE *)a1 + 50) & 8) == 0;
  v30 = a2;
  v18 = *((_DWORD *)a1 + 29);
  v31 = a3;
  v26 = v18;
  v32 = a5;
  v33 = a6;
  v29 = 0LL;
  v27 = v14;
  if ( !v16 && a2 )
  {
    v19 = *a7;
    LODWORD(v28) = *((_DWORD *)a1 + 30) - v14;
    v20 = *((_DWORD *)a1 + 31) - v18;
    HIDWORD(v35[1]) = v19.m128i_i32[3] - v18;
    HIDWORD(v35[0]) = v19.m128i_i32[1] - v18;
    LODWORD(v35[1]) = v19.m128i_i32[2] - v14;
    HIDWORD(v28) = v20;
    LODWORD(v35[0]) = _mm_cvtsi128_si32(v19) - v14;
    GreOffsetRgn(a6, -v14, -v18);
    v25[2] = a8 + v19.m128i_i32[2] - a10;
    v25[0] = a8 + _mm_cvtsi128_si32(v19) - a10;
    v25[3] = a9 + v19.m128i_i32[3] - a11;
    v25[1] = a9 + v19.m128i_i32[1] - a11;
    v34 = GreSelectBitmap(a5, a3);
    if ( (HDC)a5 != a4 )
      v29 = GreSelectBitmap(a4, a2);
    GreHintSpriteBlt((HWND)*a1);
    GreSelectVisRgn(a4, a6, 4LL);
    v21 = GreConvertMemToRedirectionDC(a4);
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(*a1, *a1, v31);
    v22 = v32;
    NtGdiBitBltInternal(
      a4,
      v35[0],
      SHIDWORD(v35[0]),
      LODWORD(v35[1]) - LODWORD(v35[0]),
      HIDWORD(v35[1]) - HIDWORD(v35[0]),
      (HDC)v32,
      v25[0],
      v25[1],
      0x80CC0020,
      0,
      0);
    if ( v21 )
      GreConvertRedirectionToMemDC(a4);
    v24 = a1[14];
    UpdateSprite(
      (HDEV)*gpDispInfo,
      (__int64)a1,
      v23,
      0LL,
      0LL,
      (struct tagSIZE *)&v28,
      a4,
      (struct tagPOINT *)&v24,
      0,
      0LL,
      0x40000000u,
      (struct tagRECT *)v35);
    GreSelectVisRgn(a4, v33, 4LL);
    GreOffsetRgn(v33, v27, v26);
    GreSelectBitmap(v22, v34);
    result = v29;
    if ( v29 )
      return GreSelectBitmap(a4, v29);
  }
  return result;
}
