/*
 * XREFs of RegisterPepDevice @ 0x1C001741C
 * Callers:
 *     InitPep @ 0x1C0017290 (InitPep.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 */

__int64 __fastcall RegisterPepDevice(__int64 a1)
{
  bool v2; // zf
  int v3; // edi
  _QWORD *v4; // rbx
  _QWORD v6[12]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v7[3]; // [rsp+80h] [rbp+37h] BYREF

  v7[0] = 0LL;
  v7[1] = 0LL;
  memset(v6, 0, sizeof(v6));
  v7[2] = 0xFFFFFFFFLL;
  v2 = *(_BYTE *)(a1 + 66) == 0;
  v6[0] = 0x100000001LL;
  LODWORD(v6[10]) = 1;
  v6[11] = v7;
  v6[6] = PepDevicePowerControlCallback;
  v6[7] = a1;
  if ( v2 || !byte_1C000F424 )
  {
    v4 = (_QWORD *)(a1 + 1064);
    v3 = PoFxRegisterDevice(*(_QWORD *)a1, v6, a1 + 1064);
    if ( v3 >= 0 )
    {
      PoFxActivateComponent(*v4, 0LL, 0LL);
      PoFxStartDevicePowerManagement(*v4);
    }
    else
    {
      *v4 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
