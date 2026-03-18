/*
 * XREFs of VslRetrieveMailbox @ 0x1401EE654
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

NTSTATUS __fastcall VslRetrieveMailbox(__int64 a1, __int128 *a2, unsigned __int8 a3, __int64 a4, __int64 *a5)
{
  __int128 v5; // xmm0
  __int64 v6; // rax
  NTSTATUS result; // eax
  _OWORD v8[7]; // [rsp+20h] [rbp-88h] BYREF

  memset(v8, 0, 104);
  v5 = *a2;
  v6 = *a5;
  *((_QWORD *)&v8[0] + 1) = a1;
  *(_QWORD *)&v8[2] = a3;
  *((_QWORD *)&v8[2] + 1) = a4;
  v8[1] = v5;
  *(_QWORD *)&v8[3] = v6;
  result = HvlpEnterIumSecureMode(1u, 15, 0, (unsigned __int8 *)v8);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741789 )
    *a5 = LODWORD(v8[1]);
  return result;
}
