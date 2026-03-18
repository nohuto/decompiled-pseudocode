/*
 * XREFs of xxxIsDragging @ 0x14014A320
 * Callers:
 *     NtUserDragDetect @ 0x1402B1100 (NtUserDragDetect.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 * Callees:
 *     xxxSleepThread2 @ 0x140022590 (xxxSleepThread2.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 *     xxxSleepThread @ 0x14014A7D0 (xxxSleepThread.c)
 *     xxxReleaseCapture @ 0x14014AA5C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x14014AB08 (xxxSetCapture.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxIsDragging(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // rdx
  int v10; // r12d
  int v11; // r13d
  int v12; // eax
  int v13; // r15d
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // edi
  unsigned __int64 v18; // [rsp+28h] [rbp-39h]
  int v19; // [rsp+38h] [rbp-29h] BYREF
  int v20; // [rsp+3Ch] [rbp-25h]
  __int64 v21; // [rsp+40h] [rbp-21h]
  __int64 v22; // [rsp+48h] [rbp-19h]
  __int128 v23; // [rsp+50h] [rbp-11h] BYREF
  __int128 v24; // [rsp+60h] [rbp-1h]
  __int128 v25; // [rsp+70h] [rbp+Fh]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp+1Fh] BYREF

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v4 = PtiCurrent((__int64)a1);
  if ( (_GetKeyState(1LL) & 0x8000u) == 0LL )
    return 0LL;
  xxxSetCapture(a1);
  v21 = a2;
  v22 = a2;
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904);
  v8 = *(_DWORD *)(v7 + 2172);
  v10 = HIDWORD(a2) - v8;
  v11 = v8 + HIDWORD(a2);
  v12 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v9) + 19904) + 2168LL);
  v13 = a2 - v12;
  v14 = a2 + v12;
  v15 = 0;
  v20 = v14;
  v16 = 1;
  Win32HM_LockIntoThread<1>((__int64)v4, (__int64)a1, (__int64 *)BugCheckParameter3);
LABEL_3:
  if ( !v16 )
    goto LABEL_13;
  do
  {
    while ( 1 )
    {
      LODWORD(v18) = 1;
      if ( (unsigned int)xxxInternalGetMessage((__int64)&v23, 0, 512, 526, v18, 0)
        || (LODWORD(v18) = 1, (unsigned int)xxxInternalGetMessage((__int64)&v23, 0, 35, 35, v18, 0))
        || (LODWORD(v18) = 1, (unsigned int)xxxInternalGetMessage((__int64)&v23, 0, 256, 265, v18, 0))
        || *(struct tagWND **)(*((_QWORD *)v4 + 58) + 112LL) != a1 )
      {
        if ( *(struct tagWND **)(*((_QWORD *)v4 + 58) + 112LL) != a1 || DWORD2(v23) == 514 )
          goto LABEL_8;
        if ( DWORD2(v23) == 35 )
        {
          xxxCallHook(2LL, 0LL, 0LL, 5);
        }
        else if ( DWORD2(v23) == 256 )
        {
          if ( (_QWORD)v24 == 27LL )
            goto LABEL_8;
        }
        else if ( DWORD2(v23) == 512
               && (SDWORD1(v25) < v13 || SDWORD2(v25) >= v11 || SDWORD1(v25) >= v20 || SDWORD2(v25) < v10) )
        {
          v15 = 1;
LABEL_8:
          v16 = 0;
          goto LABEL_3;
        }
        goto LABEL_3;
      }
      if ( *((_QWORD *)v4 + 198) )
        break;
      if ( !(unsigned int)xxxSleepThread(7LL, 500LL, 1LL, 0LL) )
        goto LABEL_12;
    }
    v19 = 0;
  }
  while ( (unsigned int)xxxSleepThread2(7u, 0x1F4u, 1, 0, (ULONG)&v19) && !v19 );
LABEL_12:
  v15 = 1;
LABEL_13:
  if ( *(struct tagWND **)(*((_QWORD *)v4 + 58) + 112LL) == a1 )
    xxxReleaseCapture();
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  return v15;
}
