/*
 * XREFs of NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C0212ED0
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C009AC70 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     RotationRequired @ 0x1C01CA188 (RotationRequired.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferencesByProcessId(int a1, _DWORD *a2, BOOL *a3)
{
  __int64 v5; // rbx
  int v6; // eax
  int v7; // ebx
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
      *a2 = *(_DWORD *)(v11 + 864);
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (BOOL *)W32UserProbeAddress;
      *a3 = v12;
      v7 = 1;
    }
    else
    {
      UserSetLastError(5LL);
    }
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v7;
}
