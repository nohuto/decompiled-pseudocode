/*
 * XREFs of IsDebuggerAttached @ 0x1C00454B4
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00034B8 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C00091C4 (SlowAppThreadInShellFrame.c)
 *     ?InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C00443C8 (-InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     CheckForegroundRight @ 0x1C0045328 (CheckForegroundRight.c)
 *     TryDetachShellFrame @ 0x1C01E2248 (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_QWORD *)a1
    && PsGetProcessDebugPort()
    && (!*(_DWORD *)(a1 + 836) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
  {
    return 1;
  }
  return v2;
}
