/*
 * XREFs of EtwNotificationRegister @ 0x180038BC0
 * Callers:
 *     EtwEventRegister @ 0x180039340 (EtwEventRegister.c)
 *     EtwRegisterTraceGuidsW @ 0x18006A040 (EtwRegisterTraceGuidsW.c)
 * Callees:
 *     EtwpFreeRegistration @ 0x18000E448 (EtwpFreeRegistration.c)
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     EtwpRegisterProvider @ 0x180038A60 (EtwpRegisterProvider.c)
 *     EtwpAllocateRegistration @ 0x180038CB4 (EtwpAllocateRegistration.c)
 *     EtwpInsertRegistration @ 0x180038DB8 (EtwpInsertRegistration.c)
 */

__int64 __fastcall EtwNotificationRegister(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  ULONG v7; // ebx
  __int64 Registration; // rax
  char *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  volatile signed __int64 *v13; // rbp

  if ( a1 && a5 )
  {
    *a5 = 0LL;
    v7 = 0;
    Registration = EtwpAllocateRegistration(a1, a3, a4, a2);
    v12 = Registration;
    if ( !Registration )
    {
      v7 = 14;
      goto LABEL_10;
    }
    v13 = (volatile signed __int64 *)(Registration + 64);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(Registration + 64), v9, v10, v11);
    *(_DWORD *)(v12 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    if ( a2 != 10 && (v7 = EtwpRegisterProvider(v12, a3, a2)) != 0 )
    {
      *(_DWORD *)(v12 + 80) = 0;
      RtlReleaseSRWLockExclusive(v13);
      EtwpFreeRegistration(v12);
    }
    else
    {
      EtwpInsertRegistration(v12);
      *(_DWORD *)(v12 + 80) = 0;
      RtlReleaseSRWLockExclusive(v13);
      *a5 = v12 | ((unsigned __int64)*(unsigned __int16 *)(v12 + 96) << 48);
    }
  }
  else
  {
    v7 = 87;
  }
  if ( v7 )
LABEL_10:
    RtlSetLastWin32Error(v7);
  return v7;
}
