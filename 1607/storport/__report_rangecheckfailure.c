/*
 * XREFs of __report_rangecheckfailure @ 0x1C0043508
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C0014300 (StorCompareScsiDeviceId.c)
 *     WppInitGlobalLogger @ 0x1C005EA88 (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
