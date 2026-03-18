/*
 * XREFs of NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C021A100
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C00734FC (LockProcessByClientId.c)
 *     RotationRequired @ 0x1C01D26CC (RotationRequired.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferencesByProcessId(int a1, _DWORD *a2, BOOL *a3)
{
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rdi
  BOOL v12; // r8d
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v5 = a1;
  EnterSharedCrit(0LL, 1LL);
  v6 = LockProcessByClientId(v5, &Object);
  v7 = 0;
  if ( v6 >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    v11 = ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      v12 = RotationRequired(ProcessWin32Process, 0LL);
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (_DWORD *)W32UserProbeAddress;
      *a2 = *(_DWORD *)(v11 + 872);
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (BOOL *)W32UserProbeAddress;
      *a3 = v12;
      v7 = 1;
    }
    else
    {
      UserSetLastError(5);
    }
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v7;
}
