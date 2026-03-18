/*
 * XREFs of NVMeHwInterrupt @ 0x1C0004E30
 * Callers:
 *     <none>
 * Callees:
 *     RequestPendingCompletion @ 0x1C00029B0 (RequestPendingCompletion.c)
 *     ProcessCompletionQueues @ 0x1C000E914 (ProcessCompletionQueues.c)
 */

char __fastcall NVMeHwInterrupt(__int64 a1)
{
  char v2; // di

  v2 = 0;
  if ( !(unsigned __int8)RequestPendingCompletion(a1, 0xFFFFu) || (*(_DWORD *)(a1 + 20) & 8) != 0 )
  {
    ++*(_QWORD *)(a1 + 3240);
  }
  else
  {
    v2 = 1;
    ProcessCompletionQueues(a1, 0xFFFFLL, 0LL);
  }
  return v2;
}
