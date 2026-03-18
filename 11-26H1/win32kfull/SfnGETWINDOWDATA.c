/*
 * XREFs of SfnGETWINDOWDATA @ 0x1402D5160
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall SfnGETWINDOWDATA(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ebx
  __int64 v15; // [rsp+40h] [rbp-48h] BYREF
  int v16; // [rsp+48h] [rbp-40h]
  int v17; // [rsp+4Ch] [rbp-3Ch]
  __int64 v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+58h] [rbp-30h]
  __int64 v20; // [rsp+60h] [rbp-28h]
  __int64 v21; // [rsp+68h] [rbp-20h]
  void *Src; // [rsp+90h] [rbp+8h] BYREF
  int v23; // [rsp+98h] [rbp+10h] BYREF

  Src = 0LL;
  v23 = 0;
  PtiCurrent((__int64)a1);
  v17 = 0;
  if ( a1 )
    v11 = *a1;
  else
    v11 = 0LL;
  v15 = v11;
  v16 = a2;
  v18 = a3;
  v19 = a4;
  v20 = a5;
  if ( (*(_BYTE *)(a1[5] + 18) & 8) != 0 )
    v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904) + 424LL);
  else
    v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904) + 616LL);
  v21 = v12;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  EtwTraceBeginCallback(125LL);
  v13 = KeUserModeCallback(125LL, &v15, 48LL, &Src, &v23);
  EtwTraceEndCallback(125LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  if ( v13 < 0 || v23 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  return a5;
}
