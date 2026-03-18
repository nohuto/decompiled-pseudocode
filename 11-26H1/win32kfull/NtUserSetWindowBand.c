/*
 * XREFs of NtUserSetWindowBand @ 0x14027A3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1401790C4 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401A2C28 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     IsPseudoHwnd @ 0x1401F8FCC (IsPseudoHwnd.c)
 *     Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline @ 0x1402AF2A4 (Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserSetWindowBand(__int64 a1, struct tagWND *a2, int a3)
{
  int v3; // esi
  int v7; // r15d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // r13
  int v12; // edx
  char v13; // di
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  int v17; // ecx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-20h] BYREF
  ULONG_PTR v20[2]; // [rsp+30h] [rbp-10h] BYREF
  struct tagWND *v21; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v21 = 0LL;
  v7 = 1;
  v8 = EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v11 = (struct tagWND *)v9;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 40);
    v12 = *(_WORD *)(v10 + 42) & 0x2FFF;
    if ( v12 != 669 && v12 != 671 )
    {
      Win32HM_LockIntoThread<0>(v8, v9, BugCheckParameter3);
      v13 = 1;
      if ( (unsigned int)Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( (unsigned int)IsPseudoHwnd((unsigned __int64)a2) )
        {
          v13 = 0;
        }
        else
        {
          a2 = (struct tagWND *)ValidateHwndStrict(v15);
          if ( !a2 )
            goto LABEL_26;
        }
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, &v21) )
        {
LABEL_26:
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
          goto LABEL_27;
        }
        a2 = v21;
      }
      UserSessionState = W32GetUserSessionState(v15, v14);
      if ( GetProp((__int64)v11, *(unsigned __int16 *)(UserSessionState + 41394), 1u) )
      {
        v17 = 5;
LABEL_13:
        UserSetLastError(v17);
        goto LABEL_26;
      }
      if ( (unsigned __int64)a2 >= 0xFFFFFFFFFFFFFFFEuLL && a3 != 1 )
      {
        v17 = 87;
        goto LABEL_13;
      }
      v20[1] = 0LL;
      v20[0] = -1LL;
      if ( (unsigned int)Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !v13 )
          goto LABEL_22;
      }
      else if ( (unsigned __int64)a2 - 2 > 0xFFFFFFFFFFFFFFFBuLL )
      {
LABEL_22:
        if ( (unsigned int)Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline()
          && (unsigned int)IsImmersiveBroker(*(_QWORD *)(v8 + 456)) )
        {
          v7 = 3;
        }
        v3 = xxxSetWindowBand(v11, (__int64)a2, a3, v7);
        Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v20);
        goto LABEL_26;
      }
      Win32HM_LockIntoThread<1>(v8, (__int64)a2, (__int64 *)v20);
      goto LABEL_22;
    }
  }
LABEL_27:
  UserSessionSwitchLeaveCrit(v10);
  return v3;
}
