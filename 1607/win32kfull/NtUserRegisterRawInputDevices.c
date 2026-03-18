/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x1C00E1FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _RegisterRawInputDevices @ 0x1C00E1818 (_RegisterRawInputDevices.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtUserRegisterRawInputDevices(char *Src, unsigned int a2, int a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r9
  void *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[4]; // [rsp+50h] [rbp-38h] BYREF
  char v18; // [rsp+A8h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v18);
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
    v9 = (void *)v7;
    if ( !v7 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v7, v17, (__int64)Win32FreePool, v8);
    if ( (unsigned int)v6 >= v6 )
      LODWORD(v6) = 16 * a2;
    memmove(v9, Src, (unsigned int)v6);
    v10 = (unsigned int)RegisterRawInputDevices((__int64)v9, a2, 0);
    EtwTraceAuditApiRegisterRawInputDevices(v10);
    if ( v9 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v17, v11, v12, v13);
  }
  else
  {
LABEL_16:
    LODWORD(v10) = 0;
    UserSetLastError(87LL);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v18);
  UserSessionSwitchLeaveCrit(v15, v14);
  return (int)v10;
}
