/*
 * XREFs of ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008E42C
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800FC874 (-ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax

  v2 = *(_QWORD *)(*((_QWORD *)this + 2789) + 232LL);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 26);
    v4 = *((_QWORD *)this + 2788);
    v5 = *(_QWORD *)(v4 + 248);
    v6 = (v5 + (v3 >> 4) - v2) / v3;
    if ( v6 <= 7 )
      v5 = v2 + v3 * v6;
    *(_QWORD *)(v4 + 232) = v5;
    *(_DWORD *)(*((_QWORD *)this + 2788) + 100LL) = v6 + *(_DWORD *)(*((_QWORD *)this + 2789) + 100LL);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 2788) + 232LL) = *(_QWORD *)(*((_QWORD *)this + 2788) + 248LL);
    v7 = *((_QWORD *)this + 2788);
    v8 = *(_DWORD *)(v7 + 1364);
    if ( v8 )
      *(_DWORD *)(v7 + 100) = v8 + 1;
    else
      *(_DWORD *)(v7 + 100) = *(_DWORD *)(*((_QWORD *)this + 2789) + 100LL) + 1;
  }
}
