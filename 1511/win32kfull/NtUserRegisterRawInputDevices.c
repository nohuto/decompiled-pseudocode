/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x1C008A0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     _RegisterRawInputDevices @ 0x1C00893B4 (_RegisterRawInputDevices.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtUserRegisterRawInputDevices(char *Src, unsigned int a2, int a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  void *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[4]; // [rsp+50h] [rbp-38h] BYREF
  char v14; // [rsp+A8h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( !Src || !a2 || a3 != 16 )
    goto LABEL_16;
  v6 = 16LL * a2;
  if ( v6 )
  {
    if ( ((unsigned __int8)Src & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v6] > W32UserProbeAddress || &Src[v6] < Src )
      *W32UserProbeAddress = 0;
  }
  if ( v6 <= 0xFFFFFFFF )
  {
    v7 = Win32AllocPoolWithQuota((unsigned int)v6, 1769108309LL);
    v8 = (void *)v7;
    if ( !v7 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v7, v13, (__int64)Win32FreePool);
    if ( (unsigned int)v6 >= v6 )
      LODWORD(v6) = 16 * a2;
    memmove(v8, Src, (unsigned int)v6);
    v9 = (unsigned int)RegisterRawInputDevices((__int64)v8, a2, 0);
    EtwTraceAuditApiRegisterRawInputDevices(v9);
    if ( v8 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v13);
  }
  else
  {
LABEL_16:
    LODWORD(v9) = 0;
    UserSetLastError(87);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v11, v10);
  return (unsigned int)v9;
}
