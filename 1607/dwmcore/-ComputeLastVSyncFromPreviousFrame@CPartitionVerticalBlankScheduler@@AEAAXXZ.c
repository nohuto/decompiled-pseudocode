/*
 * XREFs of ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180044948
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1801118EC (-ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  int v4; // eax
  unsigned __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v2 = *(_QWORD *)(*((_QWORD *)this + 2742) + 232LL);
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 27);
    v6 = *((_QWORD *)this + 2741);
    v7 = *(_QWORD *)(v6 + 248);
    v8 = (v7 + (v5 >> 4) - v2) / v5;
    if ( v8 <= 7 )
      v7 = v2 + v5 * v8;
    *(_QWORD *)(v6 + 232) = v7;
    *(_DWORD *)(*((_QWORD *)this + 2741) + 100LL) = v8 + *(_DWORD *)(*((_QWORD *)this + 2742) + 100LL);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 2741) + 232LL) = *(_QWORD *)(*((_QWORD *)this + 2741) + 248LL);
    v3 = *((_QWORD *)this + 2741);
    v4 = *(_DWORD *)(v3 + 1340);
    if ( v4 )
      *(_DWORD *)(v3 + 100) = v4 + 1;
    else
      *(_DWORD *)(v3 + 100) = *(_DWORD *)(*((_QWORD *)this + 2742) + 100LL) + 1;
  }
}
