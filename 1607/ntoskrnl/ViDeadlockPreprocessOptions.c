/*
 * XREFs of ViDeadlockPreprocessOptions @ 0x1407156D0
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x14071425C (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x14071474C (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x140714A9C (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x140715928 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140715AC4 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 */

ULONG ViDeadlockPreprocessOptions(ULONG *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  unsigned __int64 v8; // rax
  ULONG result; // eax

  if ( *a1 == -1 )
  {
    v8 = a3 & 0xFFF;
    if ( v8 >= 0xC )
      *a1 = 4;
    else
      *a1 = *(_DWORD *)&ViDeadlockDefaultActions[2 * v8];
  }
  result = *a1;
  if ( *a1 )
  {
    if ( (result & 0x10) != 0 )
      *a1 = 0;
    qword_140300370 = a5;
    qword_140300378 = a6;
    ViDeadlockIssue = a3;
    qword_140300368 = a4;
    VfUtilDbgPrint("************ Verifier Detected a Potential Deadlock *************\n");
    VfUtilDbgPrint("**\n");
    VfUtilDbgPrint("** ");
    if ( a2 )
      DbgPrintEx(0x65u, 0, a2, a4, a5, a6);
    VfUtilDbgPrint("\n");
    VfUtilDbgPrint("**\n");
    return VfUtilDbgPrint("*****************************************************************\n");
  }
  return result;
}
