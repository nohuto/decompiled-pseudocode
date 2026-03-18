/*
 * XREFs of ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1401C7EE4
 * Callers:
 *     xxxClientShutdown @ 0x1401C7E58 (xxxClientShutdown.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDq @ 0x1401C8098 (WPP_RECORDER_AND_TRACE_SF_DDDq.c)
 *     DestroyWindowsTimers @ 0x1401C81D4 (DestroyWindowsTimers.c)
 */

__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, int a2, __int16 a3)
{
  BOOL v6; // r12d
  char v7; // bl
  __int64 *i; // r14
  __int64 v9; // rdx
  struct tagWND *v10; // rdi
  bool v11; // si
  bool v12; // bp
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  int v17; // [rsp+20h] [rbp-78h]
  int v18; // [rsp+28h] [rbp-70h]
  int v19; // [rsp+30h] [rbp-68h]
  int v20; // [rsp+38h] [rbp-60h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-38h] BYREF
  struct tagTHREADINFO *v22; // [rsp+A0h] [rbp+8h]

  v22 = PtiCurrent((__int64)a1);
  v6 = (a3 & 0x100) != 0 && (a3 & 8) != 0;
  v7 = a3 & 1;
  for ( i = (__int64 *)((char *)a1 + 32); ; ++i )
  {
    if ( *i == 1 )
      return 1LL;
    v10 = (struct tagWND *)HMValidateHandleNoSecure(*i, 1);
    if ( v10 )
      break;
LABEL_15:
    ;
  }
  v11 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_GLOBAL_Control, v9);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v11;
    WPP_RECORDER_AND_TRACE_SF_DDDq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69152),
      v17,
      v18,
      v19,
      v20,
      a2,
      0,
      v7,
      (char)v10);
  }
  Win32HM_LockIntoThread<0>((__int64)v22, (__int64)v10, BugCheckParameter3);
  if ( a2 != 17 )
  {
    xxxSendMessage(v10, 0x16u);
    if ( v6 )
      DestroyWindowsTimers(v10);
    goto LABEL_14;
  }
  if ( xxxSendMessage(v10, 0x11u) )
  {
LABEL_14:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    goto LABEL_15;
  }
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  return 3LL;
}
