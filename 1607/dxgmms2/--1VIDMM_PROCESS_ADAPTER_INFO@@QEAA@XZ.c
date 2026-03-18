/*
 * XREFs of ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C005D488
 * Callers:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0010148 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C005D46C (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::~VIDMM_PROCESS_ADAPTER_INFO(void **this)
{
  char *v2; // rcx
  unsigned int i; // ebp
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void **v17; // rcx
  __int64 **v18; // rcx
  __int64 v19; // rbx
  _QWORD *v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rbx
  _QWORD *v28; // rax

  operator delete[](this[2]);
  v2 = (char *)*this;
  for ( i = 0; i < *((_DWORD *)*this + 1604); ++i )
  {
    v4 = (__int64 *)((char *)this[6] + 264 * i);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v2 + 40968));
    v5 = *v4;
    if ( *v4 )
    {
      v18 = (__int64 **)v4[1];
      if ( *(__int64 **)(v5 + 8) != v4 || *v18 != v4 )
        __fastfail(3u);
      *v18 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v18;
    }
    v6 = (__int64)*this + 40968;
    *(_QWORD *)(v6 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
    v11 = v4 + 25;
    v12 = 2LL;
    do
    {
      if ( *(v11 - 8) || *(v11 - 16) || *v11 )
      {
        v19 = *v11;
        v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9, v10);
        v20[7] = 0LL;
        v20[3] = 270LL;
        v20[4] = 51LL;
        v20[5] = this;
        v20[6] = v19;
        WdLogEvent5_WdCriticalError(v20);
      }
      ++v11;
      --v12;
    }
    while ( v12 );
    if ( VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v4) )
    {
      v21 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v4);
      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22, v24, v25);
      v26[7] = 0LL;
      v26[3] = 270LL;
      v26[4] = 51LL;
      v26[5] = this;
      v26[6] = v21;
      WdLogEvent5_WdCriticalError(v26);
    }
    if ( v4[27] )
    {
      v27 = v4[27];
      v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13, v15, v16);
      v28[7] = 0LL;
      v28[3] = 270LL;
      v28[4] = 51LL;
      v28[5] = this;
      v28[6] = v27;
      WdLogEvent5_WdCriticalError(v28);
    }
    v2 = (char *)*this;
  }
  v17 = (void **)this[6];
  if ( v17 != this + 7 )
  {
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
  }
}
