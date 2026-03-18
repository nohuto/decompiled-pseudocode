/*
 * XREFs of ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C0002464
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DXGADAPTER::IsActive(DXGADAPTER *this)
{
  return *((_DWORD *)this + 40) == 1;
}
