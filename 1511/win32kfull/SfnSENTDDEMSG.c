/*
 * XREFs of SfnSENTDDEMSG @ 0x1C0212BA0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01EC0CC (xxxDDETrackGetMessageHook.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnSENTDDEMSG(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v11; // rsi
  __int64 v12; // rdx
  signed int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 result; // rax
  unsigned __int64 v23; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v24[7]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  int v26; // [rsp+78h] [rbp-90h]
  __int64 v27; // [rsp+80h] [rbp-88h]
  __int64 v28; // [rsp+88h] [rbp-80h]
  __int128 v29; // [rsp+A0h] [rbp-68h]
  _QWORD v30[10]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v31; // [rsp+110h] [rbp+8h]
  int v32; // [rsp+118h] [rbp+10h] BYREF

  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  memset(v24, 0, sizeof(v24));
  v13 = a2 & 0xBFFFFFFF;
  v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v30;
  v30[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v29 = *(_OWORD *)(v14 + 64);
  v31 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v11;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v15;
  if ( a1 )
    v16 = a1[33];
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v16;
  if ( v13 >= 0 )
  {
    v24[0] = v11;
    LODWORD(v24[1]) = v13;
    v24[2] = a3;
    v24[3] = a4;
  }
  else
  {
    if ( a1 )
      v25 = *a1;
    else
      v25 = 0LL;
    v26 = v13 & 0x7FFFFFFF;
    v27 = a3;
    v28 = a4;
    xxxDDETrackGetMessageHook((__int64)&v25);
    v12 = gSharedInfo[0];
    v24[0] = *(_QWORD *)(gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v25)
           - *(_QWORD *)(gptiCurrent + 424LL);
    LODWORD(v24[1]) = v26;
    v24[2] = v27;
    v24[3] = v28;
  }
  v24[4] = a5;
  v24[5] = a6;
  LODWORD(v24[6]) = (a7 & 1) == 0;
  UserSessionSwitchLeaveCrit((a7 & 1) == 0, v12);
  EtwTraceBeginCallback(38LL);
  v17 = KeUserModeCallback(38LL, v24, 56LL, &v23, &v32);
  EtwTraceEndCallback(38LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v20 + 64) = v29;
  *(_QWORD *)(v20 + 80) = v31;
  if ( v17 < 0 || v32 != 24 )
    return 0LL;
  v21 = (__int64 *)v23;
  if ( v23 + 8 < v23 || v23 + 8 > W32UserProbeAddress )
    v21 = (__int64 *)W32UserProbeAddress;
  result = *v21;
  v30[3] = *v21;
  return result;
}
