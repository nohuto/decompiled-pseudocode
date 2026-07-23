/*
 * XREFs of ObQueryObjectAuditingByHandle @ 0x14045D228
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObpIsKernelHandle @ 0x1400CDBC8 (ObpIsKernelHandle.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 *     ExMapHandleToPointer @ 0x1404F0EA4 (ExMapHandleToPointer.c)
 */

NTSTATUS __stdcall ObQueryObjectAuditingByHandle(HANDLE Handle, PBOOLEAN GenerateOnClose)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rcx
  NTSTATUS v5; // edi
  ULONG_PTR v6; // rbp
  unsigned int *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  if ( ObpIsKernelHandle((unsigned __int64)Handle, CurrentThread->PreviousMode) )
  {
    v6 = ObpKernelHandleTable;
    v4 ^= 0xFFFFFFFF80000000uLL;
  }
  else
  {
    v6 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[5];
  }
  --CurrentThread->KernelApcDisable;
  v7 = (unsigned int *)ExMapHandleToPointer(v6, v4);
  if ( v7 )
  {
    v11 = ((__int64)*v7 >> 17) & 7;
    if ( (v7[2] & 0x2000000) != 0 )
      LOBYTE(v11) = v11 | 8;
    ExUnlockHandleTableEntry(v6, v7);
    *GenerateOnClose = (v11 & 4) != 0;
  }
  else
  {
    v5 = -1073741816;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v8, v9, v10);
  return v5;
}
