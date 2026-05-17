/*
 * XREFs of RtlInitAnsiString @ 0x180010490
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x1800104CC (LdrpGetDelayloadExportDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180011A58 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpReportError @ 0x1800785E8 (LdrpReportError.c)
 *     LdrpGetShimEngineInterface @ 0x180080F60 (LdrpGetShimEngineInterface.c)
 *     AVrfpDetectVerifiedExports @ 0x1800CE794 (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800CF614 (AVrfpVerifierStopInitialize.c)
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
