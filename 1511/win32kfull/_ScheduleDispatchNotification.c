/*
 * XREFs of _ScheduleDispatchNotification @ 0x1C00F2E70
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall ScheduleDispatchNotification(__int64 a1)
{
  __int64 v1; // rbx
  __int64 CurrentProcessWin32Process; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v1 = *(_QWORD *)(a1 + 16);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( *(_QWORD *)(v1 + 376) == CurrentProcessWin32Process )
  {
    if ( v1 == gptiCurrent )
      return (unsigned int)PostEventMessageEx(v1, *(_QWORD *)(v1 + 384), 9u, a1, 0x60u, 0LL, 0LL, 0LL) != 0 ? 2 : 0;
    v5 = *(_QWORD *)(CurrentProcessWin32Process + 832);
    v6 = *(_QWORD *)(*(_QWORD *)(v1 + 384) + 372LL);
    if ( !gbEnforceUIPI )
      return (unsigned int)PostEventMessageEx(v1, *(_QWORD *)(v1 + 384), 9u, a1, 0x60u, 0LL, 0LL, 0LL) != 0 ? 2 : 0;
    if ( (unsigned int)v5 > (unsigned int)v6 )
      return (unsigned int)PostEventMessageEx(v1, *(_QWORD *)(v1 + 384), 9u, a1, 0x60u, 0LL, 0LL, 0LL) != 0 ? 2 : 0;
    if ( (_DWORD)v5 == (_DWORD)v6
      && ((v7 = HIDWORD(v5), v8 = HIDWORD(v6), (_DWORD)v7 == (_DWORD)v8) || (_DWORD)v8 == -1 || (_DWORD)v7 == -1) )
    {
      return (unsigned int)PostEventMessageEx(v1, *(_QWORD *)(v1 + 384), 9u, a1, 0x60u, 0LL, 0LL, 0LL) != 0 ? 2 : 0;
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
