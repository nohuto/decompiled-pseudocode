/*
 * XREFs of LdrpProcessInitializationComplete @ 0x180087C10
 * Callers:
 *     <none>
 * Callees:
 *     LdrpLogEtwEvent @ 0x1800D15F8 (LdrpLogEtwEvent.c)
 */

struct _PEB *LdrpProcessInitializationComplete()
{
  struct _PEB *result; // rax

  if ( MEMORY[0x7FFE0384] )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      result = (struct _PEB *)LdrpLogEtwEvent(5252, -1, -1, -1, 0LL, 0LL);
  }
  _InterlockedIncrement(&LdrpProcessInitialized);
  return result;
}
