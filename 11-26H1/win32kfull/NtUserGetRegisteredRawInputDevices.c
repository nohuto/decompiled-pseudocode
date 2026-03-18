/*
 * XREFs of NtUserGetRegisteredRawInputDevices @ 0x140221010
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _GetRegisteredRawInputDevices @ 0x14022109C (_GetRegisteredRawInputDevices.c)
 */

__int64 __fastcall NtUserGetRegisteredRawInputDevices(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  unsigned int RegisteredRawInputDevices; // ebx
  _BYTE v9[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  EnterSharedCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v9);
  if ( a3 == 16 )
  {
    RegisteredRawInputDevices = GetRegisteredRawInputDevices(a1, a2);
  }
  else
  {
    RegisteredRawInputDevices = -1;
    UserSetLastError(87);
  }
  if ( v9[0] )
  {
    v6 = v10;
    --*(_DWORD *)(v10 + 28);
  }
  UserSessionSwitchLeaveCrit(v6);
  return RegisteredRawInputDevices;
}
