/*
 * XREFs of PsCaptureUserProcessParameters @ 0x14055BD94
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsCaptureUserProcessParameters(_QWORD *a1, __int64 a2)
{
  return PspCaptureUserProcessParameters(a1, a2, 3);
}
