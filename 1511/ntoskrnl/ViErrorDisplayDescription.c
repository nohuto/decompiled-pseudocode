/*
 * XREFs of ViErrorDisplayDescription @ 0x1406C2AE4
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
 *     VfUtilDbgPrint @ 0x14020AB90 (VfUtilDbgPrint.c)
 */

ULONG __fastcall ViErrorDisplayDescription(int a1)
{
  ULONG result; // eax
  _DWORD *i; // rdx

  VfUtilDbgPrint("************************************************************\nDriver Verifier detected violation:\n\n");
  result = 0;
  for ( i = &ViErrorDescriptions; *i != a1; i += 4 )
  {
    if ( ++result >= 0x3F )
      return result;
  }
  return VfUtilDbgPrint("%s\n\n", *((const char **)&ViErrorDescriptions + 2 * result + 1));
}
