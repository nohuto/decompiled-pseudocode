/*
 * XREFs of StorpAreTelemetryErrorsEqual @ 0x1C0007B78
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C0007970 (StorpTelemetryCollectErrorData.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C0040640 (StorpTelemetrySendUnitErrorData.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorpAreTelemetryErrorsEqual(_BYTE *a1, _BYTE *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3] && a1[4] == a2[4];
}
