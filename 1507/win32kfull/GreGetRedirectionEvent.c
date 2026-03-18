/*
 * XREFs of GreGetRedirectionEvent @ 0x1C0156C8C
 * Callers:
 *     NtUserSignalRedirectionStartComplete @ 0x1C0156C30 (NtUserSignalRedirectionStartComplete.c)
 *     NtUserWaitForRedirectionStartComplete @ 0x1C0221D20 (NtUserWaitForRedirectionStartComplete.c)
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
