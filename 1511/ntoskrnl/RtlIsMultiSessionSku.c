/*
 * XREFs of RtlIsMultiSessionSku @ 0x1403BE644
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x140127774 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  return (MEMORY[0xFFFFF780000002F0] >> 8) & 1;
}
