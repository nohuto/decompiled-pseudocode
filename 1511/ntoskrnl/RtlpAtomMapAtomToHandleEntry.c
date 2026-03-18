/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x1403F6EC0
 * Callers:
 *     RtlLookupAtomInAtomTable @ 0x1403F6B10 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1403F6D70 (RtlpHashStringToAtom.c)
 *     RtlPinAtomInAtomTable @ 0x14045FA88 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14045FED4 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ExMapHandleToPointer @ 0x1403F7030 (ExMapHandleToPointer.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 */

unsigned __int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (__int64 *)ExMapHandleToPointer(*(_QWORD *)(a1 + 16), (unsigned int)(4 * a2));
  if ( v4 )
  {
    v5 = *v4 >> 16;
    ExUnlockHandleTableEntry(*(_QWORD *)(a1 + 16), v4);
    KeLeaveCriticalRegion();
    return v5 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
