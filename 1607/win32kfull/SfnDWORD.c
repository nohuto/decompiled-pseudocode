/*
 * XREFs of SfnDWORD @ 0x1C0084FB0
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     xxxDefWindowProc @ 0x1C007CE70 (xxxDefWindowProc.c)
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 *     xxxHkCallHook @ 0x1C0084730 (xxxHkCallHook.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00851A0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxSendMessageCallback @ 0x1C00AA6E0 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0100E30 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C0146D14 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall SfnDWORD(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 result; // rax
  _QWORD v16[7]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v17; // [rsp+78h] [rbp-60h]
  __int128 v18; // [rsp+80h] [rbp-58h]
  __int64 v19; // [rsp+90h] [rbp-48h]
  _QWORD v20[5]; // [rsp+B0h] [rbp-28h] BYREF
  int v21; // [rsp+E8h] [rbp+10h] BYREF

  v17 = 0LL;
  if ( a1 )
    v6 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v6 = 0LL;
  v16[0] = v6;
  v16[1] = a2;
  v16[2] = a3;
  v16[3] = a4;
  v16[4] = a5;
  v16[5] = a6;
  v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v20;
  v20[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v7 = *(_QWORD *)(gptiCurrent + 432LL);
  v18 = *(_OWORD *)(v7 + 64);
  v19 = *(_QWORD *)(v7 + 80);
  *(_QWORD *)(v7 + 72) = v6;
  if ( a1 )
    v8 = *a1;
  else
    v8 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v8;
  if ( a1 )
    v9 = a1[33];
  else
    v9 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v9;
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation);
  EtwTraceBeginCallback(2LL);
  v10 = KeUserModeCallback(2LL, v16, 48LL, &a5, &v21);
  EtwTraceEndCallback(2LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v12, v11);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v13 + 64) = v18;
  *(_QWORD *)(v13 + 80) = v19;
  if ( v10 < 0 || v21 != 24 )
    return 0LL;
  v14 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v14 = (__int64 *)W32UserProbeAddress;
  result = *v14;
  v17 = result;
  return result;
}
