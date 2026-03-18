/*
 * XREFs of ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C00324C4
 * Callers:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0003E94 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C00325E4 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
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
  __int64 *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  void **v13; // rcx
  __int64 **v14; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rax

  operator delete(this[2]);
  v2 = (char *)*this;
  for ( i = 0; i < *((_DWORD *)*this + 1604); ++i )
  {
    v4 = (__int64 *)((char *)this[6] + 240 * i);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v2 + 40648));
    v5 = *v4;
    if ( *v4 )
    {
      v14 = (__int64 **)v4[1];
      if ( *(__int64 **)(v5 + 8) != v4 || *v14 != v4 )
        __fastfail(3u);
      *v14 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v14;
    }
    v6 = (__int64)*this + 40648;
    *(_QWORD *)(v6 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
    v9 = v4 + 22;
    v10 = 2LL;
    do
    {
      if ( *(v9 - 5) || *(v9 - 13) || *v9 )
      {
        v15 = *v9;
        v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7);
        v16[7] = 0LL;
        v16[3] = 270LL;
        v16[4] = 51LL;
        v16[5] = this;
        v16[6] = v15;
        WdLogEvent5_WdCriticalError(v16);
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    if ( VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v4) )
    {
      v17 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v4);
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18);
      v20[7] = 0LL;
      v20[3] = 270LL;
      v20[4] = 51LL;
      v20[5] = this;
      v20[6] = v17;
      WdLogEvent5_WdCriticalError(v20);
    }
    if ( v4[24] )
    {
      v21 = v4[24];
      v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
      v22[7] = 0LL;
      v22[3] = 270LL;
      v22[4] = 51LL;
      v22[5] = this;
      v22[6] = v21;
      WdLogEvent5_WdCriticalError(v22);
    }
    v2 = (char *)*this;
  }
  v13 = (void **)this[6];
  if ( v13 != this + 7 )
  {
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
  }
}
