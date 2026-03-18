/*
 * XREFs of NtUserGetRegisteredRawInputDevices @ 0x1C021C020
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetRegisteredRawInputDevices @ 0x1C01D3DAC (_GetRegisteredRawInputDevices.c)
 */

__int64 __fastcall NtUserGetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2, int a3)
{
  unsigned int RegisteredRawInputDevices; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v10; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  if ( a3 == 16 )
  {
    RegisteredRawInputDevices = GetRegisteredRawInputDevices(a1, a2);
  }
  else
  {
    RegisteredRawInputDevices = -1;
    UserSetLastError(87);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  UserSessionSwitchLeaveCrit(v8, v7);
  return RegisteredRawInputDevices;
}
