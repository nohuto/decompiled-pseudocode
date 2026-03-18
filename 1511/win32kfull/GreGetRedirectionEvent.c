/*
 * XREFs of GreGetRedirectionEvent @ 0x1C011301C
 * Callers:
 *     NtUserSignalRedirectionStartComplete @ 0x1C0112FC0 (NtUserSignalRedirectionStartComplete.c)
 *     NtUserWaitForRedirectionStartComplete @ 0x1C0221EF0 (NtUserWaitForRedirectionStartComplete.c)
 * Callees:
 *     <none>
 */

struct DwmState *GreGetRedirectionEvent()
{
  struct DwmState *result; // rax

  result = g_pDwmState;
  if ( g_pDwmState )
    return (struct DwmState *)*((_QWORD *)g_pDwmState + 42);
  return result;
}
