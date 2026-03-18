/*
 * XREFs of ObQueryObjectAuditingByHandle @ 0x14053A484
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x140425030 (ExMapHandleToPointer.c)
 */

NTSTATUS __stdcall ObQueryObjectAuditingByHandle(HANDLE Handle, PBOOLEAN GenerateOnClose)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rsi
  signed __int64 *v5; // rax
  __int64 v6; // rbx
  char v7; // bl
  NTSTATUS v8; // ebx
  __int16 v9; // ax
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode
    || ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL
    || (unsigned __int64)Handle >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v4 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[5];
  }
  else
  {
    v4 = ObpKernelHandleTable;
  }
  --CurrentThread->KernelApcDisable;
  v5 = ExMapHandleToPointer(v4, (__int16)Handle);
  if ( v5 )
  {
    v6 = ((__int64)*(unsigned int *)v5 >> 17) & 7;
    if ( (v5[1] & 0x2000000) != 0 )
      LOBYTE(v6) = v6 | 8;
    v7 = v6 & 7;
    _InterlockedExchangeAdd64(v5, 1uLL);
    _InterlockedOr(v11, 0);
    if ( *(_QWORD *)(v4 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v4 + 48), 0LL);
    *GenerateOnClose = (v7 & 4) != 0;
    v8 = 0;
  }
  else
  {
    v8 = -1073741816;
  }
  v9 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v8;
}
