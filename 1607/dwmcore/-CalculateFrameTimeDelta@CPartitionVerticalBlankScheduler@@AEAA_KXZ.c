/*
 * XREFs of ?CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x1800449F8
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180111AC0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPartitionVerticalBlankScheduler::CalculateFrameTimeDelta(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 2742) + 240LL);
  if ( v2 )
    return *(_QWORD *)(*((_QWORD *)this + 2741) + 240LL) - v2;
  v3 = (*((_QWORD *)this + 27) - *((_QWORD *)this + 7)) / *((_QWORD *)this + 10);
  return *((_QWORD *)this + 3)
       + 10000000 * v3
       + (unsigned __int64)(10000000 * (*((_QWORD *)this + 27) - *((_QWORD *)this + 7) - *((_QWORD *)this + 10) * v3))
       / *((_QWORD *)this + 10);
}
