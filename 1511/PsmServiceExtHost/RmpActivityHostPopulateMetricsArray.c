/*
 * XREFs of RmpActivityHostPopulateMetricsArray @ 0x18001D5A4
 * Callers:
 *     RmpEnforcementWorkCallback @ 0x180008C50 (RmpEnforcementWorkCallback.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x18001EE10 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     RmpActivityHostRevokeAllResourceSets @ 0x18004124C (RmpActivityHostRevokeAllResourceSets.c)
 * Callees:
 *     RmpActivityHostQueryCommit @ 0x180015DC0 (RmpActivityHostQueryCommit.c)
 *     RmpSystemQueryMemUtilMetricsForHosts @ 0x18001C8E8 (RmpSystemQueryMemUtilMetricsForHosts.c)
 *     RmpActivityHostQueryPriority @ 0x18001D6E0 (RmpActivityHostQueryPriority.c)
 */

void __fastcall RmpActivityHostPopulateMetricsArray(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  unsigned __int16 v6; // r8
  __int64 v7; // r12
  __int16 v8; // r15
  __int16 v9; // r14
  _WORD *v10; // rbp
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned int v13; // edi
  unsigned int v14; // esi

  v4 = a2;
  v6 = a3 & 0x16;
  if ( v6 )
    RmpSystemQueryMemUtilMetricsForHosts(a1, a2, v6);
  if ( (_DWORD)v4 )
  {
    v7 = v4;
    v8 = a3 & 1;
    v9 = a3 & 8;
    v10 = (_WORD *)(a1 + 54);
    do
    {
      v11 = *(_QWORD *)(v10 - 7);
      if ( (int)RmpActivityHostQueryPriority(v11, v10 - 3) < 0 )
        *(_DWORD *)(v10 - 3) = 101;
      if ( v8 )
      {
        RmpActivityHostQueryCommit(v11, (unsigned __int64 *)(v10 - 23), (unsigned __int64 *)(v10 - 27));
        *v10 |= 1u;
      }
      if ( v9 && (*(_BYTE *)v10 & 4) != 0 )
      {
        v12 = *(_QWORD *)(v10 - 15);
        v13 = 61440;
        v14 = *((_DWORD *)RmSvcGlobals + 398);
        if ( InitOnceExecuteOnce(&DiskRateInitOnce, MemUtilQueryDiskRate, &DiskRateContext, 0LL) )
          v13 = dword_1800717A4;
        *v10 |= 8u;
        if ( (unsigned int)(1000 * (v12 >> 10) / v13) > v14 )
          *(v10 - 1) |= 1u;
      }
      v10 += 28;
      --v7;
    }
    while ( v7 );
  }
}
