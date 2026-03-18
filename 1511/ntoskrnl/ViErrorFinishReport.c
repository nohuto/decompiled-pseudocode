/*
 * XREFs of ViErrorFinishReport @ 0x1406C2B34
 * Callers:
 *     ViErrorReport1 @ 0x14020BBA4 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14020BC20 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14020BCAC (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14020BD48 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1406B7AFC (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1406B7DB8 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x1406C17A8 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x1406C1914 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1406C298C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1406C2A1C (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x1406D07C0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1406D08DC (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1406D09F4 (VerifierNtWriteFile.c)
 * Callees:
 *     DbgPrompt @ 0x1401F77D0 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14020AB90 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x1406C2AA0 (VfErrorStoreTriageInformation.c)
 */

__int64 __fastcall ViErrorFinishReport(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  __int64 result; // rax
  _DWORD *i; // r10

  v4 = a1;
  VfUtilDbgPrint("************************************************************\n\n");
  result = 0LL;
  for ( i = &ViErrorDescriptions; *i != (_DWORD)v4; i += 4 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x3F )
      return result;
  }
  result = *((unsigned int *)&ViErrorDescriptions + 4 * result + 1);
  if ( (result & 1) == 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
      {
        VfErrorStoreTriageInformation(201LL, v4, a2, a3, a4);
        __debugbreak();
      }
    }
    return VerifierBugCheckIfAppropriate(0xC9u, v4, a2, a3, a4);
  }
  return result;
}
