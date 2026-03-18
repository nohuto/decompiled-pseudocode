/*
 * XREFs of xxxClientCallDitThread @ 0x1C0006BB8
 * Callers:
 *     xxxIsDCompSpeedHitTest @ 0x1C008D644 (xxxIsDCompSpeedHitTest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall xxxClientCallDitThread(__int64 a1, _OWORD *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int128 *v6; // rcx
  _BYTE v8[4]; // [rsp+30h] [rbp-178h] BYREF
  int v9; // [rsp+34h] [rbp-174h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-170h] BYREF
  __int128 v11; // [rsp+58h] [rbp-150h]
  __int128 v12; // [rsp+68h] [rbp-140h]
  __int128 v13; // [rsp+78h] [rbp-130h]
  __int128 v14; // [rsp+88h] [rbp-120h]
  __int128 v15; // [rsp+98h] [rbp-110h]
  __int128 v16; // [rsp+A8h] [rbp-100h]
  __int128 v17; // [rsp+B8h] [rbp-F0h]
  __int128 v18; // [rsp+C8h] [rbp-E0h]
  __int128 v19; // [rsp+D8h] [rbp-D0h]
  _QWORD v20[20]; // [rsp+F0h] [rbp-B8h] BYREF

  memset(v20, 0, 0x98uLL);
  v20[0] = a1;
  *(_OWORD *)&v20[1] = *a2;
  *(_OWORD *)&v20[3] = a2[1];
  *(_OWORD *)&v20[5] = a2[2];
  *(_OWORD *)&v20[7] = a2[3];
  *(_OWORD *)&v20[9] = a2[4];
  *(_OWORD *)&v20[11] = a2[5];
  *(_OWORD *)&v20[13] = a2[6];
  *(_OWORD *)&v20[15] = a2[7];
  *(_OWORD *)&v20[17] = a2[8];
  DwmHitTestLeaveEnterCrit::DwmHitTestLeaveEnterCrit((DwmHitTestLeaveEnterCrit *)v8);
  EtwTraceBeginCallback(55LL);
  LODWORD(a1) = KeUserModeCallback(55LL, v20, 152LL, v10, &v9);
  EtwTraceEndCallback(55LL);
  DwmHitTestLeaveEnterCrit::~DwmHitTestLeaveEnterCrit((DwmHitTestLeaveEnterCrit *)v8);
  if ( (int)a1 < 0 || v9 != 24 )
    return 0LL;
  v4 = (__int64 *)v10[0];
  if ( (unsigned __int64)(v10[0] + 8LL) < v10[0] || (unsigned __int64)(v10[0] + 8LL) > W32UserProbeAddress )
    v4 = (__int64 *)W32UserProbeAddress;
  v5 = *v4;
  v10[1] = *v4;
  v6 = *(__int128 **)(v10[0] + 16LL);
  if ( v6 + 9 < v6 || (unsigned __int64)(v6 + 9) > W32UserProbeAddress )
    v6 = (__int128 *)W32UserProbeAddress;
  v11 = *v6;
  v12 = v6[1];
  v13 = v6[2];
  v14 = v6[3];
  v15 = v6[4];
  v16 = v6[5];
  v17 = v6[6];
  v18 = v6[7];
  v19 = v6[8];
  *a2 = v11;
  a2[1] = v12;
  a2[2] = v13;
  a2[3] = v14;
  a2[4] = v15;
  a2[5] = v16;
  a2[6] = v17;
  a2[7] = v18;
  a2[8] = v19;
  return (unsigned int)v5;
}
