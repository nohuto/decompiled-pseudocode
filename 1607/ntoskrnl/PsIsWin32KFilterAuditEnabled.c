/*
 * XREFs of PsIsWin32KFilterAuditEnabled @ 0x14020F194
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsIsWin32KFilterAuditEnabled()
{
  return HIWORD(HIDWORD(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0])) & 1;
}
