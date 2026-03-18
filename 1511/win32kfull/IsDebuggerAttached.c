/*
 * XREFs of IsDebuggerAttached @ 0x1C008D488
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0001CBC (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C0009E1C (SlowAppThreadInShellFrame.c)
 *     ?InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C008CE08 (-InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     CheckForegroundRight @ 0x1C008D2FC (CheckForegroundRight.c)
 *     TryDetachShellFrame @ 0x1C01E276C (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *a1;
  if ( v3 && PsGetProcessDebugPort(v3) && (!*((_DWORD *)a1 + 209) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
    return 1;
  return v2;
}
