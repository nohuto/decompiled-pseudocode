/*
 * XREFs of IopUncacheInterfaceInformation @ 0x14045E660
 * Callers:
 *     PipProcessStartPhase1 @ 0x14045E75C (PipProcessStartPhase1.c)
 *     IopDestroyDeviceNode @ 0x140534C48 (IopDestroyDeviceNode.c)
 *     IopRemoveDevice @ 0x1405383EC (IopRemoveDevice.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall IopUncacheInterfaceInformation(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  __int64 v12; // rsi
  void *v13; // rbp
  __int64 v14; // rbp
  void *v15; // r15

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  }
  if ( a1 )
    v5 = *(_QWORD **)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = v5 + 61;
  v7 = (_QWORD *)v5[61];
  while ( v7 != v6 )
  {
    v12 = v7[3];
    v13 = v7;
    if ( v12 )
    {
      (*(void (__fastcall **)(_QWORD))(v12 + 24))(*(_QWORD *)(v12 + 8));
      ExFreePoolWithTag((PVOID)v12, 0);
    }
    v7 = (_QWORD *)*v7;
    ExFreePoolWithTag(v13, 0);
  }
  v8 = v5 + 63;
  v9 = (_QWORD *)v5[63];
  while ( v9 != v8 )
  {
    v14 = v9[3];
    v15 = v9;
    if ( v14 )
    {
      (*(void (__fastcall **)(_QWORD))(v14 + 24))(*(_QWORD *)(v14 + 8));
      ExFreePoolWithTag((PVOID)v14, 0);
    }
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v15, 0);
  }
  v5[62] = v5 + 61;
  *v6 = v6;
  v5[64] = v5 + 63;
  *v8 = v8;
  v5[65] = 0LL;
  if ( a2 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    v10 = KeGetCurrentThread();
    v11 = v10->KernelApcDisable + 1;
    v10->KernelApcDisable = v11;
    if ( !v11
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
      && !v10->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
