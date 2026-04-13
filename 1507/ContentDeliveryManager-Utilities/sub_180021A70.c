/*
 * XREFs of sub_180021A70 @ 0x180021A70
 * Callers:
 *     sub_180015640 @ 0x180015640 (sub_180015640.c)
 * Callees:
 *     sub_180022B4C @ 0x180022B4C (sub_180022B4C.c)
 *     sub_180022C84 @ 0x180022C84 (sub_180022C84.c)
 *     sub_180022F1C @ 0x180022F1C (sub_180022F1C.c)
 *     sub_180023230 @ 0x180023230 (sub_180023230.c)
 *     sub_180023768 @ 0x180023768 (sub_180023768.c)
 *     sub_180023A78 @ 0x180023A78 (sub_180023A78.c)
 *     sub_180023B7C @ 0x180023B7C (sub_180023B7C.c)
 *     sub_180023C04 @ 0x180023C04 (sub_180023C04.c)
 *     sub_180023CBC @ 0x180023CBC (sub_180023CBC.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

__m128 __fastcall sub_180021A70(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  __m128 result; // xmm0
  int v5; // edi
  int v8; // eax
  int v9; // r12d
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rdi
  double v14; // xmm0_8
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rdi
  unsigned int v18; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-55h]
  unsigned int v20; // [rsp+38h] [rbp-51h] BYREF
  __int64 v21; // [rsp+40h] [rbp-49h] BYREF
  _BYTE Src[16]; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v23[16]; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v24[16]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v25[24]; // [rsp+78h] [rbp-11h] BYREF

  v5 = a1;
  v21 = a1;
  v8 = sub_180022B4C(&v21);
  v9 = v8 & 8;
  if ( a4 )
    *a4 = 0;
  v10 = v8 & 0xFFFFFFF7;
  switch ( v10 )
  {
    case 1u:
      *(double *)result.m128_u64 = sub_180022C84(v5, v21, a2, (unsigned int)&v18, 1);
      v12 = v11;
      sub_180023C04(v24, 3LL);
      if ( (_DWORD)v12 )
      {
        sub_180023B7C(Src, 3LL, v19);
        v13 = 1LL;
        while ( v13 < v12 )
        {
          sub_180023A78(Src, v25);
          ++v13;
          sub_180023B7C(v23, 3LL, *(&v18 + v13));
          sub_180023768(Src, 3LL, v23, 3LL);
        }
      }
      else
      {
        sub_180023C04(Src, 3LL);
      }
      sub_180023CBC(Src);
      break;
    case 2u:
      v14 = sub_180022F1C(v5, v21, a2, (unsigned int)&v18, 1);
      v16 = v15;
      sub_180023C04(v23, 3LL);
      if ( (_DWORD)v16 )
      {
        sub_180023B7C(Src, 3LL, v19);
        v17 = 1LL;
        while ( v17 < v16 )
        {
          sub_180023A78(Src, v25);
          ++v17;
          sub_180023B7C(v24, 3LL, *(&v18 + v17));
          sub_180023768(Src, 3LL, v24, 3LL);
        }
      }
      else
      {
        sub_180023C04(Src, 3LL);
      }
      sub_180023CBC(Src);
      v20 = LODWORD(v14);
      sub_180023230(&v20, v18);
      result = (__m128)v20;
      break;
    case 3u:
      result = (__m128)(unsigned int)dword_18003A010;
      break;
    case 4u:
      result = (__m128)(unsigned int)dword_18003A020;
      break;
    default:
      result = 0LL;
      break;
  }
  if ( v9 )
    return _mm_xor_ps(result, (__m128)xmmword_18002B420);
  return result;
}
