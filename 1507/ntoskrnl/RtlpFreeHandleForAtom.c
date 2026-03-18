/*
 * XREFs of RtlpFreeHandleForAtom @ 0x140504DC4
 * Callers:
 *     RtlpFreeAllAtom @ 0x1400EE398 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x1406CBC90 (RtlEmptyAtomTable.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExMapHandleToPointer @ 0x140425030 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x140505200 (ExDestroyHandle.c)
 */

void __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rax
  struct _KTHREAD *v5; // rcx
  __int16 v6; // ax
  __int64 v7; // [rsp+30h] [rbp+8h]

  v7 = 4 * (unsigned int)*(unsigned __int16 *)(a2 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExMapHandleToPointer(*(_QWORD *)(a1 + 16), v7);
  if ( v4 )
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v7, v4);
  v5 = KeGetCurrentThread();
  v6 = v5->KernelApcDisable + 1;
  v5->KernelApcDisable = v6;
  if ( !v6
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v5->ApcState.ApcListHead[0].Flink != &v5->152
    && !v5->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
