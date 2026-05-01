/*
 * XREFs of ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A60
 * Callers:
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x1800128A0 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F43C (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     RmpTracingControlCallback @ 0x180020320 (RmpTracingControlCallback.c)
 *     ?RmpResourceSetTableEnumerationGetNext@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_RS_ENUMERATION_CONTEXT@@@Z @ 0x18002D8E0 (-RmpResourceSetTableEnumerationGetNext@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_RS_ENUMERATION_CONTEXT@@.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800304DC (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180031C08 (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180035AF0 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

struct _RM_OBJECT_HEADER *__fastcall RmpObjectTableEnumerationGetNext(struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *a1)
{
  struct _RM_OBJECT_HEADER **v1; // rbx
  struct _RM_OBJECT_HEADER *v2; // rbx
  _BYTE *i; // rdx

  v1 = (struct _RM_OBJECT_HEADER **)*((_QWORD *)a1 + 2);
  if ( !v1 || (v2 = *v1, ((unsigned __int8)v2 & 1) != 0) )
  {
    for ( i = (_BYTE *)(*((_QWORD *)a1 + 3) + 8LL); ; i += 8 )
    {
      if ( (unsigned __int64)i >= *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL)
                                + 8 * ((unsigned __int64)*(unsigned int *)(*((_QWORD *)a1 + 1) + 4LL) >> 5) )
      {
        v2 = 0LL;
        goto LABEL_9;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v2 = *(struct _RM_OBJECT_HEADER **)i;
    *((_QWORD *)a1 + 3) = i;
  }
  *((_QWORD *)a1 + 2) = v2;
LABEL_9:
  if ( !v2 )
    return 0LL;
  RmpObjectAddRef(v2);
  return v2;
}
