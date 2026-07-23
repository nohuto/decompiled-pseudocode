/*
 * XREFs of PiDmGetObjectCount @ 0x14062F98C
 * Callers:
 *     PiDqQueryAppendActionEntry @ 0x14048CEA0 (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlNumberGenericTableElementsAvl @ 0x14010B6FC (RtlNumberGenericTableElementsAvl.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1404E2298 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1404E450C (PiDmObjectManagerAcquireSharedLock.c)
 */

__int64 __fastcall PiDmGetObjectCount(int a1)
{
  void *ObjectManagerForObjectType; // rdi
  ULONG v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  PiDmObjectManagerAcquireSharedLock((struct _ERESOURCE *)ObjectManagerForObjectType);
  v2 = RtlNumberGenericTableElementsAvl((PRTL_AVL_TABLE)ObjectManagerForObjectType + 1);
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v3, v4, v5);
  return v2;
}
