/*
 * XREFs of __report_rangecheckfailure @ 0x1C006F668
 * Callers:
 *     ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C001F864 (-ndisWppExtendedCallback@@YAXEKE@Z.c)
 *     DriverEntry @ 0x1C01023B0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
