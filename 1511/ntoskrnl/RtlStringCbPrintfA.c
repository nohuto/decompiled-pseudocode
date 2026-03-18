/*
 * XREFs of RtlStringCbPrintfA @ 0x140136BD4
 * Callers:
 *     RtlpVerCompare @ 0x140124A04 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x1401C633C (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x14020BBA4 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14020BC20 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14020BCAC (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14020BD48 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x1403B3344 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1406B7AFC (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1406B7DB8 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x1406C17A8 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x1406C1914 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1406C298C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1406C2A1C (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x1406D07C0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1406D08DC (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1406D09F4 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x1407871F0 (RamdiskStart.c)
 * Callees:
 *     sub_140136C24 @ 0x140136C24 (sub_140136C24.c)
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
    return sub_140136C24(pszDest, cbDest, 0LL, pszFormat, (__int64 *)va);
  if ( cbDest )
    *pszDest = 0;
  return v3;
}
