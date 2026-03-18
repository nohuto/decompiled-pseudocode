/*
 * XREFs of PiDmGetObjectCount @ 0x1406058EC
 * Callers:
 *     PiDqQueryAppendActionEntry @ 0x14045F450 (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     RtlNumberGenericTableElementsAvl @ 0x14000265C (RtlNumberGenericTableElementsAvl.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14043D718 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x140440CBC (PiDmObjectManagerAcquireSharedLock.c)
 */

__int64 __fastcall PiDmGetObjectCount(int a1)
{
  void *ObjectManagerForObjectType; // rdi
  ULONG v2; // ebx

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  PiDmObjectManagerAcquireSharedLock((struct _ERESOURCE *)ObjectManagerForObjectType);
  v2 = RtlNumberGenericTableElementsAvl((PRTL_AVL_TABLE)ObjectManagerForObjectType + 1);
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v2;
}
