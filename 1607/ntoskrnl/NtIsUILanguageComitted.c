/*
 * XREFs of NtIsUILanguageComitted @ 0x1404CF4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtIsUILanguageComitted(void)
{
  return PsUILanguageComitted == 0 ? 0xC0000034 : 0;
}
