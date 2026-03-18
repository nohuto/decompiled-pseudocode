/*
 * XREFs of ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C009ABD4
 * Callers:
 *     xxxConsoleControl @ 0x1C009A9BC (xxxConsoleControl.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C009AC70 (LockProcessByClientId.c)
 *     CheckAllowForeground @ 0x1C009AD00 (CheckAllowForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUserNotifyConsoleApplication(struct _CONSOLE_PROCESS_INFO *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int inited; // edi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  if ( !gptiRit )
    return 3221225506LL;
  result = LockProcessByClientId(*(int *)a1, &Object);
  if ( (int)result >= 0 )
  {
    inited = xxxSetProcessInitState(Object, 0LL);
    if ( inited >= 0 )
    {
      v5 = *((unsigned int *)a1 + 1);
      if ( (v5 & 1) != 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v3);
        if ( (unsigned int)CheckAllowForeground(Object) )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40) == 0 )
            SetAppStarting(CurrentProcessWin32Process);
          gdwPUDFlags |= 0x8000000u;
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100u;
        }
      }
    }
    ObfDereferenceObject(Object);
    return (unsigned int)inited;
  }
  return result;
}
