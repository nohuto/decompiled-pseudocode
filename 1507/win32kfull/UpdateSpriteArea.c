/*
 * XREFs of UpdateSpriteArea @ 0x1C000A280
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GreHintSpriteBlt @ 0x1C000A188 (GreHintSpriteBlt.c)
 *     GreConvertMemToRedirectionDC @ 0x1C000B03C (GreConvertMemToRedirectionDC.c)
 *     UpdateSprite @ 0x1C00591C0 (UpdateSprite.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0293EA0 (GreConvertRedirectionToMemDC.c)
 */

__int64 __fastcall UpdateSpriteArea(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        HDC a4,
        __int64 a5,
        HRGN a6,
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
  unsigned int v20; // eax
  int v21; // r15d
  int v22; // r14d
  int v23; // edi
  __int64 v24; // rdi
  int v25; // r8d
  int v26; // [rsp+38h] [rbp-D0h]
  _DWORD v27[4]; // [rsp+78h] [rbp-90h] BYREF
  int v28[4]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v29; // [rsp+98h] [rbp-70h]
  unsigned int v30; // [rsp+9Ch] [rbp-6Ch]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  _DWORD v32[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-58h]
  __int64 v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  __int64 v36; // [rsp+C8h] [rbp-40h]
  HRGN v37; // [rsp+D0h] [rbp-38h]
  int v38[4]; // [rsp+D8h] [rbp-30h] BYREF

  result = 0LL;
  v27[0] = 0;
  v14 = *((_DWORD *)a1 + 28);
  v16 = (*((_BYTE *)a1 + 50) & 8) == 0;
  v33 = a2;
  v18 = *((_DWORD *)a1 + 29);
  v36 = a3;
  v30 = v18;
  v35 = a5;
  v37 = a6;
  v31 = 0LL;
  v29 = v14;
  if ( !v16 && a2 )
  {
    v19 = *a7;
    v32[0] = *((_DWORD *)a1 + 30) - v14;
    v20 = *((_DWORD *)a1 + 31) - v18;
    v38[3] = v19.m128i_i32[3] - v18;
    v38[1] = v19.m128i_i32[1] - v18;
    v38[2] = v19.m128i_i32[2] - v14;
    v32[1] = v20;
    v38[0] = _mm_cvtsi128_si32(v19) - v14;
    GreOffsetRgn(a6, -v14, -v18);
    v28[2] = a8 + v19.m128i_i32[2] - a10;
    v28[0] = a8 + _mm_cvtsi128_si32(v19) - a10;
    v28[3] = a9 + v19.m128i_i32[3] - a11;
    v28[1] = a9 + v19.m128i_i32[1] - a11;
    v34 = GreSelectBitmap(a5, a3);
    if ( (HDC)a5 != a4 )
      v31 = GreSelectBitmap(a4, a2);
    GreHintSpriteBlt((HWND)*a1, v28, v38, a6);
    GreSelectVisRgn(a4, a6, 4LL);
    v21 = GreConvertMemToRedirectionDC(a4);
    v22 = v28[1];
    v23 = v28[0];
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(*a1, *a1, v36);
    v26 = v23;
    v24 = v35;
    NtGdiBitBltInternal(a4, v38[0], v38[1], v38[2] - v38[0], v38[3] - v38[1], v35, v26, v22, -2134114272, 0, 0);
    if ( v21 )
      GreConvertRedirectionToMemDC(a4);
    v27[0] = *((_DWORD *)a1 + 28);
    v27[1] = *((_DWORD *)a1 + 29);
    UpdateSprite(
      *gpDispInfo,
      (_DWORD)a1,
      v25,
      0,
      0LL,
      (__int64)v32,
      (__int64)a4,
      (__int64)v27,
      0,
      0LL,
      0x40000000,
      (__int64)v38);
    GreSelectVisRgn(a4, v37, 4LL);
    GreOffsetRgn(v37, v29, v30);
    GreSelectBitmap(v24, v34);
    result = v31;
    if ( v31 )
      return GreSelectBitmap(a4, v31);
  }
  return result;
}
