/*
 * XREFs of ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18002E948
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800025B8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementWorkCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800057C0 (-RmpEnforcementWorkCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018264 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18002E124 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostRemoveFromRemediationGroup(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  struct _RM_ACTIVITY_HOST **v5; // rax

  v3 = *((_QWORD *)a1 + 135);
  v4 = *((_QWORD *)a1 + 136);
  v5 = (struct _RM_ACTIVITY_HOST **)*((_QWORD *)a1 + 137);
  if ( *(struct _RM_ACTIVITY_HOST **)(v4 + 8) != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1088)
    || *v5 != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1088) )
  {
    __fastfail(3u);
  }
  *v5 = (struct _RM_ACTIVITY_HOST *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  *((_QWORD *)a1 + 135) = 0LL;
  if ( *(_QWORD *)v3 == v3 && a2 )
    SetEvent(*(HANDLE *)(v3 + 16));
  RmpObjectRelease(a1);
}
