/*
 * XREFs of RtlInitAnsiString @ 0x18006A7B0
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x1800205B8 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpReportError @ 0x18006A65C (LdrpReportError.c)
 *     LdrpGetShimEngineInterface @ 0x180079D5C (LdrpGetShimEngineInterface.c)
 *     LdrpGetDelayloadExportDll @ 0x18007A108 (LdrpGetDelayloadExportDll.c)
 *     AVrfpDetectVerifiedExports @ 0x1800C5464 (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800C62E4 (AVrfpVerifierStopInitialize.c)
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
