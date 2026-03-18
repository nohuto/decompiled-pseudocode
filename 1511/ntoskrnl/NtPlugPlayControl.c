/*
 * XREFs of NtPlugPlayControl @ 0x140438FB0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404390E4 (PiControlMakeUserModeCallersCopy.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __stdcall NtPlugPlayControl(PLUGPLAY_CONTROL_CLASS PlugPlayControlClass, PVOID Buffer, ULONG BufferSize)
{
  __int64 v4; // rsi
  char PreviousMode; // bp
  char *v6; // rbx
  NTSTATUS result; // eax
  __int64 v8; // r9
  NTSTATUS v9; // ebx
  int UserModeCallersCopy; // eax
  int v11; // [rsp+20h] [rbp-28h]
  PVOID v12; // [rsp+58h] [rbp+10h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v12 = Buffer;
  v4 = (unsigned int)PlugPlayControlClass;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return -1073741727;
  if ( (unsigned int)v4 >= 0x18 )
    return -1073741585;
  v6 = (char *)&PlugPlayHandlerTable + 24 * v4;
  if ( *(_DWORD *)v6 != (_DWORD)v4 )
    return -1073741595;
  if ( !v6 )
    return -1073741585;
  if ( !*((_QWORD *)v6 + 1) )
    return -1073741822;
  if ( *((_DWORD *)v6 + 1) != BufferSize )
    return -1073741776;
  if ( PsIsCurrentThreadInServerSilo() && !v6[16] )
    return -1073741727;
  P = 0LL;
  result = PiControlMakeUserModeCallersCopy(&P, v12, BufferSize, 4LL, PreviousMode, 1);
  if ( result >= 0 )
  {
    LOBYTE(v8) = PreviousMode;
    v9 = (*((__int64 (__fastcall **)(_QWORD, PVOID, _QWORD, __int64))v6 + 1))((unsigned int)v4, P, BufferSize, v8);
    if ( (v9 & 0xC0000000) != 0xC0000000 || v9 == -1073741789 )
    {
      LOBYTE(v11) = PreviousMode;
      UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v12, P, BufferSize, 4LL, v11, 0);
      if ( UserModeCallersCopy < 0 )
        v9 = UserModeCallersCopy;
    }
    if ( v9 == -1073741738 )
      v9 = -1073741810;
    if ( PreviousMode )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return v9;
  }
  return result;
}
