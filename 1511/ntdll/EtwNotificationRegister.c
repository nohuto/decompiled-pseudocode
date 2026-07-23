/*
 * XREFs of EtwNotificationRegister @ 0x1800541F0
 * Callers:
 *     EtwRegisterTraceGuidsW @ 0x180054030 (EtwRegisterTraceGuidsW.c)
 *     EtwEventRegister @ 0x1800541A0 (EtwEventRegister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     EtwpFreeRegistration @ 0x180047F28 (EtwpFreeRegistration.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     EtwpRegisterProvider @ 0x1800542E4 (EtwpRegisterProvider.c)
 *     EtwpAllocateRegistration @ 0x180054544 (EtwpAllocateRegistration.c)
 *     EtwpInsertRegistration @ 0x180054648 (EtwpInsertRegistration.c)
 */

ULONG __cdecl EtwNotificationRegister(
        LPCGUID Guid,
        ULONG Type,
        PETW_NOTIFICATION_CALLBACK Callback,
        PVOID Context,
        PREGHANDLE RegHandle)
{
  unsigned __int32 v7; // ebx
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
    if ( Type != 10 && (v7 = EtwpRegisterProvider(v9, Callback, Type)) != 0 )
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
