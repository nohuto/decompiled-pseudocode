/*
 * XREFs of ??0ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00124FC
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

ENSURE_DEVICE_DEREFERENCE_NOLOCKS *__fastcall ENSURE_DEVICE_DEREFERENCE_NOLOCKS::ENSURE_DEVICE_DEREFERENCE_NOLOCKS(
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS *this,
        struct DXGDEVICE *a2)
{
  *(_QWORD *)this = a2;
  return this;
}
