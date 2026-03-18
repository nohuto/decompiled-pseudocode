/*
 * XREFs of SfnDWORD @ 0x1C005CF50
 * Callers:
 *     xxxDispatchMessage @ 0x1C0054E2C (xxxDispatchMessage.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0059200 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x1C005C740 (xxxHkCallHook.c)
 *     xxxReceiveMessage @ 0x1C005D110 (xxxReceiveMessage.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxDefWindowProc @ 0x1C006F890 (xxxDefWindowProc.c)
 *     xxxSendMessageCallback @ 0x1C0078D9C (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01045A0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C013F684 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 * Callees:
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnDWORD(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int128 v16; // [rsp+40h] [rbp-68h]
  _QWORD v17[3]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v18[8]; // [rsp+68h] [rbp-40h] BYREF
  int v19; // [rsp+B8h] [rbp+10h] BYREF

  if ( a1 )
  {
    v6 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
    v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
    v6 = 0LL;
  }
  v18[0] = v6;
  v18[1] = a2;
  v18[2] = a3;
  v18[3] = a4;
  v18[4] = a5;
  v18[5] = a6;
  v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v17;
  v17[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  v16 = *(_OWORD *)(v8 + 64);
  a5 = *(_QWORD *)(v8 + 80);
  *(_QWORD *)(v8 + 72) = v6;
  v9 = 0LL;
  if ( a1 )
    v9 = *a1;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v9;
  if ( a1 )
    v7 = a1[33];
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v7;
  UserSessionSwitchLeaveCrit(a1, v9);
  EtwTraceBeginCallback(2LL);
  v10 = KeUserModeCallback(2LL, v18, 48LL, &a6, &v19);
  EtwTraceEndCallback(2LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v12, v11);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v13 + 64) = v16;
  *(_QWORD *)(v13 + 80) = a5;
  if ( v10 < 0 || v19 != 24 )
    return 0LL;
  v14 = a6;
  if ( a6 + 8 < a6 || a6 + 8 > W32UserProbeAddress )
    v14 = W32UserProbeAddress;
  return *(_QWORD *)v14;
}
