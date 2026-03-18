/*
 * XREFs of ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C000FD78
 * Callers:
 *     VidSchiControlVSync @ 0x1C00426E0 (VidSchiControlVSync.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt(DXGADAPTER *this, enum _DXGK_INTERRUPT_TYPE a2)
{
  return ((__int64 (__fastcall *)(DXGADAPTER *, __int64))DxgCoreInterface[11])(this, 3LL);
}
