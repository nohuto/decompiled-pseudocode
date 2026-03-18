/*
 * XREFs of ?CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x1800DF450
 * Callers:
 *     ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x1800E1A90 (-ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPartitionVerticalBlankScheduler::CalculateFrameTimeDelta(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rcx
  __int64 v4; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 2788) + 240LL);
  if ( v2 )
    return *(_QWORD *)(*((_QWORD *)this + 2787) + 240LL) - v2;
  v4 = (*((_QWORD *)this + 25) - *((_QWORD *)this + 6)) / *((_QWORD *)this + 9);
  return *((_QWORD *)this + 2)
       + 10000000 * v4
       + (unsigned __int64)(10000000 * (*((_QWORD *)this + 25) - *((_QWORD *)this + 6) - *((_QWORD *)this + 9) * v4))
       / *((_QWORD *)this + 9);
}
