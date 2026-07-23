/*
 * XREFs of RtlIsMultiSessionSku @ 0x14040FE94
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x14014FC60 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  return (MEMORY[0xFFFFF780000002F0] >> 8) & 1;
}
