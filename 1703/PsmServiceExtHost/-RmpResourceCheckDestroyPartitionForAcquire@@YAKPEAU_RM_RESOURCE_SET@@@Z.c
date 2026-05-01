/*
 * XREFs of ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x1800128A0
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000DF50 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010460 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180013738 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180031C08 (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPartitionTableFindActivePartition@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAX@Z @ 0x180031C84 (-RmpPartitionTableFindActivePartition@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAX@Z.c)
 *     ?RmpPartitionTablePartitionExists@@YAKPEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x180031CF0 (-RmpPartitionTablePartitionExists@@YAKPEAU_RM_PARTITION_TABLE@@PEAXK@Z.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A1C (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A60 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 */

__int64 __fastcall RmpResourceCheckDestroyPartitionForAcquire(struct _RM_RESOURCE_SET *a1, __int64 a2, unsigned int a3)
{
  void *v3; // rbp
  unsigned int v4; // ebx
  __int64 v7; // r14
  struct _RM_PARTITION *ActivePartition; // rax
  struct _RM_PARTITION *v9; // rdi
  __int64 v10; // rcx
  struct _RM_OBJECT_HEADER *Next; // rax
  struct _RM_OBJECT_HEADER *v12; // rdi
  const struct _TlgProvider_t *v13; // rcx
  const struct _TlgProvider_t *v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-60h] BYREF
  __int64 *v19; // [rsp+58h] [rbp-40h]
  __int64 v20; // [rsp+60h] [rbp-38h]

  v3 = (void *)*((_QWORD *)a1 + 15);
  v4 = 0;
  if ( v3 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 14) + 24LL);
    if ( RmpPartitionTablePartitionExists((struct _RM_PARTITION_TABLE *)(v7 + 312), *((void **)a1 + 15), a3) )
    {
      ActivePartition = RmpPartitionTableFindActivePartition((struct _RM_PARTITION_TABLE *)(v7 + 312), v3);
      v9 = ActivePartition;
      if ( ActivePartition )
      {
        RmpPartitionRevokeAllSets(ActivePartition, *((struct ExecutionModel::ResourceSet **)a1 + 5));
        RmpPartitionRelease(v9);
      }
      return 1;
    }
    else
    {
      RmpObjectTableEnumerationBegin(
        (struct _RM_OBJECT_TABLE *)(v7 + 536),
        (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&pData);
      while ( 1 )
      {
        Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&pData);
        v12 = Next;
        if ( !Next )
          break;
        v10 = *((_QWORD *)Next + 15);
        if ( v10 && Next != a1 && (int)NtCompareObjects(v10, v3) >= 0 )
        {
          NtClose(*((HANDLE *)v12 + 15));
          *((_QWORD *)v12 + 15) = 0LL;
        }
        RmpObjectRelease(v12);
      }
      RtlReleaseSRWLockShared(pData.Ptr + 16);
      NtClose(v3);
      *((_QWORD *)a1 + 15) = 0LL;
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v13, 9uLL) )
      {
        v17 = *((_QWORD *)a1 + 3);
        v19 = &v17;
        v20 = 8LL;
        TlgWrite(v14, &unk_1800410C0, v15, v16, 3u, &pData);
      }
    }
  }
  return v4;
}
