/*
 * XREFs of ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z @ 0x1C00DB29C
 * Callers:
 *     DxgkQueryStatistics @ 0x1C012B490 (DxgkQueryStatistics.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C012BA90 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C012E080 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C012F410 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C014A300 (DxgkGetProcessSchedulingPriorityClass.c)
 * Callees:
 *     <none>
 */

DXGPROCESSMUTEXBYHANDLE *__fastcall DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE(
        DXGPROCESSMUTEXBYHANDLE *this,
        void *a2,
        char a3)
{
  DXGPROCESSMUTEXBYHANDLE *result; // rax

  *((_QWORD *)this + 2) = 0LL;
  result = this;
  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 24) = a3;
  *((_BYTE *)this + 25) = 0;
  return result;
}
