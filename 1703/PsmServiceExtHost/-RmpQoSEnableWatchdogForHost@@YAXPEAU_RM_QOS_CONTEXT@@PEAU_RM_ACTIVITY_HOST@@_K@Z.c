/*
 * XREFs of ?RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x180001364
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000101C (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpQoSEnableWatchdogForHost(
        struct _RM_QOS_CONTEXT *a1,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned __int64 a3)
{
  struct _RM_QOS_CONTEXT **v6; // rcx
  struct _RM_QOS_CONTEXT *v7; // rax
  __int64 v8; // rax

  RmpObjectAddRef(a2);
  v6 = (struct _RM_QOS_CONTEXT **)*((_QWORD *)a1 + 1);
  v7 = (struct _RM_ACTIVITY_HOST *)((char *)a2 + 840);
  if ( *v6 != a1 )
    __fastfail(3u);
  *(_QWORD *)v7 = a1;
  *((_QWORD *)a2 + 106) = v6;
  *v6 = v7;
  *((_QWORD *)a1 + 1) = v7;
  v8 = -1LL;
  if ( a3 + 10000LL * *((unsigned int *)a1 + 6) >= a3 )
    v8 = a3 + 10000LL * *((unsigned int *)a1 + 6);
  *((_QWORD *)a2 + 109) = v8;
}
