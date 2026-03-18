/*
 * XREFs of NtUserSetClassLongPtr @ 0x140151C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxSetClassLongPtr @ 0x140150DF0 (xxxSetClassLongPtr.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rdi
  __int64 v10; // rbx
  __int128 *v12; // rbx
  unsigned __int64 ULong64FromUser; // rax
  ULONG64 v14; // rdx
  __int128 v15; // [rsp+50h] [rbp-88h]
  __int128 Src; // [rsp+60h] [rbp-78h] BYREF
  __int128 *v17; // [rsp+70h] [rbp-68h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v19; // [rsp+88h] [rbp-50h]
  __int128 v20; // [rsp+90h] [rbp-48h] BYREF
  __int128 *v21; // [rsp+A0h] [rbp-38h]
  __int128 v22; // [rsp+B0h] [rbp-28h] BYREF

  v22 = 0LL;
  Src = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( !v7 )
  {
    v10 = 0LL;
    goto LABEL_6;
  }
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v6, v7);
  if ( a2 == -26 )
  {
    if ( (a3 & 0x10000) != 0 )
    {
      UserSetLastError(13);
      v10 = 0LL;
      goto LABEL_5;
    }
  }
  else if ( a2 == -8 )
  {
    v19 = a3;
    v20 = 0LL;
    v21 = 0LL;
    RtlCopyFromUser(&v20, (void *)a3, 0x18uLL);
    Src = v20;
    v17 = v21;
    DWORD1(v15) = 0;
    v12 = v21;
    LODWORD(v15) = RtlReadULongFromUser(v21);
    ULong64FromUser = RtlReadULong64FromUser((char *)v12 + 8);
    *((_QWORD *)&v15 + 1) = ULong64FromUser;
    v22 = v15;
    if ( (ULong64FromUser & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (ULong64FromUser & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = ULong64FromUser + (unsigned __int16)v15 + 2LL;
      if ( v14 <= ULong64FromUser || v14 >= MmUserProbeAddress )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v15 > WORD1(v15) || (v15 & 1) != 0 )
      {
        if ( (v15 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2172LL);
        ExRaiseAccessViolation();
      }
    }
    v17 = &v22;
    v10 = xxxSetClassLongPtr(v9, -8, (__int64)&Src);
    v17 = 0LL;
    RtlCopyToUser((void *)a3, &Src, 0x18uLL);
    goto LABEL_5;
  }
  v10 = xxxSetClassLongPtr(v9, a2, a3);
LABEL_5:
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
LABEL_6:
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
