/*
 * XREFs of KiConfigureDynamicProcessor @ 0x140401B6C
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x140203394 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
_CONTEXT *KiConfigureDynamicProcessor(void)
{
  return KiEnableXSave();
}
