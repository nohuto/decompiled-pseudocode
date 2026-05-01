/*
 * XREFs of ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x180033540
 * Callers:
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180037358 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001E2C (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall RmpPolicyPopulateFastCommitUse(struct _RM_SYSTEM_MEMORY_METRICS *a1, struct _RM_POLICY_WORK_BUFFER *a2)
{
  unsigned int v3; // r10d
  struct _RM_SYSTEM_MEMORY_METRICS *v4; // r8
  int v5; // edx
  __int64 v6; // r11
  __int64 *v7; // r9
  __int64 v8; // rcx
  __int16 v9; // di
  __int64 v10; // rax

  v3 = 0;
  v4 = a1;
  v5 = 1;
  if ( *((_DWORD *)a2 + 9) )
  {
    v6 = *((_QWORD *)a1 + 4);
    do
    {
      v7 = (__int64 *)(*(_QWORD *)a2 + ((unsigned __int64)v3 << 6));
      v8 = v7[6];
      v9 = *(_WORD *)(v8 + 666);
      if ( (v9 & 0x20) != 0
        && ((*(_BYTE *)(*(_QWORD *)(v8 + 40) + 508LL) & 4) != 0
         || !(unsigned int)RmpActivityHostIsRunnable((struct _RM_ACTIVITY_HOST *)v8, v5))
        && (v9 & 0x40) != 0 )
      {
        v10 = *v7;
      }
      else
      {
        v10 = v7[5];
      }
      v6 += v10;
      v3 += v5;
      *((_QWORD *)v4 + 4) = v6;
    }
    while ( v3 < *((_DWORD *)a2 + 9) );
  }
  *((_DWORD *)v4 + 18) |= v5;
}
