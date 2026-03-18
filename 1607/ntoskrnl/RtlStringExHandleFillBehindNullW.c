/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1401CCBB4
 * Callers:
 *     RtlStringCchCopyExW @ 0x1400C34A8 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x1400C3A00 (RtlStringCchPrintfExW.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
