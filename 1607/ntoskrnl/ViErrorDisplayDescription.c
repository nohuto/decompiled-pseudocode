/*
 * XREFs of ViErrorDisplayDescription @ 0x14070EB74
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
 *     VfUtilDbgPrint @ 0x14022264C (VfUtilDbgPrint.c)
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
