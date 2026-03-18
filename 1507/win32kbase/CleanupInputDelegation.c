/*
 * XREFs of CleanupInputDelegation @ 0x1C0012700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CleanupInputDelegation(struct tagTHREADINFO *a1, __int64 a2)
{
  if ( a2 )
    ScrubDelegatedWindow(a2);
  else
    ScrubDelegatedWindows(a1);
}
