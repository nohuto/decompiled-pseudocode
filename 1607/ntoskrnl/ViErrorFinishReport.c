/*
 * XREFs of ViErrorFinishReport @ 0x14070EBC4
 * Callers:
 *     ViErrorReport1 @ 0x140223660 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1402236DC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140223768 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140223804 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140703950 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140703C0C (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x14070D810 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x14070D97C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x14070EA1C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x14070EAAC (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x14071C968 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x14071CA84 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x14071CB9C (VerifierNtWriteFile.c)
 * Callees:
 *     DbgPrompt @ 0x140211374 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14022264C (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x14070EB30 (VfErrorStoreTriageInformation.c)
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
