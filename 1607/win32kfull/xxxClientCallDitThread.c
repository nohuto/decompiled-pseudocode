/*
 * XREFs of xxxClientCallDitThread @ 0x1C000B888
 * Callers:
 *     xxxIsDCompSpeedHitTest @ 0x1C00593A0 (xxxIsDCompSpeedHitTest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxClientCallDitThread(__int64 a1, _OWORD *a2)
{
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int128 *v7; // rcx
  _BYTE v9[4]; // [rsp+30h] [rbp-178h] BYREF
  int v10; // [rsp+34h] [rbp-174h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-170h] BYREF
  __int128 v12; // [rsp+58h] [rbp-150h]
  __int128 v13; // [rsp+68h] [rbp-140h]
  __int128 v14; // [rsp+78h] [rbp-130h]
  __int128 v15; // [rsp+88h] [rbp-120h]
  __int128 v16; // [rsp+98h] [rbp-110h]
  __int128 v17; // [rsp+A8h] [rbp-100h]
  __int128 v18; // [rsp+B8h] [rbp-F0h]
  __int128 v19; // [rsp+C8h] [rbp-E0h]
  __int128 v20; // [rsp+D8h] [rbp-D0h]
  _QWORD v21[20]; // [rsp+F0h] [rbp-B8h] BYREF

  memset(v21, 0, 0x98uLL);
  v21[0] = a1;
  *(_OWORD *)&v21[1] = *a2;
  *(_OWORD *)&v21[3] = a2[1];
  *(_OWORD *)&v21[5] = a2[2];
  *(_OWORD *)&v21[7] = a2[3];
  *(_OWORD *)&v21[9] = a2[4];
  *(_OWORD *)&v21[11] = a2[5];
  *(_OWORD *)&v21[13] = a2[6];
  *(_OWORD *)&v21[15] = a2[7];
  *(_OWORD *)&v21[17] = a2[8];
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  DwmHitTestLeaveEnterCrit::DwmHitTestLeaveEnterCrit((DwmHitTestLeaveEnterCrit *)v9);
  EtwTraceBeginCallback(55LL);
  v4 = KeUserModeCallback(55LL, v21, 152LL, v11, &v10);
  EtwTraceEndCallback(55LL);
  DwmHitTestLeaveEnterCrit::~DwmHitTestLeaveEnterCrit((DwmHitTestLeaveEnterCrit *)v9);
  if ( v4 < 0 || v10 != 24 )
    return 0LL;
  v5 = (__int64 *)v11[0];
  if ( (unsigned __int64)(v11[0] + 8LL) < v11[0] || (unsigned __int64)(v11[0] + 8LL) > W32UserProbeAddress )
    v5 = (__int64 *)W32UserProbeAddress;
  v6 = *v5;
  v11[1] = *v5;
  v7 = *(__int128 **)(v11[0] + 16LL);
  if ( v7 + 9 < v7 || (unsigned __int64)(v7 + 9) > W32UserProbeAddress )
    v7 = (__int128 *)W32UserProbeAddress;
  v12 = *v7;
  v13 = v7[1];
  v14 = v7[2];
  v15 = v7[3];
  v16 = v7[4];
  v17 = v7[5];
  v18 = v7[6];
  v19 = v7[7];
  v20 = v7[8];
  *a2 = v12;
  a2[1] = v13;
  a2[2] = v14;
  a2[3] = v15;
  a2[4] = v16;
  a2[5] = v17;
  a2[6] = v18;
  a2[7] = v19;
  a2[8] = v20;
  return (unsigned int)v6;
}
