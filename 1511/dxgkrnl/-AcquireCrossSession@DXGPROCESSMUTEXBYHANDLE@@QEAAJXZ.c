/*
 * XREFs of ?AcquireCrossSession@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ @ 0x1C001F7C4
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00B1F90 (DxgkSetProcessSchedulingPriorityClass.c)
 * Callees:
 *     <none>
 */

int __fastcall DXGPROCESSMUTEXBYHANDLE::AcquireCrossSession(DXGPROCESSMUTEXBYHANDLE *this)
{
  return DXGPROCESSMUTEXBYHANDLE::AcquireInternal(this, 0);
}
