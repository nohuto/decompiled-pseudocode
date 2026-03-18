/*
 * XREFs of ?CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x18008E6B4
 * Callers:
 *     ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x18008E4D4 (-ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800FCA40 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPartitionVerticalBlankScheduler::CalculateFrameTimeDelta(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 2789) + 240LL);
  if ( v2 )
    return *(_QWORD *)(*((_QWORD *)this + 2788) + 240LL) - v2;
  v3 = (*((_QWORD *)this + 26) - *((_QWORD *)this + 7)) / *((_QWORD *)this + 10);
  return *((_QWORD *)this + 3)
       + 10000000 * v3
       + (unsigned __int64)(10000000 * (*((_QWORD *)this + 26) - *((_QWORD *)this + 7) - *((_QWORD *)this + 10) * v3))
       / *((_QWORD *)this + 10);
}
