/*
 * XREFs of ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180031C08
 * Callers:
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x1800128A0 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18002E9A8 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A1C (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A60 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 */

void __fastcall RmpPartitionRevokeAllSets(struct _RM_PARTITION *a1, struct ExecutionModel::ResourceSet *a2)
{
  struct _RM_OBJECT_HEADER *v4; // rcx
  struct _RM_OBJECT_HEADER *Next; // rax
  struct _RM_OBJECT_HEADER *v6; // rbx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  RmpObjectTableEnumerationBegin(
    (struct _RM_OBJECT_TABLE *)(*((_QWORD *)a1 + 3) + 16LL),
    (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v7);
  while ( 1 )
  {
    Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v7);
    v6 = Next;
    if ( !Next )
      break;
    v4 = Next;
    if ( *((struct _RM_PARTITION **)Next + 6) == a1 )
    {
      RmpActivityHostRevokeResourceSets((__int64)Next, 2u, 0xEu, (__int64)a2);
      v4 = v6;
    }
    RmpObjectRelease(v4);
  }
  RtlReleaseSRWLockShared(v7[0] + 16LL);
}
