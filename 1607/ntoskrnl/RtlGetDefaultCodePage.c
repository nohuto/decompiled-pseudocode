/*
 * XREFs of RtlGetDefaultCodePage @ 0x14052DF98
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlGetDefaultCodePage(PUSHORT AnsiCodePage, PUSHORT OemCodePage)
{
  *AnsiCodePage = NlsAnsiCodePage;
  *OemCodePage = NlsOemCodePage;
}
