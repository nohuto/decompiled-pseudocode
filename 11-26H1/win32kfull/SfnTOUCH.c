/*
 * XREFs of SfnTOUCH @ 0x140226C20
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall SfnTOUCH(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx
  __int64 result; // rax
  _QWORD v19[5]; // [rsp+30h] [rbp-B8h] BYREF
  void *Src; // [rsp+58h] [rbp-90h] BYREF
  __int64 v21; // [rsp+60h] [rbp-88h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v23; // [rsp+78h] [rbp-70h] BYREF
  int v24; // [rsp+80h] [rbp-68h]
  int v25; // [rsp+84h] [rbp-64h]
  __int64 v26; // [rsp+88h] [rbp-60h]
  __int64 v27; // [rsp+90h] [rbp-58h]
  __int64 v28; // [rsp+98h] [rbp-50h]
  __int64 v29; // [rsp+A0h] [rbp-48h]
  __int64 v30; // [rsp+A8h] [rbp-40h]
  __int128 v31; // [rsp+B8h] [rbp-30h]
  int v32; // [rsp+F0h] [rbp+8h] BYREF

  Src = 0LL;
  v32 = 0;
  v10 = PtiCurrent((__int64)a1);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 63);
  else
    v12 = 0LL;
  v25 = 0;
  if ( !HMValidateHandleWithDescriptor(a4, 0x14u) )
    return 0LL;
  v23 = v12;
  v24 = a2;
  v26 = a3;
  v27 = a4;
  v28 = a5;
  v29 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v13 = *((_QWORD *)v11 + 64);
  v31 = *(_OWORD *)(v13 + 64);
  v21 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 72LL) = v12;
  v14 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 64LL) = v14;
  v15 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 80LL) = v15;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v19);
  EtwTraceBeginCallback(112LL);
  v16 = KeUserModeCallback(112LL, &v23, 48LL, &Src, &v32);
  EtwTraceEndCallback(112LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v19);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v17 = *((_QWORD *)v11 + 64);
  *(_OWORD *)(v17 + 64) = v31;
  *(_QWORD *)(v17 + 80) = v21;
  if ( v16 < 0 || v32 != 24 )
    return 0LL;
  v19[0] = 0LL;
  RtlCopyFromUser(v19, Src, 8uLL);
  result = v19[0];
  v30 = v19[0];
  return result;
}
