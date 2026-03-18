/*
 * XREFs of ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0015390
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0038994 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::DdiCreateDevice(ADAPTER_RENDER *this, struct _DXGKARG_CREATEDEVICE *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_CREATEDEVICE *))DxgCoreInterface[15])(this, a2);
}
