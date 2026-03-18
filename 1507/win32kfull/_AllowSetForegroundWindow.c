/*
 * XREFs of _AllowSetForegroundWindow @ 0x1C007DD60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C008077C (LockProcessByClientId.c)
 *     CanForceForeground @ 0x1C0080A70 (CanForceForeground.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v13; // ecx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  v3 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    gppiLockSFW = 0LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    if ( !(unsigned int)CanForceForeground(CurrentProcessWin32Process) )
    {
      v13 = 5;
      goto LABEL_12;
    }
  }
  if ( (_DWORD)v1 == -1 )
  {
    v11 = 0LL;
    v10 = 0LL;
LABEL_10:
    SetLastInputWoken(v10, v11);
    return 1LL;
  }
  if ( (int)LockProcessByClientId(v1, &Object) >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    ObfDereferenceObject(Object);
    if ( ProcessWin32Process )
    {
      v7 = PsGetCurrentProcessWin32Process(v6);
      if ( (unsigned int)IsDesktopApp(v7, v8)
        && (!glinp[9] || *(_QWORD *)(glinp[9] + 384LL) == PsGetCurrentProcessWin32Process(v9)) )
      {
        v3 = 1;
      }
      v10 = *(_QWORD *)(ProcessWin32Process + 296);
      v11 = v3;
      goto LABEL_10;
    }
  }
  v13 = 87;
LABEL_12:
  UserSetLastError(v13);
  return 0LL;
}
