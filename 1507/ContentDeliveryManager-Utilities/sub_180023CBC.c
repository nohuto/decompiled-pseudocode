/*
 * XREFs of sub_180023CBC @ 0x180023CBC
 * Callers:
 *     sub_180021A70 @ 0x180021A70 (sub_180021A70.c)
 * Callees:
 *     _FXp_getw @ 0x1800237DC (_FXp_getw.c)
 *     sub_180023864 @ 0x180023864 (sub_180023864.c)
 *     sub_180023A78 @ 0x180023A78 (sub_180023A78.c)
 *     sub_180023C04 @ 0x180023C04 (sub_180023C04.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

float __fastcall sub_180023CBC(float *Src, int a2, _DWORD *a3)
{
  int v4; // ebx
  float result; // xmm0_4
  float Srca[4]; // [rsp+30h] [rbp-68h] BYREF
  float v8[4]; // [rsp+40h] [rbp-58h] BYREF
  char v9[24]; // [rsp+50h] [rbp-48h] BYREF

  v4 = a2;
  if ( !a2 || *Src == 0.0 )
    return FXp_getw(Src, 3);
  if ( a2 <= 0 )
  {
    v4 = -a2;
    sub_180023864(Srca, 3, &unk_18002B528);
  }
  else
  {
    sub_180023C04((__int64)Srca, 3, 10.0);
  }
  while ( 1 )
  {
    if ( (v4 & 1) != 0 )
      sub_180023A78(Src, 3, Srca, 3, v9);
    v4 >>= 1;
    if ( !v4 )
      break;
    sub_180023864(v8, 3, Srca);
    sub_180023A78(Srca, 3, v8, 3, v9);
  }
  result = FXp_getw(Src, 3);
  if ( result == 0.0 || result == *(float *)&dword_18003A010 || result == (float)-*(float *)&dword_18003A010 )
  {
    *errno() = 34;
    if ( a3 )
      *a3 |= 1u;
  }
  return result;
}
