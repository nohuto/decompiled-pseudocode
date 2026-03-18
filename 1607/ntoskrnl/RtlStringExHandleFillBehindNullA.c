/*
 * XREFs of RtlStringExHandleFillBehindNullA @ 0x1401B110C
 * Callers:
 *     RtlStringCbPrintfExA @ 0x1401B0F7C (RtlStringCbPrintfExA.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullA(NTSTRSAFE_PSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 1 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 1);
  return 0;
}
