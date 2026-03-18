/*
 * XREFs of ?ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800FC874
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800FCA40 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008E42C (-ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ComputeVSyncInfo(CPartitionVerticalBlankScheduler *this)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // r10
  unsigned __int64 v5; // rtt
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx

  v1 = *((_QWORD *)this + 26);
  v3 = *((_QWORD *)this + 2788);
  if ( !*(_BYTE *)(v3 + 648) || *(_BYTE *)(v3 + 1368) )
  {
    CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(this);
  }
  else
  {
    *(_QWORD *)(v3 + 232) = *(_QWORD *)(v3 + 688);
    *(_DWORD *)(*((_QWORD *)this + 2788) + 100LL) = *(_DWORD *)(*((_QWORD *)this + 2788) + 680LL);
  }
  v4 = *((_QWORD *)this + 2788);
  v5 = *(_QWORD *)(v4 + 232) - *((_QWORD *)this + 7);
  v6 = 10000000 * (v5 - *((_QWORD *)this + 10) * (v5 / *((_QWORD *)this + 10))) / *((_QWORD *)this + 10)
     + 10000000 * (v5 / *((_QWORD *)this + 10));
  *(_QWORD *)(v4 + 240) = v6;
  *(_QWORD *)(v4 + 240) = v6 + *((_QWORD *)this + 3);
  v7 = *((_QWORD *)this + 2789);
  v8 = *(_QWORD *)(v7 + 232);
  if ( v8 )
    *((_QWORD *)this + 2790) = ((v1 >> 4) + *(_QWORD *)(*((_QWORD *)this + 2788) + 232LL) - v8) / v1;
  else
    *((_QWORD *)this + 2790) = 1LL;
  v9 = *((_QWORD *)this + 2788);
  v10 = *(_QWORD *)(v9 + 248);
  if ( *(_QWORD *)(v9 + 232) > v10
    || *(_QWORD *)(v9 + 240) > *(_QWORD *)(v9 + 256)
    || *(_BYTE *)(v9 + 648) && *(_QWORD *)(v9 + 688) < *(_QWORD *)(v7 + 248) )
  {
    *(_QWORD *)(v9 + 232) = v10;
    *(_QWORD *)(*((_QWORD *)this + 2788) + 240LL) = *(_QWORD *)(*((_QWORD *)this + 2788) + 256LL);
  }
  *(_QWORD *)(*((_QWORD *)this + 2788) + 88LL) = *((_QWORD *)this + 2790) + *(_QWORD *)(*((_QWORD *)this + 2789) + 88LL);
  return 0LL;
}
