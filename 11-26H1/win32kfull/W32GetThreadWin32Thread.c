/*
 * XREFs of W32GetThreadWin32Thread @ 0x1400574EC
 * Callers:
 *     xxxSetInformationThread @ 0x1400569F0 (xxxSetInformationThread.c)
 *     FreeW32Thread @ 0x1400572B0 (FreeW32Thread.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     xxxQueryInformationThread @ 0x1401535CC (xxxQueryInformationThread.c)
 *     ?InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x14026BC80 (-InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall W32GetThreadWin32Thread(__int64 a1)
{
  __int64 v1; // rbx
  __int64 ThreadWin32Thread; // rax

  v1 = 0LL;
  ThreadWin32Thread = PsGetThreadWin32Thread(a1);
  if ( ThreadWin32Thread )
    return *(_QWORD *)ThreadWin32Thread;
  return v1;
}
