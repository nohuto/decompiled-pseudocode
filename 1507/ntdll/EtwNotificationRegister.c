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

ULONG __cdecl EtwNotificationRegister(
        LPCGUID Guid,
        ULONG Type,
        PETW_NOTIFICATION_CALLBACK Callback,
        PVOID Context,
        PREGHANDLE RegHandle)
{
  ULONG v7; // ebx
  _RTL_SRWLOCK *Registration; // rax
  __int64 v9; // rdi
  _RTL_SRWLOCK *v10; // rbp

  if ( Guid && RegHandle )
  {
    *RegHandle = 0LL;
    v7 = 0;
    Registration = (_RTL_SRWLOCK *)EtwpAllocateRegistration(Guid, Callback, Context, Type);
    v9 = (__int64)Registration;
    if ( !Registration )
    {
      v7 = 14;
      goto LABEL_10;
    }
    v10 = Registration + 8;
    RtlAcquireSRWLockExclusive(Registration + 8);
    *(_DWORD *)(v9 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    if ( Type != 10 && (v7 = EtwpRegisterProvider(v9, (__int64)Callback, Type)) != 0 )
    {
      *(_DWORD *)(v9 + 80) = 0;
      RtlReleaseSRWLockExclusive(v10);
      EtwpFreeRegistration(v9);
    }
    else
    {
      EtwpInsertRegistration((PRTL_BALANCED_NODE)v9);
      *(_DWORD *)(v9 + 80) = 0;
      RtlReleaseSRWLockExclusive(v10);
      *RegHandle = v9 | ((unsigned __int64)*(unsigned __int16 *)(v9 + 96) << 48);
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
