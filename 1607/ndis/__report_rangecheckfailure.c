/*
 * XREFs of __report_rangecheckfailure @ 0x1C0073998
 * Callers:
 *     ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C001F488 (-ndisWppExtendedCallback@@YAXEKE@Z.c)
 *     DriverEntry @ 0x1C01027E0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
