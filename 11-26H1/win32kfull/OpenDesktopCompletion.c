/*
 * XREFs of OpenDesktopCompletion @ 0x1401A20EC
 * Callers:
 *     _OpenDesktop @ 0x14018ACD8 (_OpenDesktop.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1401A1E70 (EditionOpenInputDesktopEntryPoint.c)
 *     _OpenThreadDesktop @ 0x1401C69B4 (_OpenThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall OpenDesktopCompletion(__int64 a1, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PEPROCESS *v7; // rdi
  __int64 v8; // rsi
  HANDLE v10; // rbx
  int ProcessLuid; // ebx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = (PEPROCESS *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v7 = (PEPROCESS *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v8 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v8 + 32) & 2) == 0 )
    return (unsigned int)SetHandleFlag(a2, 0LL) != 0 ? 0x40000000 : -1073741801;
  v10 = *(HANDLE *)(W32GetUserSessionState(v6, v5) + 63536);
  if ( PsGetProcessId(*v7) == v10 )
    return (unsigned int)SetHandleFlag(a2, 0LL) != 0 ? 0x40000000 : -1073741801;
  v12 = 0LL;
  ProcessLuid = GetProcessLuid(0LL, &v12);
  if ( ProcessLuid >= 0 )
  {
    if ( v12 == *(_QWORD *)(v8 + 144) )
    {
      ProcessLuid = -1073741205;
      goto LABEL_9;
    }
    return (unsigned int)SetHandleFlag(a2, 0LL) != 0 ? 0x40000000 : -1073741801;
  }
LABEL_9:
  UserSetLastError(170);
  return (unsigned int)ProcessLuid;
}
