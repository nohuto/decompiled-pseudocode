/*
 * XREFs of NtOpenRegistryTransaction @ 0x1405F97E8
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     ObOpenObjectByName @ 0x140464694 (ObOpenObjectByName.c)
 *     NtClose @ 0x14050B0E0 (NtClose.c)
 */

__int64 __fastcall NtOpenRegistryTransaction(HANDLE *a1, ACCESS_MASK a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  BOOLEAN v8; // di
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
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
      v13 = (__int64)a1;
      if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v13 = 0LL;
    }
    else
    {
      *a1 = 0LL;
    }
    v11 = ObOpenObjectByName(a3, (__int64)CmRegistryTransactionType, PreviousMode, 0LL, a2, 0LL, Handle);
    if ( v11 >= 0 )
    {
      *a1 = Handle[0];
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
  return (unsigned int)v11;
}
