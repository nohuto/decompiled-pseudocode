/*
 * XREFs of RtlStringExHandleFillBehindNullA @ 0x1401B0FF0
 * Callers:
 *     RtlStringCbPrintfExA @ 0x1401B0E60 (RtlStringCbPrintfExA.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullA(NTSTRSAFE_PSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 1 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 1);
  return 0;
}
