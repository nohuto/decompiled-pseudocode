/*
 * XREFs of ?GetVidSchDevice@DXGDEVICE@@QEBAQEAU_VIDSCH_DEVICE@@XZ @ 0x1C0010DB8
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

struct _VIDSCH_DEVICE *__fastcall DXGDEVICE::GetVidSchDevice(DXGDEVICE *this)
{
  return (struct _VIDSCH_DEVICE *)*((_QWORD *)this + 68);
}
