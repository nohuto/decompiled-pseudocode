/*
 * XREFs of SfnINTERCEPTEDWINDOWACTION @ 0x1402D6D90
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall SfnINTERCEPTEDWINDOWACTION(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
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
  int v19; // [rsp+30h] [rbp-138h] BYREF
  _QWORD v20[5]; // [rsp+38h] [rbp-130h] BYREF
  void *Src; // [rsp+60h] [rbp-108h] BYREF
  __int64 v22; // [rsp+68h] [rbp-100h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v24; // [rsp+90h] [rbp-D8h]
  __int64 v25; // [rsp+A0h] [rbp-C8h] BYREF
  int v26; // [rsp+A8h] [rbp-C0h]
  __int64 v27; // [rsp+B0h] [rbp-B8h]
  __int128 v28; // [rsp+B8h] [rbp-B0h]
  __int128 v29; // [rsp+C8h] [rbp-A0h]
  __int128 v30; // [rsp+D8h] [rbp-90h]
  __int128 v31; // [rsp+E8h] [rbp-80h]
  __int128 v32; // [rsp+F8h] [rbp-70h]
  __int128 v33; // [rsp+108h] [rbp-60h]
  __int64 v34; // [rsp+118h] [rbp-50h]
  __int64 v35; // [rsp+120h] [rbp-48h]

  Src = 0LL;
  v19 = 0;
  v10 = PtiCurrent((__int64)a1);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 63);
  else
    v12 = 0LL;
  memset_0(&v25, 0, 0x88uLL);
  v25 = v12;
  v26 = a2 & 0x1FFFF;
  v27 = a3;
  *((_DWORD *)a4 + 7) = 0;
  *((_DWORD *)a4 + 23) = 0;
  v28 = *a4;
  v29 = a4[1];
  v30 = a4[2];
  v31 = a4[3];
  v32 = a4[4];
  v33 = a4[5];
  v34 = a5;
  v35 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v13 = *((_QWORD *)v11 + 64);
  v24 = *(_OWORD *)(v13 + 64);
  v22 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 72LL) = v12;
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 64LL) = v14;
  if ( a1 )
    v15 = *(_QWORD *)(a1[5] + 224);
  else
    v15 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 80LL) = v15;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v20);
  EtwTraceBeginCallback(131LL);
  v16 = KeUserModeCallback(131LL, &v25, 136LL, &Src, &v19);
  EtwTraceEndCallback(131LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v20);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v17 = *((_QWORD *)v11 + 64);
  *(_OWORD *)(v17 + 64) = v24;
  *(_QWORD *)(v17 + 80) = v22;
  if ( v16 < 0 || v19 != 24 )
    return 0LL;
  v20[0] = 0LL;
  RtlCopyFromUser(v20, Src, 8uLL);
  result = v20[0];
  BugCheckParameter3[2] = v20[0];
  return result;
}
