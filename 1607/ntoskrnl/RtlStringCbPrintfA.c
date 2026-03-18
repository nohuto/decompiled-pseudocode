/*
 * XREFs of RtlStringCbPrintfA @ 0x140139A14
 * Callers:
 *     RtlpVerCompare @ 0x14012EC8C (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x1401D5490 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x140223660 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1402236DC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140223768 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140223804 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x1403E0080 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140703950 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140703C0C (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x14070D810 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x14070D97C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x14070EA1C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x14070EAAC (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x14071C968 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x14071CA84 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x14071CB9C (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x1407D3390 (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x140139A64 (RtlStringVPrintfWorkerA.c)
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringVPrintfWorkerA(pszDest, cbDest, 0LL, pszFormat, va);
  if ( cbDest )
    *pszDest = 0;
  return v3;
}
