/*
 * XREFs of ?RmpResourceSetGetHostId@@YA_KPEAU_RM_RESOURCE_SET@@@Z @ 0x180018B6C
 * Callers:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x1800187E0 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180018980 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RmpResourceSetGetHostId(struct _RM_RESOURCE_SET *a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 1392LL);
  if ( v1 )
    return *(_QWORD *)(v1 + 24);
  else
    return -1LL;
}
