/*
 * XREFs of ULongLongAdd @ 0x1C00AD334
 * Callers:
 *     EngCopyBits @ 0x1C00131B0 (EngCopyBits.c)
 *     NtGdiStartDoc @ 0x1C026B460 (NtGdiStartDoc.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongAdd(ULONGLONG ullAugend, ULONGLONG ullAddend, ULONGLONG *pullResult)
{
  if ( ullAugend + ullAddend < ullAugend )
  {
    *pullResult = -1LL;
    return -2147024362;
  }
  else
  {
    *pullResult = ullAugend + ullAddend;
    return 0;
  }
}
