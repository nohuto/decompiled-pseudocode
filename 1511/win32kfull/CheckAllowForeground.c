/*
 * XREFs of CheckAllowForeground @ 0x1C0073590
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0073460 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     ?CanForceForeground2@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C00737D8 (-CanForceForeground2@@YAHPEBUtagPROCESSINFO@@@Z.c)
 *     IsShellProcess @ 0x1C00738DC (IsShellProcess.c)
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
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edi
  PACCESS_TOKEN v12; // rax
  void *v13; // r14
  unsigned int v14; // eax
  __int64 ProcessInheritedFromUniqueProcessId; // rax
  __int64 v16; // rcx
  int v17; // eax
  PEPROCESS Process; // [rsp+78h] [rbp+50h] BYREF
  _LUID AuthenticationId; // [rsp+80h] [rbp+58h] BYREF
  __int64 v22; // [rsp+88h] [rbp+60h]

  v1 = 1;
  v2 = 0;
  v3 = (void *)((__int64 (*)(void))PsGetProcessInheritedFromUniqueProcessId)();
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    if ( PsLookupProcessByProcessId(v3, &Process) < 0 )
      goto LABEL_28;
    if ( (unsigned int)PsGetProcessSessionId(Process) != gSessionId )
      break;
    ProcessWin32Process = PsGetProcessWin32Process(Process);
    v7 = ProcessWin32Process;
    if ( !ProcessWin32Process )
    {
      ObfDereferenceObject(Process);
LABEL_28:
      ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(a1);
      v16 = 0LL;
      v11 = 1;
      while ( ghCanActivateForegroundPIDs[v16] != ProcessInheritedFromUniqueProcessId )
      {
        if ( ++v16 >= 5 )
          goto LABEL_31;
      }
      return v11;
    }
    if ( !v1
      && ((unsigned int)IsShellProcess(ProcessWin32Process)
       || (v9 = *(_QWORD *)(v8 + 640)) != 0 && (*(_DWORD *)(v9 + 32) & 4) != 0) )
    {
      ObfDereferenceObject(Process);
      v11 = 1;
      goto LABEL_31;
    }
    v5 = CanForceForeground2((const struct tagPROCESSINFO *)v7);
    if ( v5 )
      goto LABEL_22;
    v10 = *(_QWORD *)(v7 + 296);
    if ( !v10 || (*(_DWORD *)(v10 + 440) & 0x20) == 0 )
    {
      v22 = PsGetProcessInheritedFromUniqueProcessId(Process);
      v3 = (void *)v22;
      if ( v1 )
      {
        v1 = 0;
        v12 = PsReferencePrimaryToken(Process);
        v13 = v12;
        if ( v12 )
        {
          if ( SeQueryAuthenticationIdToken(v12, &AuthenticationId) >= 0 )
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
          ObfDereferenceObject(v13);
        }
        v3 = (void *)v22;
      }
LABEL_22:
      v11 = 1;
      goto LABEL_23;
    }
    v11 = ++v5;
LABEL_23:
    ObfDereferenceObject(Process);
    if ( v5 )
      return v11;
    v14 = v4;
    v4 += v11;
    if ( v14 >= 5 )
      goto LABEL_31;
  }
  v11 = 1;
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(gpsi + 3984LL) > *(_DWORD *)UPDWORDPointer(0x2000LL) )
    v5 = 1;
  ObfDereferenceObject(Process);
  if ( v5 )
    return v11;
LABEL_31:
  if ( gptiForeground )
  {
    LOBYTE(v17) = 0;
    if ( *(_DWORD *)(gptiForeground + 552LL) <= 0x400u )
      v17 = *(_DWORD *)(gptiForeground + 568LL);
    if ( (v17 & 0x40) != 0 )
      return v11;
  }
  return v2;
}
