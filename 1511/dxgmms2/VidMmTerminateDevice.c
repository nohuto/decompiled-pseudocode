/*
 * XREFs of VidMmTerminateDevice @ 0x1C0014500
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0011ADC (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 */

VIDMM_DEVICE *__fastcall VidMmTerminateDevice(VIDMM_DEVICE *a1)
{
  VIDMM_DEVICE *result; // rax

  if ( a1 )
    return VIDMM_DEVICE::`scalar deleting destructor'(a1);
  return result;
}
