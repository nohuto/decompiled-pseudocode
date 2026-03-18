/*
 * XREFs of ExpWnfTerminateServerSiloCallback @ 0x140677D64
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpWnfDeleteScopeInstances @ 0x140677C2C (ExpWnfDeleteScopeInstances.c)
 */

int __fastcall ExpWnfTerminateServerSiloCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax

  if ( *(_QWORD *)a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExpWnfDeleteScopeInstances(*(_QWORD *)a1, 2u);
    ExpWnfDeleteScopeInstances(*(_QWORD *)a1, 0);
    ExFreePoolWithTag(*(PVOID *)a1, 0x20666E57u);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( *(_QWORD *)(a1 + 8) )
    ZwClose(*(HANDLE *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    LODWORD(v3) = ZwClose(*(HANDLE *)(a1 + 16));
  return v3;
}
