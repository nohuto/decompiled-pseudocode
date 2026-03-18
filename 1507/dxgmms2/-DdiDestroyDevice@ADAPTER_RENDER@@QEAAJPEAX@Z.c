/*
 * XREFs of ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C000E08C
 * Callers:
 *     VidSchTerminateDevice @ 0x1C002E0F0 (VidSchTerminateDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyDevice(ADAPTER_RENDER *this, _OWORD *a2)
{
  return ((__int64 (__fastcall **)(ADAPTER_RENDER *, _OWORD *))DxgCoreInterface)[16](this, a2);
}
