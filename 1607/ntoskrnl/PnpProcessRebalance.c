/*
 * XREFs of PnpProcessRebalance @ 0x1401CE5E0
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400AFA3C (PnpDeviceActionWorker.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x1400529B0 (KeReleaseSemaphore.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     PiCollapseRebalanceRequests @ 0x1401CE39C (PiCollapseRebalanceRequests.c)
 *     PipProcessDevNodeTree @ 0x1403F41E0 (PipProcessDevNodeTree.c)
 *     PnpRebalance @ 0x1406303D0 (PnpRebalance.c)
 */

__int64 __fastcall PnpProcessRebalance(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rbx
  char v4; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+54h] [rbp+Ch]

  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
    v3 = *(_QWORD *)(v2[39] + 40LL);
  else
    v3 = IopRootDeviceNode;
  v4 = *(_BYTE *)(a1 + 32);
  if ( (unsigned int)(*(_DWORD *)(v3 + 300) - 787) <= 1 )
  {
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    return 3221225558LL;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 28) && v4 && PiCollapseRebalanceRequests((PVOID *)a1) )
      v3 = IopRootDeviceNode;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
    LOBYTE(v6) = v4;
    v7 = PnpRebalance(v3, 0LL, 0LL, v6);
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
    if ( v7 >= 0 )
    {
      v12 = 3;
      v13 = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*(PVOID *)(IopRootDeviceNode + 32), 0x746C6644u);
      return (unsigned int)PipProcessDevNodeTree(IopRootDeviceNode, a1, (unsigned int)&v12, 0, 0, 1, 0);
    }
    return (unsigned int)v7;
  }
}
