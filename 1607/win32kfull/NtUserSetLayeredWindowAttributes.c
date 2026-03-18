/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x1C0061960
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000C524 (UserSetLastStatus.c)
 *     _SetLayeredWindowAttributes @ 0x1C0061F00 (_SetLayeredWindowAttributes.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rdi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  v7 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v7;
  if ( v7 )
  {
    if ( (a4 & 0xFFFFFFFC) != 0 || (unsigned int)IsWindowDesktopComposed(v7) && (*(_DWORD *)(v9 + 288) & 0x20) != 0 )
    {
      UserSetLastError(87LL);
    }
    else
    {
      v10 = SetLayeredWindowAttributes((struct tagWND *)v9, a2);
      if ( v10 < 0 )
        UserSetLastStatus(v10, 1);
      else
        v8 = 1;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  UserSessionSwitchLeaveCrit(v12, v11);
  return v8;
}
