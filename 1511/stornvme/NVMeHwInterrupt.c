/*
 * XREFs of NVMeHwInterrupt @ 0x1C0002320
 * Callers:
 *     <none>
 * Callees:
 *     RequestPendingCompletion @ 0x1C0001148 (RequestPendingCompletion.c)
 *     ProcessCompletionQueues @ 0x1C000CC2C (ProcessCompletionQueues.c)
 */

char __fastcall NVMeHwInterrupt(__int64 a1)
{
  char v2; // di

  v2 = 0;
  if ( !RequestPendingCompletion(a1, 0xFFFFu) || (*(_DWORD *)(a1 + 20) & 8) != 0 )
  {
    ++*(_QWORD *)(a1 + 3224);
  }
  else
  {
    v2 = 1;
    ProcessCompletionQueues(a1, 0xFFFFLL, 0LL);
  }
  return v2;
}
