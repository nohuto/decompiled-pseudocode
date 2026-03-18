/*
 * XREFs of CheckHandleFlag @ 0x1C00578E0
 * Callers:
 *     OkayToCloseWindowStation @ 0x1C00540D0 (OkayToCloseWindowStation.c)
 *     OkayToCloseDesktop @ 0x1C00570B0 (OkayToCloseDesktop.c)
 *     zzzSetDesktop @ 0x1C0057510 (zzzSetDesktop.c)
 *     _GetUserObjectInformation @ 0x1C00772AC (_GetUserObjectInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall CheckHandleFlag(PRKPROCESS PROCESS, int a2, unsigned int a3, int a4)
{
  unsigned int v6; // ebx
  int v7; // ebp
  unsigned int v8; // edi
  __int64 ProcessWin32Process; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = a4 + 2 * (a3 >> 2) + (a3 >> 2);
  EnterHandleFlagsCrit();
  if ( PROCESS )
  {
    if ( (unsigned int)PsGetProcessSessionId(PROCESS) != a2 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      v7 = 1;
    }
    ProcessWin32Process = PsGetProcessWin32Process(PROCESS);
  }
  else
  {
    ProcessWin32Process = PsGetCurrentProcessWin32Process();
  }
  if ( ProcessWin32Process
    && v8 < *(_DWORD *)(ProcessWin32Process + 680)
    && _bittest64(*(const signed __int64 **)(ProcessWin32Process + 688), v8) )
  {
    v6 = 1;
  }
  if ( v7 )
    KeUnstackDetachProcess(&ApcState);
  LeaveHandleFlagsCrit();
  return v6;
}
