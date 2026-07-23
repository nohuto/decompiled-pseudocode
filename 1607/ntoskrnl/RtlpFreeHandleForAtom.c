/*
 * XREFs of RtlpFreeHandleForAtom @ 0x14051BA24
 * Callers:
 *     RtlpFreeAllAtom @ 0x14010D200 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x1406882B4 (RtlEmptyAtomTable.c)
 * Callees:
 *     ExMapHandleToPointer @ 0x1404F0EA4 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x14051C038 (ExDestroyHandle.c)
 */

void __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  v5 = 4 * (unsigned int)*(unsigned __int16 *)(a2 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExMapHandleToPointer(*(unsigned int **)(a1 + 16), v5);
  if ( v4 )
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v5, v4);
  KeLeaveCriticalRegion();
}
