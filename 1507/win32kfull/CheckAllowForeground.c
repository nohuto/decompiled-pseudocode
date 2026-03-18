/*
 * XREFs of CheckAllowForeground @ 0x1C0080810
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C00806E0 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     CanForceForeground @ 0x1C0080A70 (CanForceForeground.c)
 *     IsShellProcess @ 0x1C0080B7C (IsShellProcess.c)
 */

__int64 __fastcall CheckAllowForeground(__int64 a1)
{
  int v1; // r12d
  unsigned int v2; // ebx
  void *v3; // r14
  unsigned int v4; // r15d
  int v5; // esi
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rax
  int v12; // eax
  PACCESS_TOKEN v13; // rax
  void *v14; // r14
  __int64 ProcessInheritedFromUniqueProcessId; // rax
  __int64 v16; // rcx
  PEPROCESS Process; // [rsp+78h] [rbp+50h] BYREF
  struct _LUID AuthenticationId; // [rsp+80h] [rbp+58h] BYREF
  __int64 v20; // [rsp+88h] [rbp+60h]

  v1 = 1;
  v2 = 0;
  v3 = (void *)((__int64 (*)(void))PsGetProcessInheritedFromUniqueProcessId)();
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    if ( PsLookupProcessByProcessId(v3, &Process) < 0 )
      goto LABEL_35;
    if ( (unsigned int)PsGetProcessSessionId(Process) != gSessionId )
      break;
    ProcessWin32Process = PsGetProcessWin32Process(Process);
    v7 = ProcessWin32Process;
    if ( !ProcessWin32Process )
    {
      ObfDereferenceObject(Process);
LABEL_35:
      ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(a1);
      v16 = 0LL;
      while ( ghCanActivateForegroundPIDs[v16] != ProcessInheritedFromUniqueProcessId )
      {
        if ( ++v16 >= 5 )
          goto LABEL_21;
      }
      return 1;
    }
    if ( !v1
      && ((unsigned int)IsShellProcess(ProcessWin32Process)
       || (v10 = *(_QWORD *)(v7 + 640)) != 0 && (*(_DWORD *)(v10 + 32) & 4) != 0) )
    {
      ObfDereferenceObject(Process);
      goto LABEL_21;
    }
    v5 = CanForceForeground(v7);
    if ( !v5 )
    {
      v8 = *(_QWORD *)(v7 + 296);
      if ( v8 && (*(_DWORD *)(v8 + 448) & 0x20) != 0 )
      {
        v5 = 1;
      }
      else
      {
        v20 = PsGetProcessInheritedFromUniqueProcessId(Process);
        v3 = (void *)v20;
        if ( v1 )
        {
          v1 = 0;
          v13 = PsReferencePrimaryToken(Process);
          v14 = v13;
          if ( v13 )
          {
            if ( SeQueryAuthenticationIdToken(v13, &AuthenticationId) >= 0 )
            {
              if ( AuthenticationId.LowPart == luidSystem[0] && AuthenticationId.HighPart == luidSystem[1] )
              {
                *(_DWORD *)(v7 + 12) |= 0x80000u;
                v5 = 1;
              }
              else
              {
                v5 = 0;
              }
            }
            ObfDereferenceObject(v14);
          }
          v3 = (void *)v20;
        }
      }
    }
    ObfDereferenceObject(Process);
    if ( v5 )
      return 1;
    v9 = v4++;
    if ( v9 >= 5 )
      goto LABEL_21;
  }
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(gpsi + 3984LL) > *(_DWORD *)UPDWORDPointer(0x2000LL) )
    v5 = 1;
  ObfDereferenceObject(Process);
  if ( v5 )
    return 1;
LABEL_21:
  if ( gptiForeground )
  {
    LOBYTE(v12) = 0;
    if ( *(_DWORD *)(gptiForeground + 560LL) <= 0x400u )
      v12 = *(_DWORD *)(gptiForeground + 576LL);
    if ( (v12 & 0x40) != 0 )
      return 1;
  }
  return v2;
}
