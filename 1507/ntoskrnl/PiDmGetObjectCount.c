/*
 * XREFs of PiDmGetObjectCount @ 0x1406804BC
 * Callers:
 *     PiDqQueryAppendActionEntry @ 0x1404407A4 (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     RtlNumberGenericTableElementsAvl @ 0x1401206AC (RtlNumberGenericTableElementsAvl.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140439B88 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x14043BFE0 (PiDmObjectManagerAcquireSharedLock.c)
 */

__int64 __fastcall PiDmGetObjectCount(int a1)
{
  void *ObjectManagerForObjectType; // rbx
  ULONG v2; // edi
  struct _KTHREAD *CurrentThread; // rdx
  __int16 v4; // cx

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  PiDmObjectManagerAcquireSharedLock((struct _ERESOURCE *)ObjectManagerForObjectType);
  v2 = RtlNumberGenericTableElementsAvl((PRTL_AVL_TABLE)ObjectManagerForObjectType + 1);
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  CurrentThread = KeGetCurrentThread();
  v4 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v4;
  if ( !v4
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v2;
}
