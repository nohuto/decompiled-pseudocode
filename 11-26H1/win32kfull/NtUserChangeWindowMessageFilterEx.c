/*
 * XREFs of NtUserChangeWindowMessageFilterEx @ 0x14012A3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     _ChangeWindowMessageFilterEx @ 0x14012BF48 (_ChangeWindowMessageFilterEx.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserChangeWindowMessageFilterEx(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // rdi
  __int64 v12; // rax
  int v13; // ebx
  int v15; // ecx
  __int64 Src; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[3]; // [rsp+28h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  Src = 0LL;
  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  v11 = (struct tagWND *)v9;
  if ( !v9 )
  {
    v13 = 0;
    goto LABEL_14;
  }
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v8, v9);
  if ( *(_QWORD *)(v8 + 456) != *(_QWORD *)(*((_QWORD *)v11 + 2) + 456LL) )
  {
    v15 = 5;
    goto LABEL_16;
  }
  v12 = *((_QWORD *)v11 + 5);
  if ( *(char *)(v12 + 20) < 0 || *(char *)(v12 + 19) < 0 )
  {
    v15 = 1400;
LABEL_16:
    v13 = 0;
    UserSetLastError(v15);
    goto LABEL_13;
  }
  if ( a3 > 2 )
    goto LABEL_17;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_8;
    goto LABEL_17;
  }
  if ( !a2 )
  {
LABEL_17:
    v15 = 87;
    goto LABEL_16;
  }
LABEL_8:
  if ( !a4 )
  {
    LODWORD(Src) = 8;
LABEL_10:
    v13 = ChangeWindowMessageFilterEx(v11, a2);
    if ( v13 && a4 )
      RtlCopyToUser(a4, &Src, 8uLL);
    goto LABEL_13;
  }
  v17[0] = 0LL;
  RtlCopyFromUser(v17, a4, 8uLL);
  Src = v17[0];
  if ( LODWORD(v17[0]) == 8 )
    goto LABEL_10;
  UserSetLastError(87);
  v13 = 0;
LABEL_13:
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
LABEL_14:
  UserSessionSwitchLeaveCrit(v10);
  return v13;
}
