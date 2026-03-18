/*
 * XREFs of ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C000E05C
 * Callers:
 *     VidSchiControlVSync @ 0x1C007A1EC (VidSchiControlVSync.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt(DXGADAPTER *this, enum _DXGK_INTERRUPT_TYPE a2)
{
  return ((__int64 (__fastcall **)(DXGADAPTER *, _OWORD *))DxgCoreInterface)[11](this, (_OWORD *)3);
}
