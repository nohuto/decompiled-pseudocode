/*
 * XREFs of NtCreateRegistryTransaction @ 0x1404E9C94
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ObInsertObject @ 0x140471424 (ObInsertObject.c)
 *     ObCreateObject @ 0x14047181C (ObCreateObject.c)
 *     NtClose @ 0x14050B0E0 (NtClose.c)
 */

__int64 __fastcall NtCreateRegistryTransaction(HANDLE *a1, ACCESS_MASK a2, __int64 a3, int a4)
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
  int inserted; // ebx
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+60h] [rbp-28h] BYREF

  Object[0] = 0LL;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( v10 )
  {
    if ( a4 )
    {
      inserted = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v14 = (__int64)a1;
        if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
          v14 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v14 = 0LL;
      }
      else
      {
        *a1 = 0LL;
      }
      inserted = ObCreateObject(PreviousMode, CmRegistryTransactionType, a3, PreviousMode, 0, 32, 0, 0, Object);
      if ( inserted >= 0 )
      {
        v15 = Object[0];
        memset(Object[0], 0, 0x20uLL);
        memset(v15, 0, 0x20uLL);
        v15[1] = 0LL;
        inserted = ObInsertObject(v15, 0LL, a2, 0, 0LL, &Handle);
        Object[0] = 0LL;
        if ( inserted >= 0 )
        {
          *a1 = Handle;
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
  return (unsigned int)inserted;
}
