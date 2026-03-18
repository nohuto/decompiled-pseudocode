/*
 * XREFs of ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00B1640
 * Callers:
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 *     GreGetDCPoint @ 0x1C0075BA0 (GreGetDCPoint.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsCurrentProcessDwm(__int64 a1)
{
  PVOID CurrentProcess; // rcx
  _BOOL8 result; // rax

  CurrentProcess = (PVOID)PsGetCurrentProcess(a1);
  result = 0LL;
  if ( CurrentProcess )
    return CurrentProcess == g_pepDwm;
  return result;
}
