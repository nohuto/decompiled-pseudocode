/*
 * XREFs of RtlInitAnsiString @ 0x180011320
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x1800112B0 (LdrpLogDelayLoadTrigger.c)
 *     LdrpGetDelayloadExportDll @ 0x18001135C (LdrpGetDelayloadExportDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18001559C (LdrpSnapKernelBaseExtensions.c)
 *     LdrpReportError @ 0x18007AF78 (LdrpReportError.c)
 *     LdrpGetShimEngineInterface @ 0x18007E058 (LdrpGetShimEngineInterface.c)
 *     AVrfpDetectVerifiedExports @ 0x1800D67A4 (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800D7620 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitAnsiString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  DestinationString->Buffer = (char *)SourceString;
  *(_DWORD *)&DestinationString->Length = 0;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
