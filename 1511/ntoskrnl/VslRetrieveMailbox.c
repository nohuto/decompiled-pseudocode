/*
 * XREFs of VslRetrieveMailbox @ 0x1401B3D38
 * Callers:
 *     <none>
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

NTSTATUS __fastcall VslRetrieveMailbox(__int64 a1, _QWORD *a2, unsigned __int8 a3, __int64 a4, _QWORD *a5)
{
  NTSTATUS result; // eax
  __int128 v6; // xmm0
  _OWORD v7[7]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 104);
  if ( !*a2 && !a2[1] )
    return -1073741811;
  v6 = *(_OWORD *)a2;
  *(_QWORD *)&v7[2] = a3;
  *(_QWORD *)&v7[3] = *a5;
  *((_QWORD *)&v7[0] + 1) = a1;
  v7[1] = v6;
  *((_QWORD *)&v7[2] + 1) = a4;
  result = HvlpEnterIumSecureMode(1u, 15, 0, (unsigned __int8 *)v7);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741789 )
    *a5 = LODWORD(v7[1]);
  return result;
}
