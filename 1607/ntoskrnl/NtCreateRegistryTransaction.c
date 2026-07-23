/*
 * XREFs of NtCreateRegistryTransaction @ 0x1404CBD88
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 */

NTSTATUS __cdecl NtCreateRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes,
        ULONG CreateOptions)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  BOOLEAN v10; // si
  __int64 v11; // r8
  __int64 v12; // r9
  char PreviousMode; // r15
  __int64 v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  NTSTATUS inserted; // ebx
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+60h] [rbp-28h] BYREF

  Object[0] = 0LL;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( v10 )
  {
    if ( CreateOptions )
    {
      inserted = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v14 = (__int64)RegistryTransactionHandle;
        if ( (unsigned __int64)RegistryTransactionHandle >= 0x7FFFFFFF0000LL )
          v14 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v14 = 0LL;
      }
      else
      {
        *RegistryTransactionHandle = 0LL;
      }
      inserted = ObCreateObject(
                   PreviousMode,
                   CmRegistryTransactionType,
                   (__int64)ObjAttributes,
                   PreviousMode,
                   0,
                   32,
                   0,
                   0,
                   Object);
      if ( inserted >= 0 )
      {
        v15 = Object[0];
        memset(Object[0], 0, 0x20uLL);
        memset(v15, 0, 0x20uLL);
        v15[1] = 0LL;
        inserted = ObInsertObject(v15, 0LL, DesiredAccess, 0, 0LL, &Handle);
        Object[0] = 0LL;
        if ( inserted >= 0 )
        {
          *RegistryTransactionHandle = Handle;
          Handle = 0LL;
          inserted = 0;
        }
      }
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v11, v12);
    inserted = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( v10 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
  }
  return inserted;
}
