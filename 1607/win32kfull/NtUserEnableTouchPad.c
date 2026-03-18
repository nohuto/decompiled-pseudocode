/*
 * XREFs of NtUserEnableTouchPad @ 0x1C0212250
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     EnablePTPDevices @ 0x1C01C90F4 (EnablePTPDevices.c)
 */

__int64 __fastcall NtUserEnableTouchPad(int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
  v2 = 0;
  v3 = *(_QWORD *)(gptiCurrent + 376LL);
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v3 + 824) <= 0x2FFF )
  {
    EtwTraceUIPISystemError(v3, 0LL, 13LL);
    UserSetLastError(5LL);
  }
  else
  {
    LOBYTE(v2) = a1 != 0;
    v2 = EnablePTPDevices(v2);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
  UserSessionSwitchLeaveCrit(v5, v4);
  return (int)v2;
}
