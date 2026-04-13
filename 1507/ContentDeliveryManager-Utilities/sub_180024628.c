/*
 * XREFs of sub_180024628 @ 0x180024628
 * Callers:
 *     unknown_libname_8 @ 0x1800223C0 (unknown_libname_8.c)
 * Callees:
 *     sub_1800243E0 @ 0x1800243E0 (sub_1800243E0.c)
 *     sub_180024510 @ 0x180024510 (sub_180024510.c)
 *     sub_180024DEC @ 0x180024DEC (sub_180024DEC.c)
 *     sub_180024E78 @ 0x180024E78 (sub_180024E78.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

void __fastcall sub_180024628(double *Src, int a2, _DWORD *a3)
{
  int v4; // ebx
  double v6; // xmm0_8
  double Srca[3]; // [rsp+30h] [rbp-98h] BYREF
  double v8[3]; // [rsp+48h] [rbp-80h] BYREF
  char v9[48]; // [rsp+60h] [rbp-68h] BYREF

  v4 = a2;
  if ( !a2 || *Src == 0.0 )
  {
    sub_180024DEC(Src, 3LL);
  }
  else
  {
    if ( a2 <= 0 )
    {
      v4 = -a2;
      sub_180024E78(Srca, 3LL, &unk_18002B540);
    }
    else
    {
      sub_180024510((__int64)Srca, 3, 10.0);
    }
    while ( 1 )
    {
      if ( (v4 & 1) != 0 )
        sub_1800243E0(Src, 3, Srca, 3, v9);
      v4 >>= 1;
      if ( !v4 )
        break;
      sub_180024E78(v8, 3LL, Srca);
      sub_1800243E0(Srca, 3, v8, 3, v9);
    }
    v6 = sub_180024DEC(Src, 3LL);
    if ( v6 == 0.0 || v6 == *(double *)&qword_18003A030 || v6 == -*(double *)&qword_18003A030 )
    {
      *errno() = 34;
      if ( a3 )
        *a3 |= 1u;
    }
  }
}
