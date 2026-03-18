/*
 * XREFs of EngGetCurrentCodePage @ 0x140255A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngGetCurrentCodePage(PUSHORT OemCodePage, PUSHORT AnsiCodePage)
{
  RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
}
