/*
 * XREFs of ObQueryObjectAuditingByHandle @ 0x140483618
 * Callers:
 *     <none>
 * Callees:
 *     ObpIsKernelHandle @ 0x140038748 (ObpIsKernelHandle.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExMapHandleToPointer @ 0x1403F7030 (ExMapHandleToPointer.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 */

NTSTATUS __stdcall ObQueryObjectAuditingByHandle(HANDLE Handle, PBOOLEAN GenerateOnClose)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rcx
  NTSTATUS v5; // edi
  __int64 v6; // rbp
  signed __int64 *v7; // rax
  __int64 v8; // rbx

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
  v7 = ExMapHandleToPointer(v6, v4);
  if ( v7 )
  {
    v8 = ((__int64)*(unsigned int *)v7 >> 17) & 7;
    if ( (v7[1] & 0x2000000) != 0 )
      LOBYTE(v8) = v8 | 8;
    ExUnlockHandleTableEntry(v6, v7);
    *GenerateOnClose = (v8 & 4) != 0;
  }
  else
  {
    v5 = -1073741816;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v5;
}
