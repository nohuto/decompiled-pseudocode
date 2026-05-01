/*
 * XREFs of RmpPolicyActivityHostMetricsInitialize @ 0x18000717C
 * Callers:
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x180006074 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     RmpEnforcementWorkCallback @ 0x180006D40 (RmpEnforcementWorkCallback.c)
 *     RmpActivityHostRevokeAllResourceSets @ 0x18003BED8 (RmpActivityHostRevokeAllResourceSets.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x18003CE40 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     RmpActivityHostQueryTotalCommit @ 0x180006290 (RmpActivityHostQueryTotalCommit.c)
 *     RmpActivityHostQueryMemUtilMetrics @ 0x18000A188 (RmpActivityHostQueryMemUtilMetrics.c)
 *     RmpActivityHostQueryPriority @ 0x18000A5A8 (RmpActivityHostQueryPriority.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

void __fastcall RmpPolicyActivityHostMetricsInitialize(struct _RM_ACTIVITY_HOST *a1, char a2, _OWORD *a3)
{
  int Priority; // eax
  int v7; // ecx
  __int16 v8; // bx
  __int16 v9; // si
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _QWORD v15[3]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v16; // [rsp+38h] [rbp-38h]
  __int16 v17; // [rsp+3Ah] [rbp-36h]
  __int16 v18; // [rsp+3Ch] [rbp-34h]
  __int128 v19; // [rsp+40h] [rbp-30h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h]
  __int128 v21; // [rsp+60h] [rbp-10h] BYREF

  memset_0(&v19, 0, 0x30uLL);
  memset_0(v15, 0, 0x20uLL);
  *(_QWORD *)&v21 = a1;
  Priority = RmpActivityHostQueryPriority(a1, (char *)&v21 + 8);
  v7 = DWORD2(v21);
  if ( Priority < 0 )
    v7 = 101;
  DWORD2(v21) = v7;
  if ( (a2 & 1) != 0 )
  {
    RmpActivityHostQueryTotalCommit((__int64)a1, (const struct _TlgProvider_t **)&v19);
    v8 = HIWORD(v21) | 1;
    HIWORD(v21) |= 1u;
  }
  else
  {
    v8 = HIWORD(v21);
  }
  v9 = a2 & 0x1E;
  if ( v9 )
  {
    v16 = v9;
    if ( (int)RmpActivityHostQueryMemUtilMetrics(a1) >= 0 )
    {
      v10 = *((_QWORD *)&v19 + 1);
      if ( (v17 & 2) != 0 )
        v10 = v15[0];
      *((_QWORD *)&v19 + 1) = v10;
      v11 = v20;
      if ( (v17 & 4) != 0 )
        v11 = v15[1];
      *(_QWORD *)&v20 = v11;
      if ( (v17 & 8) != 0 )
        WORD6(v21) ^= ((unsigned __int8)v18 ^ BYTE12(v21)) & 1;
      v12 = *((_QWORD *)&v20 + 1);
      if ( (v17 & 0x10) != 0 )
        v12 = v15[2];
      HIWORD(v21) = v17 | v8;
      *((_QWORD *)&v20 + 1) = v12;
    }
  }
  v13 = v20;
  *a3 = v19;
  v14 = v21;
  a3[1] = v13;
  a3[2] = v14;
}
