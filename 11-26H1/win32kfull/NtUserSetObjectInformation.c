/*
 * XREFs of NtUserSetObjectInformation @ 0x1402BD320
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?ProbeAlignment@?$UserModePointer@X@@QEBAX_KK@Z @ 0x140297004 (-ProbeAlignment@-$UserModePointer@X@@QEBAX_KK@Z.c)
 *     _SetUserObjectInformation @ 0x14029A650 (_SetUserObjectInformation.c)
 */

__int64 __fastcall NtUserSetObjectInformation(HANDLE Handle, int a2, void *a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v12; // rcx
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v15[24]; // [rsp+48h] [rbp-20h] BYREF
  void *v16; // [rsp+80h] [rbp+18h] BYREF

  v16 = a3;
  v4 = a4;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
  if ( a2 == 7 )
  {
    v10 = 0;
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, v8);
    UserModePointer<void>::ProbeAlignment(&v16, v4, CurrentProcessWow64Process != 0 ? 1 : 4);
    Object = 0LL;
    if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) >= 0 )
    {
      if ( (unsigned int)SetHandleFlag(Handle, 2LL) )
      {
        v10 = SetUserObjectInformation(Handle, a2, a3, v4);
        SetHandleFlag(Handle, 2LL);
      }
      else
      {
        v10 = 0;
        UserSetLastError(8);
      }
    }
    else
    {
      v10 = 0;
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15);
  UserSessionSwitchLeaveCrit(v12);
  return v10;
}
