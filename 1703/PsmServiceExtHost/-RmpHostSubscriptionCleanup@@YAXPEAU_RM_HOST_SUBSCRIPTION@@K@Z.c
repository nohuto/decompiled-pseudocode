/*
 * XREFs of ?RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z @ 0x1800022E8
 * Callers:
 *     ?RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x180003CE8 (-RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z.c)
 *     ?RmpHostSubscriptionDeleteForRtlTree@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18002E030 (-RmpHostSubscriptionDeleteForRtlTree@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpHostSubscriptionCleanup(struct _RM_HOST_SUBSCRIPTION *a1, char a2)
{
  char *v2; // rax
  __int64 v5; // r8
  char **v6; // rcx
  struct _RM_OBJECT_HEADER *v7; // rcx

  v2 = (char *)a1 + 8;
  if ( *((_QWORD *)a1 + 1) )
  {
    v5 = *(_QWORD *)v2;
    v6 = (char **)*((_QWORD *)a1 + 2);
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || *v6 != v2 )
      __fastfail(3u);
    *v6 = (char *)v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
  v7 = (struct _RM_OBJECT_HEADER *)*((_QWORD *)a1 + 6);
  if ( v7 )
    RmpObjectRelease(v7);
  if ( (a2 & 1) == 0 && *((_QWORD *)a1 + 5) != -1LL )
    RtlRbRemoveNode(*((_QWORD *)a1 + 7) + 40LL, (char *)a1 + 24);
}
