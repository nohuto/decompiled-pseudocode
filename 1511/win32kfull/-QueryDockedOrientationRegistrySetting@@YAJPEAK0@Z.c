/*
 * XREFs of ?QueryDockedOrientationRegistrySetting@@YAJPEAK0@Z @ 0x1C01D217C
 * Callers:
 *     ?GetDockedOrientationValue@@YAKPEAK@Z @ 0x1C01D1F8C (-GetDockedOrientationValue@@YAKPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall QueryDockedOrientationRegistrySetting(unsigned int *a1, unsigned int *a2)
{
  __int64 result; // rax
  char v5; // cl
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-CCh] BYREF
  int v8; // [rsp+38h] [rbp-C8h] BYREF
  int v9; // [rsp+3Ch] [rbp-C4h] BYREF
  _BYTE v10[20]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v11[8]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v12; // [rsp+5Ch] [rbp-A4h]
  int v13; // [rsp+64h] [rbp-9Ch]
  _BYTE v14[192]; // [rsp+90h] [rbp-70h] BYREF

  v8 = 1;
  v9 = 3;
  result = DrvQueryDisplayConfig(3221225490LL, &v8, v10, &v9, v14, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v13 == 0x80000000 || v13 == 11 || v13 == 13 )
    {
      result = DrvGetMonitorOrientation(v11, v12, &v7, &v6);
      if ( (int)result >= 0 )
      {
        v5 = v6 - v7;
        *a1 = v7;
        *a2 = v5 & 3;
        return 0LL;
      }
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
