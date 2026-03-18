/*
 * XREFs of ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C012486C
 * Callers:
 *     DxgkQueryStatistics @ 0x1C0131A30 (DxgkQueryStatistics.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C0132040 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C01336B0 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C0134490 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C014E5A0 (DxgkGetProcessSchedulingPriorityClass.c)
 * Callees:
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00B207C (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE(
        DXGPROCESSMUTEXBYHANDLE *this,
        __int64 a2,
        __int64 a3)
{
  if ( *((_BYTE *)this + 25) )
    DXGPROCESSMUTEXBYHANDLE::Release(this, a2, a3);
}
