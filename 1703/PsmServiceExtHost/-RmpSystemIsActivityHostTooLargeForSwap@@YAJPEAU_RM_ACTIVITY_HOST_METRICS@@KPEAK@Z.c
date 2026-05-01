/*
 * XREFs of ?RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z @ 0x180002EF0
 * Callers:
 *     ?RmpEnforcementWorkCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800057C0 (-RmpEnforcementWorkCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180007520 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpSystemIsActivityHostTooLargeForSwap(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        unsigned int *a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v6; // edi
  BOOL inited; // eax
  unsigned int v8; // r8d
  __int64 result; // rax

  v3 = *((_QWORD *)a1 + 3);
  v6 = 61440;
  inited = InitOnceExecuteOnce(&DiskRateInitOnce, MemUtilQueryDiskRate, &DiskRateContext, 0LL);
  v8 = 0;
  if ( inited )
    v6 = dword_18004D6CC;
  LOBYTE(v8) = (unsigned int)(1000 * (v3 >> 10) / v6) > a2;
  result = 0LL;
  *a3 = v8;
  return result;
}
