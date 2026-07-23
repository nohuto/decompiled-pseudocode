/*
 * XREFs of NtOpenRegistryTransaction @ 0x1405F989C
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 */

NTSTATUS __cdecl NtOpenRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  BOOLEAN v8; // di
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS v11; // ebx
  char PreviousMode; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  HANDLE Handle[5]; // [rsp+40h] [rbp-28h] BYREF

  Handle[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( v8 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v13 = (__int64)RegistryTransactionHandle;
      if ( (unsigned __int64)RegistryTransactionHandle >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v13 = 0LL;
    }
    else
    {
      *RegistryTransactionHandle = 0LL;
    }
    v11 = ObOpenObjectByName(
            (__int64)ObjAttributes,
            (__int64)CmRegistryTransactionType,
            PreviousMode,
            0LL,
            DesiredAccess,
            0LL,
            Handle);
    if ( v11 >= 0 )
    {
      *RegistryTransactionHandle = Handle[0];
      Handle[0] = 0LL;
      v11 = 0;
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v9, v10);
    v11 = -1073741431;
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  if ( v8 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
  }
  return v11;
}
