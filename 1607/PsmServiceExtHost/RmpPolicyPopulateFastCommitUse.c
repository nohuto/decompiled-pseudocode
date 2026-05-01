/*
 * XREFs of RmpPolicyPopulateFastCommitUse @ 0x1800048C8
 * Callers:
 *     RmpPolicyGetUsageLimitsAndMetricsForAcquire @ 0x18000482C (RmpPolicyGetUsageLimitsAndMetricsForAcquire.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x1800339C4 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_.c)
 * Callees:
 *     RmpActivityHostIsRunnable @ 0x180004940 (RmpActivityHostIsRunnable.c)
 */

void __fastcall RmpPolicyPopulateFastCommitUse(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int16 v8; // r11
  __int64 v9; // rax

  v3 = a1;
  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = (__int64 *)(a3 + 40);
    v6 = a2;
    do
    {
      v7 = v5[1];
      v8 = *(_WORD *)(v7 + 666);
      if ( (v8 & 0x20) != 0
        && ((*(_BYTE *)(*(_QWORD *)(v7 + 40) + 1840LL) & 0x10) != 0 || !(unsigned int)RmpActivityHostIsRunnable(v7, 1LL))
        && (v8 & 0x40) != 0 )
      {
        v9 = *(v5 - 5);
      }
      else
      {
        v9 = *v5;
      }
      v4 += v9;
      v5 += 8;
      *(_QWORD *)(v3 + 16) = v4;
      --v6;
    }
    while ( v6 );
  }
  *(_DWORD *)(v3 + 64) |= 1u;
}
