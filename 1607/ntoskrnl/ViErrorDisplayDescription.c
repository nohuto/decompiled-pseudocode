/*
 * XREFs of ViErrorDisplayDescription @ 0x14070EBA4
 * Callers:
 *     ViErrorReport1 @ 0x14022348C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140223508 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140223594 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140223630 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140703980 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140703C3C (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x14070D840 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x14070D9AC (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x14070EA4C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x14070EADC (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x14071C968 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x14071CA84 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x14071CB9C (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
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
