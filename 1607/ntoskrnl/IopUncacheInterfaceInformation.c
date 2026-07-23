/*
 * XREFs of IopUncacheInterfaceInformation @ 0x140484758
 * Callers:
 *     IopDestroyDeviceNode @ 0x1403F1B98 (IopDestroyDeviceNode.c)
 *     PipProcessStartPhase1 @ 0x1404846CC (PipProcessStartPhase1.c)
 *     IopRemoveDevice @ 0x140484840 (IopRemoveDevice.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall IopUncacheInterfaceInformation(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  void *v14; // rbp
  __int64 v15; // rbp
  void *v16; // r15

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
    v13 = v7[3];
    v14 = v7;
    if ( v13 )
    {
      (*(void (__fastcall **)(_QWORD))(v13 + 24))(*(_QWORD *)(v13 + 8));
      ExFreePoolWithTag((PVOID)v13, 0);
    }
    v7 = (_QWORD *)*v7;
    ExFreePoolWithTag(v14, 0);
  }
  v8 = v5 + 63;
  v9 = (_QWORD *)v5[63];
  while ( v9 != v8 )
  {
    v15 = v9[3];
    v16 = v9;
    if ( v15 )
    {
      (*(void (__fastcall **)(_QWORD))(v15 + 24))(*(_QWORD *)(v15 + 8));
      ExFreePoolWithTag((PVOID)v15, 0);
    }
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v16, 0);
  }
  v5[62] = v5 + 61;
  *v6 = v6;
  v5[64] = v5 + 63;
  *v8 = v8;
  v5[65] = 0LL;
  if ( a2 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  }
}
