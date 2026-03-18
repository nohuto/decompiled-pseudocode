/*
 * XREFs of RtlpFreeHandleForAtom @ 0x1404603E4
 * Callers:
 *     RtlpFreeAllAtom @ 0x14009A140 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x140648C0C (RtlEmptyAtomTable.c)
 * Callees:
 *     ExDestroyHandle @ 0x1403F2154 (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x1403F7030 (ExMapHandleToPointer.c)
 */

void __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  v5 = 4 * (unsigned int)*(unsigned __int16 *)(a2 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExMapHandleToPointer(*(_QWORD *)(a1 + 16), v5);
  if ( v4 )
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v5, v4);
  KeLeaveCriticalRegion();
}
