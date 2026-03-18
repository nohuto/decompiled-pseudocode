/*
 * XREFs of ViPoolLogStackCallout @ 0x1406B582C
 * Callers:
 *     IovpLogStackTrace @ 0x1406B585C (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x1406C4AF8 (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400243AC (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViPoolLogStackCallout(PVOID *Parameter)
{
  USHORT v2; // ax

  v2 = RtlCaptureStackBackTrace(2u, 0xDu, Parameter + 3, 0LL);
  if ( v2 < 0xDu )
    Parameter[v2 + 3] = 0LL;
}
