/*
 * XREFs of NtUserUpdateWindowTrackingInfo @ 0x1402C0AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x1400110B0 (-IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ?GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ @ 0x14025F34C (-GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ.c)
 *     UpdateSizeTrackingInfo @ 0x1402C8430 (UpdateSizeTrackingInfo.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1402DC1D8 (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtUserUpdateWindowTrackingInfo(__int64 a1, __int64 a2, __int64 a3)
{
  const struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  const struct tagWND *v9; // r15
  int updated; // r14d
  int v11; // edx
  unsigned int v12; // edx
  ShellWindowManagement *v13; // rcx
  int v14; // ecx
  int v15; // eax
  __int64 ULong64FromUser; // rbx
  __int64 v17; // rax
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+30h] [rbp-38h]
  ULONG_PTR BugCheckParameter3[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v6 = (const struct tagTHREADINFO *)EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v9 = (const struct tagWND *)v7;
  updated = 0;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    v11 = *(_WORD *)(v8 + 42) & 0x2FFF;
    if ( v11 != 669 && v11 != 671 )
    {
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v6, v7);
      if ( IsShellParticipatesInSizing(v9, v12) )
      {
        if ( *((_QWORD *)v6 + 57) == *((_QWORD *)ShellWindowManagement::GetThread(v13) + 57)
          && (LOBYTE(v15) = IAMThreadAccessGranted(v6), v15) )
        {
          ULong64FromUser = RtlReadULong64FromUser(a2);
          v20 = ULong64FromUser;
          v19 = ULong64FromUser;
          v17 = RtlReadULong64FromUser(a3);
          v21 = v17;
          v23 = v17;
          if ( (int)ULong64FromUser > 0
            && SHIDWORD(v20) > 0
            && (int)v17 > 0
            && SHIDWORD(v17) > 0
            && (int)ULong64FromUser >= (int)v17
            && SHIDWORD(v20) >= SHIDWORD(v21) )
          {
            ((void (__fastcall *)(const struct tagWND *, __int64 *, __int64 *, __int64))ShellWindowManagement::TransformWindowTrackInfo)(
              v9,
              &v19,
              &v23,
              1LL);
            updated = UpdateSizeTrackingInfo(v9, &v19, &v23);
            goto LABEL_7;
          }
          v14 = 87;
        }
        else
        {
          v14 = 5;
        }
      }
      else
      {
        v14 = 5023;
      }
      UserSetLastError(v14);
LABEL_7:
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return updated;
}
