/*
 * XREFs of RegisterPepDevice @ 0x1C0014C58
 * Callers:
 *     InitPep @ 0x1C0014AD8 (InitPep.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     memset @ 0x1C00025C0 (memset.c)
 */

__int64 __fastcall RegisterPepDevice(__int64 *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  int v4; // ebx
  _QWORD v6[12]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v7[2]; // [rsp+80h] [rbp+37h] BYREF
  __int64 v8; // [rsp+90h] [rbp+47h]

  v7[0] = 0LL;
  v7[1] = 0LL;
  v8 = 0LL;
  memset(v6, 0, sizeof(v6));
  v2 = *a1;
  v3 = a1 + 132;
  LODWORD(v8) = -1;
  v6[7] = a1;
  v6[0] = 0x100000001LL;
  LODWORD(v6[10]) = 1;
  v6[11] = v7;
  v6[6] = PepDevicePowerControlCallback;
  v4 = PoFxRegisterDevice(v2, v6, a1 + 132);
  if ( v4 < 0 )
  {
    *v3 = 0LL;
  }
  else
  {
    PoFxActivateComponent(*v3, 0LL, 0LL);
    PoFxStartDevicePowerManagement(*v3);
  }
  return (unsigned int)v4;
}
