/*
 * XREFs of _AllowSetForegroundWindow @ 0x1C008B3E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C00734FC (LockProcessByClientId.c)
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
 *     CanForceForeground @ 0x1C008B4E0 (CanForceForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall AllowSetForegroundWindow(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 ProcessWin32Process; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v12; // ecx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  v3 = 0;
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    gppiLockSFW = 0LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    if ( !(unsigned int)CanForceForeground(CurrentProcessWin32Process) )
    {
      v12 = 5;
      goto LABEL_12;
    }
  }
  if ( (_DWORD)v1 == -1 )
  {
    v10 = 0LL;
    v9 = 0LL;
LABEL_10:
    SetLastInputWoken(v9, v10);
    return 1LL;
  }
  if ( (int)LockProcessByClientId(v1, &Object) >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    ObfDereferenceObject(Object);
    if ( ProcessWin32Process )
    {
      v7 = PsGetCurrentProcessWin32Process(v6);
      if ( (unsigned int)IsDesktopApp(v7)
        && (!glinp[6] || *(_QWORD *)(glinp[6] + 376LL) == PsGetCurrentProcessWin32Process(v8)) )
      {
        v3 = 1;
      }
      v9 = *(_QWORD *)(ProcessWin32Process + 296);
      v10 = v3;
      goto LABEL_10;
    }
  }
  v12 = 87;
LABEL_12:
  UserSetLastError(v12);
  return 0LL;
}
