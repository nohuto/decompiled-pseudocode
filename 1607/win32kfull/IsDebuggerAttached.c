/*
 * XREFs of IsDebuggerAttached @ 0x1C00AAB24
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006EE0 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C000C438 (SlowAppThreadInShellFrame.c)
 *     CheckForegroundRight @ 0x1C00AA97C (CheckForegroundRight.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C011E870 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     TryDetachShellFrame @ 0x1C01D8950 (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *a1;
  if ( v3 && PsGetProcessDebugPort(v3) && (!*((_DWORD *)a1 + 207) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
    return 1;
  return v2;
}
