/*
 * XREFs of ULongLongAdd @ 0x1C00A5354
 * Callers:
 *     NtGdiStartDoc @ 0x1C0269FE0 (NtGdiStartDoc.c)
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
