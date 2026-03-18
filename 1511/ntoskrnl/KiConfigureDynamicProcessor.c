/*
 * XREFs of KiConfigureDynamicProcessor @ 0x1403B130C
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1401C684C (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 KiConfigureDynamicProcessor(void)
{
  return KiEnableXSave();
}
