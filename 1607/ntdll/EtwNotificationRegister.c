/*
 * XREFs of EtwNotificationRegister @ 0x18002A400
 * Callers:
 *     EtwRegisterTraceGuidsW @ 0x18002A2E0 (EtwRegisterTraceGuidsW.c)
 *     EtwEventRegister @ 0x18002A3B0 (EtwEventRegister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpRegisterProvider @ 0x18002A4F4 (EtwpRegisterProvider.c)
 *     EtwpAllocateRegistration @ 0x18002A644 (EtwpAllocateRegistration.c)
 *     EtwpInsertRegistration @ 0x18002A85C (EtwpInsertRegistration.c)
 *     EtwpFreeRegistration @ 0x1800597C8 (EtwpFreeRegistration.c)
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
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
  _RTL_BALANCED_NODE *v9; // rdi
  _RTL_SRWLOCK *v10; // rbp

  if ( Guid && RegHandle )
  {
    *RegHandle = 0LL;
    v7 = 0;
    Registration = (_RTL_SRWLOCK *)EtwpAllocateRegistration(Guid, Callback, Context, Type);
    v9 = (_RTL_BALANCED_NODE *)Registration;
    if ( !Registration )
    {
      v7 = 14;
      goto LABEL_10;
    }
    v10 = Registration + 8;
    RtlAcquireSRWLockExclusive(Registration + 8);
    LODWORD(v9[3].Right) = NtCurrentTeb()->ClientId.UniqueThread;
    if ( Type != 10 && (v7 = EtwpRegisterProvider(v9, Callback, Type)) != 0 )
    {
      LODWORD(v9[3].Right) = 0;
      RtlReleaseSRWLockExclusive(v10);
      EtwpFreeRegistration(v9);
    }
    else
    {
      EtwpInsertRegistration(v9);
      LODWORD(v9[3].Right) = 0;
      RtlReleaseSRWLockExclusive(v10);
      *RegHandle = (unsigned __int64)v9 | ((unsigned __int64)LOWORD(v9[4].Children[0]) << 48);
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
