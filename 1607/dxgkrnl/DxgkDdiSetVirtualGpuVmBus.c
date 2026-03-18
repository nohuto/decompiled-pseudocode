/*
 * XREFs of DxgkDdiSetVirtualGpuVmBus @ 0x1C015AA98
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C002A314 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDdiSetVirtualGpuVmBus(__int64 a1, struct _LUID *a2, struct _DXGKARG_SETVIRTUALGPUVMBUS *a3)
{
  return ADAPTER_RENDER::DdiSetVirtualGpuVmBus(*(ADAPTER_RENDER **)(a1 + 2136), a2, a3);
}
