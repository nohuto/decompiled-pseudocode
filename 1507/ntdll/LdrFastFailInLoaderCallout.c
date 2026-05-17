/*
 * XREFs of LdrFastFailInLoaderCallout @ 0x1800BC5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *LdrFastFailInLoaderCallout()
{
  struct _TEB *result; // rax

  result = NtCurrentTeb();
  if ( (void *)qword_1801430C0 == result->ClientId.UniqueThread || LdrpProcessInitialized < 2 )
    __fastfail(0x17u);
  return result;
}
