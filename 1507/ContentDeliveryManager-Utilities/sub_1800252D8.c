/*
 * XREFs of sub_1800252D8 @ 0x1800252D8
 * Callers:
 *     unknown_libname_9 @ 0x1800227D0 (unknown_libname_9.c)
 * Callees:
 *     sub_180024DEC @ 0x180024DEC (sub_180024DEC.c)
 *     sub_180024E78 @ 0x180024E78 (sub_180024E78.c)
 *     sub_180025090 @ 0x180025090 (sub_180025090.c)
 *     sub_1800251C0 @ 0x1800251C0 (sub_1800251C0.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

double __fastcall sub_1800252D8(double *Src, int a2, _DWORD *a3)
{
  int v4; // ebx
  double result; // xmm0_8
  double Srca[3]; // [rsp+30h] [rbp-98h] BYREF
  double v8[3]; // [rsp+48h] [rbp-80h] BYREF
  char v9[48]; // [rsp+60h] [rbp-68h] BYREF

  v4 = a2;
  if ( !a2 || *Src == 0.0 )
    return sub_180024DEC(Src, 3);
  if ( a2 <= 0 )
  {
    v4 = -a2;
    sub_180024E78(Srca, 3, &unk_18002B560);
  }
  else
  {
    sub_1800251C0((__int64)Srca, 3, 10.0);
  }
  while ( 1 )
  {
    if ( (v4 & 1) != 0 )
      sub_180025090(Src, 3, Srca, 3, v9);
    v4 >>= 1;
    if ( !v4 )
      break;
    sub_180024E78(v8, 3, Srca);
    sub_180025090(Srca, 3, v8, 3, v9);
  }
  result = sub_180024DEC(Src, 3);
  if ( result == 0.0 || result == *(double *)&qword_18003A050 || result == -*(double *)&qword_18003A050 )
  {
    *errno() = 34;
    if ( a3 )
      *a3 |= 1u;
  }
  return result;
}
