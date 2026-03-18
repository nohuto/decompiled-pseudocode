/*
 * XREFs of ?GetDisplayAdapter@DXGDEVICE@@QEBAPEAVDXGADAPTER@@I@Z @ 0x1C0010D84
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

struct DXGADAPTER *__fastcall DXGDEVICE::GetDisplayAdapter(DXGDEVICE *this)
{
  return (struct DXGADAPTER *)*((_QWORD *)this + 2338);
}
