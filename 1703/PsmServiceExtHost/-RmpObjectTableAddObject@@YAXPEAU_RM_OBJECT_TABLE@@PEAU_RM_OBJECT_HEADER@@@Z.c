/*
 * XREFs of ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180033988
 * Callers:
 *     ?RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F8CC (-RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION.c)
 *     ?RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002FB60 (-RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 * Callees:
 *     ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180013110 (-RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpObjectTableAddObject(struct _RM_OBJECT_TABLE *a1, struct _RM_OBJECT_HEADER *a2)
{
  RtlAcquireSRWLockExclusive((char *)a1 + 16);
  RmpObjectTableAddObjectWithLock((unsigned __int64)a1, a2);
  RtlReleaseSRWLockExclusive((char *)a1 + 16);
}
