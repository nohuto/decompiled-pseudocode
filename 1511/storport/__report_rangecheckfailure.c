/*
 * XREFs of __report_rangecheckfailure @ 0x1C003CA98
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C000CED8 (StorCompareScsiDeviceId.c)
 *     WppInitGlobalLogger @ 0x1C0057720 (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
