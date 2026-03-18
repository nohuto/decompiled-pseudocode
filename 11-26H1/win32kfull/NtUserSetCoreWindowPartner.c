/*
 * XREFs of NtUserSetCoreWindowPartner @ 0x1401FD7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401FD9A8 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1402453DC (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1402E16B4 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

unsigned __int64 __fastcall NtUserSetCoreWindowPartner(HWND a1, int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  struct tagTHREADINFO *v9; // r14
  int v10; // ecx
  struct tagWND *v11; // rsi
  struct tagTHREADINFO *v12; // rcx
  struct tagWND *v13; // rax
  struct tagWND *v14; // rbp
  int v15; // ebx
  unsigned __int64 v16; // rbx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR v19[5]; // [rsp+30h] [rbp-28h] BYREF
  struct tagWND *v20; // [rsp+78h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  if ( (a2 & 0xFFFFFFFD) == 0 )
  {
    v8 = 0LL;
    v20 = 0LL;
    v9 = PtiCurrent(v6);
    if ( (unsigned int)ValidateHWNDND(a1, &v20) )
    {
      v11 = v20;
      v12 = (struct tagTHREADINFO *)*((_QWORD *)v20 + 2);
      if ( v9 != v12 || !(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v12 + 57)) )
      {
        v10 = 5;
        goto LABEL_5;
      }
      v13 = (struct tagWND *)HMValidateHandleNoSecure(a3, 1);
      v14 = v13;
      if ( v13 )
      {
        if ( !a2 )
        {
          v16 = (unsigned int)~CoreWindowProp::RemoveComponent(v13, v11);
          goto LABEL_14;
        }
        if ( a2 == 2 )
        {
          Win32HM_LockIntoThread<0>((__int64)v9, (__int64)v11, v19);
          Win32HM_LockIntoThread<0>((__int64)v9, (__int64)v14, BugCheckParameter3);
          v15 = CoreWindowProp::xxxSetHost(v11, v14);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v19);
          v16 = (unsigned int)~v15;
LABEL_14:
          v8 = v16 >> 31;
          goto LABEL_15;
        }
      }
    }
    v10 = 87;
LABEL_5:
    UserSetLastError(v10);
    goto LABEL_15;
  }
  UserSetLastError(87);
  v8 = 0LL;
LABEL_15:
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
