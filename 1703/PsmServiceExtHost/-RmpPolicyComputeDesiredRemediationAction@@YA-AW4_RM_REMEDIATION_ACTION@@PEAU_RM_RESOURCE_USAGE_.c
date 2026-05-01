/*
 * XREFs of ?RmpPolicyComputeDesiredRemediationAction@@YA?AW4_RM_REMEDIATION_ACTION@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAW4_RM_ACTIVITY_HOST_METRIC@@2PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180012E70
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180012B40 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmpPolicyComputeDesiredRemediationAction(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int *a4,
        _OWORD *a5,
        unsigned int *a6)
{
  __int64 v10; // r11
  __int64 *v11; // rax
  __int64 v12; // rbp
  unsigned int v13; // r9d
  unsigned __int64 v14; // r8
  unsigned int *v15; // rbx
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 result; // rax
  unsigned int v20; // r10d
  int v21; // eax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // [rsp+20h] [rbp-58h] BYREF
  __int128 v28; // [rsp+30h] [rbp-48h]
  __int128 v29; // [rsp+40h] [rbp-38h]
  __int128 v30; // [rsp+50h] [rbp-28h]
  __int128 v31; // [rsp+60h] [rbp-18h]

  memset_0(&v27, 0, 0x50uLL);
  v10 = a3[1];
  v11 = (__int64 *)(a1 + 88);
  v12 = a3[5];
  v13 = 0;
  v14 = a3[2];
  v15 = (unsigned int *)(a2 + 16);
  *((_QWORD *)&v27 + 1) = v10;
  *((_QWORD *)&v29 + 1) = v12;
  v16 = 4;
  while ( 1 )
  {
    v17 = *(v11 - 5);
    if ( v14 >= v17 )
    {
      v20 = *v15;
      if ( v13 <= v16 )
        v13 = v16;
      if ( v20 )
      {
        *(_QWORD *)&v28 = *(v11 - 5);
        *((_QWORD *)&v28 + 1) = v10 - v17;
        v21 = 1;
        goto LABEL_14;
      }
    }
    v18 = *v11;
    if ( a3[7] >= (unsigned __int64)*v11 )
    {
      v20 = v15[5];
      if ( v13 <= v16 )
        v13 = v16;
      if ( v20 )
        break;
    }
    --v11;
    --v15;
    if ( !--v16 )
    {
      result = 0LL;
      *a6 = v13;
      return result;
    }
  }
  *((_QWORD *)&v30 + 1) = *v11;
  *(_QWORD *)&v30 = v12 - v18;
  v21 = 3;
LABEL_14:
  v22 = v27;
  v23 = v28;
  *a4 = v21;
  *a5 = v22;
  v24 = v29;
  a5[1] = v23;
  v25 = v30;
  a5[2] = v24;
  v26 = v31;
  a5[3] = v25;
  a5[4] = v26;
  *a6 = v13;
  return v20;
}
