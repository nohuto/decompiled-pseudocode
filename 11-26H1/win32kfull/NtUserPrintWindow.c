/*
 * XREFs of NtUserPrintWindow @ 0x1402B9110
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxPrintWindow @ 0x14011CB78 (xxxPrintWindow.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14011CF38 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserPrintWindow(__int64 a1, Gre::Base *a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // edi
  struct tagWND *v10; // rsi
  int v11; // edx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = 0;
  v10 = (struct tagWND *)v7;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    v11 = *(_WORD *)(v8 + 42) & 0x2FFF;
    if ( v11 != 669 && v11 != 671 )
    {
      Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
      if ( (a3 & 3) == a3 )
      {
        if ( !(unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline()
          || (unsigned __int8)Win32ProcessCapability::CheckAccess(*(_QWORD *)(v6 + 456), 2LL) )
        {
          v9 = xxxPrintWindow(v10, a2, a3);
        }
        else
        {
          v9 = 1;
        }
      }
      else
      {
        UserSetLastError(87);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
