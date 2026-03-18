/*
 * XREFs of ?GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ @ 0x1C0012550
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

const struct _DXGKWIN32KENG_INTERFACE *__fastcall DXGPROCESS::GetWin32kInterface(DXGPROCESS *this)
{
  return (const struct _DXGKWIN32KENG_INTERFACE *)*((_QWORD *)this + 10);
}
