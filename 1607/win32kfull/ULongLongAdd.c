/*
 * XREFs of ULongLongAdd @ 0x1C001DA88
 * Callers:
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 *     NtGdiStartDoc @ 0x1C0268490 (NtGdiStartDoc.c)
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
