/*
 * XREFs of ?GetDisplayAdapter@DXGDEVICE@@QEBAPEAVDXGADAPTER@@I@Z @ 0x1C0012504
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

struct DXGADAPTER *__fastcall DXGDEVICE::GetDisplayAdapter(DXGDEVICE *this)
{
  return (struct DXGADAPTER *)*((_QWORD *)this + 354);
}
