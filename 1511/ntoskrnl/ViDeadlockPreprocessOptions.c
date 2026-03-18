/*
 * XREFs of ViDeadlockPreprocessOptions @ 0x1406CD8E8
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x1406CC970 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x1406CCCBC (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x1406CDB40 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x1406CDCDC (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x14020AB90 (VfUtilDbgPrint.c)
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
    qword_1402DAFD0 = a5;
    qword_1402DAFD8 = a6;
    ViDeadlockIssue = a3;
    qword_1402DAFC8 = a4;
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
