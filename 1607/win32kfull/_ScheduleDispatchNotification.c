/*
 * XREFs of _ScheduleDispatchNotification @ 0x1C005CA40
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall ScheduleDispatchNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 CurrentProcessWin32Process; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 16);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( *(_QWORD *)(v2 + 376) == CurrentProcessWin32Process )
  {
    if ( v2 == gptiCurrent )
      return (unsigned int)PostEventMessageEx(v2, *(_QWORD *)(v2 + 384), 9u, a1, 0x60u, 0LL, 0LL, 0LL) != 0 ? 2 : 0;
    v6 = *(_QWORD *)(CurrentProcessWin32Process + 824);
    v7 = *(_QWORD *)(*(_QWORD *)(v2 + 384) + 380LL);
    if ( !gbEnforceUIPI )
      return (unsigned int)PostEventMessageEx(v2, *(_QWORD *)(v2 + 384), 9u, a1, 0x60u, 0LL, 0LL, 0LL) != 0 ? 2 : 0;
    if ( (unsigned int)v6 > (unsigned int)v7 )
      return (unsigned int)PostEventMessageEx(v2, *(_QWORD *)(v2 + 384), 9u, a1, 0x60u, 0LL, 0LL, 0LL) != 0 ? 2 : 0;
    if ( (_DWORD)v6 == (_DWORD)v7
      && ((v8 = HIDWORD(v6), v9 = HIDWORD(v7), (_DWORD)v8 == (_DWORD)v9) || (_DWORD)v8 == -1 || (_DWORD)v9 == -1) )
    {
      return (unsigned int)PostEventMessageEx(v2, *(_QWORD *)(v2 + 384), 9u, a1, 0x60u, 0LL, 0LL, 0LL) != 0 ? 2 : 0;
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(5LL);
    return 0LL;
  }
}
