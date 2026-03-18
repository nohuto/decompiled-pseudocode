/*
 * XREFs of ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180065D00
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180066480 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  *((_QWORD *)this + 2797) = *(_QWORD *)(*((_QWORD *)this + 2787) + 248LL);
  *(_QWORD *)((char *)this + 22356) = *(_QWORD *)(*((_QWORD *)this + 2787) + 232LL);
  *(_QWORD *)((char *)this + 22364) = *(_QWORD *)(*((_QWORD *)this + 2787) + 88LL);
  *((_DWORD *)this + 5598) = *(_DWORD *)(*((_QWORD *)this + 2787) + 16LL);
  *((_DWORD *)this + 5593) = *(_DWORD *)(*((_QWORD *)this + 2787) + 100LL);
  *(_QWORD *)((char *)this + 22396) = *(_QWORD *)(*((_QWORD *)this + 2787) + 80LL);
  *((_QWORD *)this + 2798) = **((_QWORD **)this + 2787);
  *(_QWORD *)((char *)this + 22332) = *((_QWORD *)this + 22);
  *(_QWORD *)((char *)this + 22340) = *((_QWORD *)this + 25);
  *(_QWORD *)((char *)this + 22348) = *(_QWORD *)((char *)this + 212);
  *((_QWORD *)this + 2805) = *((_QWORD *)this + 3159);
  *((_DWORD *)this + 5612) = *((_DWORD *)this + 6316);
  v1 = *((unsigned int *)this + 5572);
  if ( (_DWORD)v1 != -1 )
  {
    *(_QWORD *)((char *)this + 22404) = *((_QWORD *)this + 172 * v1 + 33);
    *((_DWORD *)this + 5603) = *((_DWORD *)this + 344 * *((unsigned int *)this + 5572) + 70);
  }
  v2 = *((unsigned int *)this + 5573);
  if ( (_DWORD)v2 != -1 )
  {
    *((_QWORD *)this + 2802) = *((_QWORD *)this + 172 * v2 + 33);
    *(_QWORD *)((char *)this + 22428) = *((_QWORD *)this + 172 * *((unsigned int *)this + 5573) + 43);
  }
  *((_DWORD *)this + 5606) = *(_DWORD *)(*((_QWORD *)this + 2787) + 664LL);
  *((_DWORD *)this + 5609) = *(_DWORD *)(*((_QWORD *)this + 2787) + 668LL);
  *(_QWORD *)((char *)this + 22628) = *(_QWORD *)((char *)this + 22620);
  *(_QWORD *)((char *)this + 22620) = *((unsigned int *)this + 5606);
}
