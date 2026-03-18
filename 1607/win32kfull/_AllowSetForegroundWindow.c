/*
 * XREFs of _AllowSetForegroundWindow @ 0x1C0099100
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C009AC70 (LockProcessByClientId.c)
 *     CanForceForeground @ 0x1C009AF60 (CanForceForeground.c)
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall AllowSetForegroundWindow(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  __int64 ProcessWin32Process; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  v4 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    gppiLockSFW = 0LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3, v2);
    if ( !(unsigned int)CanForceForeground(CurrentProcessWin32Process) )
    {
      v6 = 5LL;
LABEL_4:
      UserSetLastError(v6);
      return 0LL;
    }
  }
  if ( (_DWORD)v1 == -1 )
  {
    v18 = 0LL;
    v17 = 0LL;
  }
  else
  {
    if ( (int)LockProcessByClientId(v1, &Object) < 0
      || (ProcessWin32Process = PsGetProcessWin32Process(Object), ObfDereferenceObject(Object), !ProcessWin32Process) )
    {
      v6 = 87LL;
      goto LABEL_4;
    }
    v11 = PsGetCurrentProcessWin32Process(v10, v9);
    if ( (unsigned int)IsDesktopApp(v11, v12, v13, v14)
      && (!glinp[9] || *(_QWORD *)(glinp[9] + 376LL) == PsGetCurrentProcessWin32Process(v16, v15)) )
    {
      v4 = 1;
    }
    v17 = *(_QWORD *)(ProcessWin32Process + 288);
    v18 = v4;
  }
  SetLastInputWoken(v17, v18);
  return 1LL;
}
