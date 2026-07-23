/*
 * XREFs of KiConfigureDynamicProcessor @ 0x1403DD7FC
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1401D57E8 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 KiConfigureDynamicProcessor(void)
{
  return KiEnableXSave();
}
