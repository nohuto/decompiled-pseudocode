/*
 * XREFs of sub_140001CB8 @ 0x140001CB8
 * Callers:
 *     sub_140001C10 @ 0x140001C10 (sub_140001C10.c)
 *     sub_140001D7C @ 0x140001D7C (sub_140001D7C.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     memset @ 0x14000C48C (memset.c)
 */

__int64 __fastcall sub_140001CB8(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD v9[21]; // [rsp+20h] [rbp-E0h] BYREF

  memset(v9, 0, 328);
  v2 = *a2;
  v3 = a2[1];
  BYTE8(v9[9]) = 0;
  v9[3] = v2;
  v4 = a2[2];
  DWORD2(v9[2]) = 3;
  v9[4] = v3;
  v5 = a2[3];
  v9[5] = v4;
  v6 = a2[4];
  v9[6] = v5;
  v7 = a2[5];
  v9[7] = v6;
  *(_QWORD *)&v9[9] = *((_QWORD *)a2 + 12);
  v9[8] = v7;
  return RtlSendMsgToSm(qword_14001FCE0, v9);
}
