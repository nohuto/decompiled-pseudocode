/*
 * XREFs of sub_180015640 @ 0x180015640
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800165C8 @ 0x1800165C8 (sub_1800165C8.c)
 *     sub_180017F00 @ 0x180017F00 (sub_180017F00.c)
 *     sub_180021A70 @ 0x180021A70 (sub_180021A70.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

_OWORD *__fastcall sub_180015640(int a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6, float *a7)
{
  unsigned int v10; // eax
  double v11; // xmm0_8
  float v12; // xmm6_4
  _OWORD *result; // rax
  int v14; // [rsp+38h] [rbp-61h] BYREF
  int v15; // [rsp+3Ch] [rbp-5Dh] BYREF
  _BYTE *v16; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v17[64]; // [rsp+48h] [rbp-51h] BYREF

  v14 = 0;
  v15 = 0;
  v10 = sub_1800165C8(a1, (unsigned int)v17, a3, a4, a5, (__int64)&v15);
  v11 = sub_180021A70(v17, &v16, v10, &v14);
  v12 = *(float *)&v11;
  if ( v15 )
    v12 = ldexp(*(float *)&v11, 4 * v15);
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    sub_180017F00(a4);
  if ( !*(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( *(_QWORD *)a4 )
LABEL_11:
    *a6 |= 1u;
LABEL_12:
  if ( v16 == v17 || v14 )
    *a6 |= 2u;
  else
    *a7 = v12;
  result = a2;
  *a2 = *(_OWORD *)a3;
  return result;
}
