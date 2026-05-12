/*
 * XREFs of __report_rangecheckfailure @ 0x1C003A068
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C000ACA8 (StorCompareScsiDeviceId.c)
 *     WppInitGlobalLogger @ 0x1C00537E4 (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
