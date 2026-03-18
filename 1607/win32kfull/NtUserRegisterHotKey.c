/*
 * XREFs of NtUserRegisterHotKey @ 0x1C0097D10
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _RegisterHotKey @ 0x1C0097DFC (_RegisterHotKey.c)
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserRegisterHotKey(__int64 a1, __int64 a2, int a3, int a4)
{
  int v7; // ebx
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-28h]
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  v7 = 0;
  if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 376LL)) )
    goto LABEL_12;
  if ( (a3 & 0xFFFF97F0) != 0 )
  {
    v12 = 1004LL;
    goto LABEL_13;
  }
  if ( (a3 & 0x800) == 0 )
    goto LABEL_4;
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v12 = 5LL;
    goto LABEL_13;
  }
  if ( !a4 )
  {
    v12 = 87LL;
LABEL_13:
    UserSetLastError(v12);
    goto LABEL_7;
  }
LABEL_4:
  if ( !a1 )
  {
    v8 = 0LL;
    goto LABEL_6;
  }
  v8 = (struct tagWND *)ValidateHwnd(a1);
  if ( v8 )
  {
LABEL_6:
    LODWORD(BugCheckParameter2) = a4;
    v7 = RegisterHotKey(v8, BugCheckParameter2);
  }
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  UserSessionSwitchLeaveCrit(v10, v9);
  return v7;
}
