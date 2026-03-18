/*
 * XREFs of IsDebuggerAttached @ 0x1400599F0
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x140059968 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x14020BCAC (SlowAppThreadInShellFrame.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x14026D7C8 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     TryDetachShellFrame @ 0x140292DFC (TryDetachShellFrame.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1402942C4 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_QWORD *)a1
    && PsGetProcessDebugPort()
    && (!*(_DWORD *)(a1 + 868) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
  {
    return 1;
  }
  return v2;
}
