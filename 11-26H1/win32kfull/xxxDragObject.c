/*
 * XREFs of xxxDragObject @ 0x1402F2554
 * Callers:
 *     NtUserDragObject @ 0x1402B11A0 (NtUserDragObject.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400368B8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x14005E9E0 (-zzzShowCursor@@YAH_N@Z.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x14011E2E4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSleepThread @ 0x14014A7D0 (xxxSleepThread.c)
 *     xxxReleaseCapture @ 0x14014AA5C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x14014AB08 (xxxSetCapture.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402F23D0 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 */

__int64 __fastcall xxxDragObject(struct tagWND *a1, struct tagWND *a2, int a3, __int64 a4, struct tagCURSOR *a5)
{
  unsigned int v5; // ebx
  struct tagCURSOR *v6; // rdi
  struct tagTHREADINFO *v10; // r13
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  struct tagTHREADINFO *v14; // rcx
  __int64 v15; // rax
  struct tagCURSOR *v16; // r12
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagWND *i; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // r14d
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct tagWND *v31; // rdx
  __int64 v32; // rcx
  int v33; // r14d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  struct tagCURSOR *DropObject; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct tagWND *v41; // r12
  unsigned int v42; // edx
  __int64 UserSessionState; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  struct tagWND *v51; // rdi
  unsigned int v52; // edi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // [rsp+28h] [rbp-A1h]
  int v61; // [rsp+38h] [rbp-91h]
  struct tagWND *v62; // [rsp+40h] [rbp-89h]
  struct tagCURSOR *v63; // [rsp+48h] [rbp-81h]
  ULONG_PTR v64[2]; // [rsp+50h] [rbp-79h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-69h] BYREF
  __int128 v66; // [rsp+70h] [rbp-59h] BYREF
  __int128 v67; // [rsp+80h] [rbp-49h]
  __int128 v68; // [rsp+90h] [rbp-39h]
  _QWORD v69[3]; // [rsp+A0h] [rbp-29h] BYREF
  ULONG_PTR v70[2]; // [rsp+B8h] [rbp-11h] BYREF
  _OWORD v71[3]; // [rsp+C8h] [rbp-1h] BYREF

  v61 = 1;
  v5 = 0;
  v66 = 0LL;
  LODWORD(BugCheckParameter3[0]) = 0;
  v6 = 0LL;
  v67 = 0LL;
  v62 = 0LL;
  v68 = 0LL;
  memset(v71, 0, sizeof(v71));
  v10 = PtiCurrent((__int64)a1);
  result = Win32AllocPoolWithQuotaZInit(96LL, 1935962965LL);
  v13 = result;
  if ( !result )
    return result;
  v14 = PtiCurrent(v12);
  v69[0] = *((_QWORD *)v14 + 47);
  *((_QWORD *)v14 + 47) = v69;
  v69[2] = Win32FreePool;
  v15 = 0LL;
  v69[1] = v13;
  if ( a2 )
    v15 = *(_QWORD *)a2;
  *(_QWORD *)v13 = v15;
  *(_DWORD *)(v13 + 16) = a3;
  *(_QWORD *)(v13 + 24) = a4;
  if ( a5 )
    v16 = zzzSetCursor(a5);
  else
    v16 = *(struct tagCURSOR **)(*((_QWORD *)v10 + 58) + 424LL);
  v63 = v16;
  v17 = PtiCurrent((__int64)v14);
  Win32HM_LockIntoThread<1>((__int64)v17, (__int64)v16, (__int64 *)v70);
  if ( a2 )
  {
    for ( i = a2; (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0xC0) == 0x40; i = (struct tagWND *)*((_QWORD *)i + 13) )
      ;
    Win32HM_LockIntoThread<1>((__int64)v10, (__int64)i, (__int64 *)v64);
    xxxInternalUpdateWindow(i, 1u);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v64);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v19, v18) + 18928) )
  {
    v24 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 18928);
    if ( *(_QWORD *)(v24 + 120) )
    {
      v26 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 18928);
      if ( v26 == *((_QWORD *)v10 + 58) )
      {
        v28 = 33;
        if ( *(struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v26, v25) + 18928) + 120LL) + 16LL) != v10 )
          v28 = 49;
        v30 = *(_QWORD *)(W32GetUserSessionState(49LL, v27) + 18928);
        if ( *(struct tagTHREADINFO **)(*(_QWORD *)(v30 + 120) + 16LL) == v10 )
          v31 = a2;
        else
          v31 = *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v30, v29) + 18928) + 120LL);
        xxxWindowEvent(0x80000004, v31, 0, 3, v28);
      }
    }
  }
  xxxWindowEvent(0xEu, a2, 0, 0, 0);
  xxxSetCapture(a2);
  LOBYTE(v32) = 1;
  zzzShowCursor(v32);
  Win32HM_LockIntoThread<1>((__int64)v10, 0LL, (__int64 *)v64);
  v33 = 1;
  while ( v33 && *(struct tagWND **)(*((_QWORD *)v10 + 58) + 112LL) == a2 )
  {
    while ( 1 )
    {
      LODWORD(v60) = 1;
      if ( (unsigned int)xxxInternalGetMessage((__int64)&v66, 0, 512, 526, v60, 0) )
        break;
      LODWORD(v60) = 1;
      if ( (unsigned int)xxxInternalGetMessage((__int64)&v66, 0, 35, 35, v60, 0) )
        break;
      LODWORD(v60) = 1;
      if ( (unsigned int)xxxInternalGetMessage((__int64)&v66, 0, 256, 265, v60, 0) )
        break;
      if ( !(unsigned int)xxxSleepThread(7u, 0, 1, 0) )
      {
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v64);
        goto LABEL_64;
      }
    }
    do
      LODWORD(v60) = 1;
    while ( (unsigned int)xxxInternalGetMessage((__int64)v71, 0, 256, 265, v60, 0) );
    if ( *(struct tagWND **)(*((_QWORD *)v10 + 58) + 112LL) != a2 || DWORD2(v66) == 256 && (_QWORD)v67 == 27LL )
    {
      UserSessionState = W32GetUserSessionState(v35, v34);
      v6 = *(struct tagCURSOR **)(UserSessionState + 27432);
      if ( v6 )
        zzzSetCursor(*(struct tagCURSOR **)(UserSessionState + 27432));
      break;
    }
    v36 = *(_OWORD *)(v13 + 16);
    *(_OWORD *)(v13 + 48) = *(_OWORD *)v13;
    v37 = *(_OWORD *)(v13 + 32);
    *(_OWORD *)(v13 + 64) = v36;
    *(_OWORD *)(v13 + 80) = v37;
    *(_QWORD *)(v13 + 32) = *(_QWORD *)((char *)&v68 + 4);
    DropObject = xxxQueryDropObject(a1, (struct tagDROPSTRUCT *)v13);
    v6 = DropObject;
    if ( !DropObject )
    {
      v6 = *(struct tagCURSOR **)(W32GetUserSessionState(v40, v39) + 27432);
      *(_QWORD *)(v13 + 8) = 0LL;
      goto LABEL_36;
    }
    if ( DropObject == (struct tagCURSOR *)1 )
    {
      v6 = a5;
LABEL_36:
      if ( !v6 )
        goto LABEL_38;
    }
    zzzSetCursor(v6);
LABEL_38:
    if ( a2 )
    {
      W32GetUserSessionState(v40, v39);
      xxxSendMessage(a2, 0x22Du);
    }
    v41 = v62;
    if ( v62 == (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v13 + 8), 1) )
    {
      if ( !v62 )
        goto LABEL_48;
      v42 = 559;
      goto LABEL_47;
    }
    if ( v62 )
      xxxSendMessage(v62, 0x22Eu);
    v62 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v13 + 8), 1);
    v41 = v62;
    Win32HM_ExchangeThreadLock<1>((__int64)v62, (__int64)v64);
    if ( v62 )
    {
      v42 = 558;
LABEL_47:
      xxxSendMessage(v41, v42);
    }
LABEL_48:
    if ( DWORD2(v66) != 162 )
    {
      v33 = v61;
      if ( DWORD2(v66) != 514 )
        continue;
    }
    v33 = 0;
    v61 = 0;
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v64);
  if ( v33 )
    v6 = *(struct tagCURSOR **)(W32GetUserSessionState(v45, v44) + 27432);
  xxxReleaseCapture(v45);
  zzzShowCursor(0LL);
  zzzSetCursor(v63);
  Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v70);
  if ( v6 == *(struct tagCURSOR **)(W32GetUserSessionState(v47, v46) + 27432)
    || (v50 = ValidateHwnd(*(_QWORD *)(v13 + 8)), (v51 = (struct tagWND *)v50) == 0LL) )
  {
    v52 = BugCheckParameter3[0];
  }
  else
  {
    Win32HM_LockIntoThread<0>((__int64)v10, v50, BugCheckParameter3);
    tagTHREADINFO::SetForegroundActivate(*((_QWORD *)v51 + 2), 4LL);
    v52 = xxxSendMessage(v51, 0x22Au);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v49, v48) + 18928) )
  {
    v56 = *(_QWORD *)(W32GetUserSessionState(v54, v53) + 18928);
    if ( *(_QWORD *)(v56 + 120) )
    {
      v58 = *(_QWORD *)(W32GetUserSessionState(v56, v55) + 18928);
      if ( v58 == *((_QWORD *)v10 + 58) )
      {
        v59 = W32GetUserSessionState(v58, v57);
        xxxWindowEvent(0x80000005, *(struct tagWND **)(*(_QWORD *)(v59 + 18928) + 120LL), 0, 4, 33);
      }
    }
  }
  xxxWindowEvent(0xFu, a2, 0, 0, 0);
  v5 = v52;
LABEL_64:
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v70);
  PopAndFreeW32ThreadLock((__int64)v69);
  return v5;
}
