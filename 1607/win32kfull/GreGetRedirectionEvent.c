/*
 * XREFs of GreGetRedirectionEvent @ 0x1C0134560
 * Callers:
 *     NtUserSignalRedirectionStartComplete @ 0x1C0134500 (NtUserSignalRedirectionStartComplete.c)
 *     NtUserWaitForRedirectionStartComplete @ 0x1C021C080 (NtUserWaitForRedirectionStartComplete.c)
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
