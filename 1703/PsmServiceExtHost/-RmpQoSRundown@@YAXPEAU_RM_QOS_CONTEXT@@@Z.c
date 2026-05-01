/*
 * XREFs of ?RmpQoSRundown@@YAXPEAU_RM_QOS_CONTEXT@@@Z @ 0x180037514
 * Callers:
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180032E34 (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z @ 0x1800011AC (-RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z.c)
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800011C0 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpQoSRundown(struct _RM_QOS_CONTEXT *a1)
{
  char *v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  struct _RM_ACTIVITY_ENFORCEMENT_INFO *v6; // rax
  __int64 v7; // rcx

  RtlEnterCriticalSection(&RmpGlobalLock);
  while ( 1 )
  {
    v6 = RmpQoSGetEarliestHostInfo(a1);
    if ( !v6 )
      break;
    v2 = (char *)v6 - 672;
    *((_DWORD *)v6 + 36) |= 0x10u;
    RmpQoSSetForHost(a1, (struct _RM_ACTIVITY_ENFORCEMENT_INFO *)((char *)v6 - 672), 0);
    v3 = v2 + 840;
    v4 = *((_QWORD *)v2 + 105);
    v5 = (_QWORD *)*((_QWORD *)v2 + 106);
    if ( *(char **)(v4 + 8) != v2 + 840 || (_QWORD *)*v5 != v3 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *v3 = 0LL;
    *((_QWORD *)v2 + 106) = 0LL;
    RmpObjectRelease((struct _RM_OBJECT_HEADER *)v2);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  v7 = *((_QWORD *)a1 + 2);
  if ( v7 )
  {
    TpSetTimer(v7, 0LL, 0LL, 0LL);
    TpWaitForTimer(*((_QWORD *)a1 + 2), 1LL);
  }
}
