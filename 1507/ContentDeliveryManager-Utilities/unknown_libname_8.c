/*
 * XREFs of unknown_libname_8 @ 0x1800223C0
 * Callers:
 *     sub_180015870 @ 0x180015870 (sub_180015870.c)
 * Callees:
 *     sub_180022B4C @ 0x180022B4C (sub_180022B4C.c)
 *     sub_180022C84 @ 0x180022C84 (sub_180022C84.c)
 *     sub_180022F1C @ 0x180022F1C (sub_180022F1C.c)
 *     sub_180023E08 @ 0x180023E08 (sub_180023E08.c)
 *     sub_18002417C @ 0x18002417C (sub_18002417C.c)
 *     sub_1800243E0 @ 0x1800243E0 (sub_1800243E0.c)
 *     sub_1800244E8 @ 0x1800244E8 (sub_1800244E8.c)
 *     sub_180024510 @ 0x180024510 (sub_180024510.c)
 *     sub_180024628 @ 0x180024628 (sub_180024628.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Microsoft VisualC v7/14 64bit runtime
__m128 __fastcall unknown_libname_8(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  __m128 result; // xmm0
  int v5; // edi
  int v8; // eax
  int v9; // r12d
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // r14
  __int64 i; // rdi
  __int64 v14; // r8
  double v15; // xmm0_8
  int v16; // eax
  __int64 v17; // r14
  __int64 j; // rdi
  __int64 v19; // r8
  __int64 v20; // [rsp+30h] [rbp-79h] BYREF
  double v21; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-69h] BYREF
  _DWORD v23[3]; // [rsp+44h] [rbp-65h]
  _BYTE Src[24]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v25[24]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v26[24]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v27[48]; // [rsp+98h] [rbp-11h] BYREF

  v5 = a1;
  v20 = a1;
  v8 = sub_180022B4C(&v20);
  v9 = v8 & 8;
  if ( a4 )
    *a4 = 0;
  v10 = v8 & 0xFFFFFFF7;
  switch ( v10 )
  {
    case 1u:
      *(double *)result.m128_u64 = sub_180022C84(v5, v20, a2, (unsigned int)&v22, 2);
      v12 = v11;
      sub_180024510(v26, 3LL);
      if ( (_DWORD)v12 )
      {
        sub_1800244E8(Src, 3LL, v23[0]);
        for ( i = 1LL; i < v12; ++i )
        {
          sub_1800243E0(Src, v27);
          v14 = (unsigned int)v23[i];
          sub_1800244E8(v25, 3LL, v14);
          sub_18002417C(Src, 3LL, v25, 3LL);
        }
      }
      else
      {
        sub_180024510(Src, 3LL);
      }
      sub_180024628(Src);
      break;
    case 2u:
      v15 = sub_180022F1C(v5, v20, a2, (unsigned int)&v22, 2);
      v17 = v16;
      sub_180024510(v25, 3LL);
      if ( (_DWORD)v17 )
      {
        sub_1800244E8(Src, 3LL, v23[0]);
        for ( j = 1LL; j < v17; ++j )
        {
          sub_1800243E0(Src, v27);
          v19 = (unsigned int)v23[j];
          sub_1800244E8(v26, 3LL, v19);
          sub_18002417C(Src, 3LL, v26, 3LL);
        }
      }
      else
      {
        sub_180024510(Src, 3LL);
      }
      sub_180024628(Src);
      v21 = v15;
      sub_180023E08(&v21, v22);
      result = (__m128)*(unsigned __int64 *)&v21;
      break;
    case 3u:
      result = (__m128)(unsigned __int64)qword_18003A030;
      break;
    case 4u:
      result = (__m128)(unsigned __int64)qword_18003A040;
      break;
    default:
      result = 0LL;
      break;
  }
  if ( v9 )
    return _mm_xor_ps(result, (__m128)xmmword_18002B490);
  return result;
}
