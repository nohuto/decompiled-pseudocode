/*
 * XREFs of NtUserEnableTouchPad @ 0x1C02195D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     EnablePTPDevices @ 0x1C01D0D58 (EnablePTPDevices.c)
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
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v3 + 832) <= 0x2FFF )
  {
    EtwTraceUIPISystemError(v3, 0LL, 13LL);
    UserSetLastError(5);
  }
  else
  {
    LOBYTE(v2) = a1 != 0;
    v2 = EnablePTPDevices(v2);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}
