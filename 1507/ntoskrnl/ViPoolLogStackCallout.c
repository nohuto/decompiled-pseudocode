/*
 * XREFs of ViPoolLogStackCallout @ 0x1407463BC
 * Callers:
 *     IovpLogStackTrace @ 0x140735B40 (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x1407463EC (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViPoolLogStackCallout(PVOID *Parameter)
{
  USHORT v2; // ax

  v2 = RtlCaptureStackBackTrace(2u, 0xDu, Parameter + 3, 0LL);
  if ( v2 < 0xDu )
    Parameter[v2 + 3] = 0LL;
}
