/*
 * XREFs of __report_rangecheckfailure @ 0x1C006EAE8
 * Callers:
 *     ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C00242DC (-ndisWppExtendedCallback@@YAXEKE@Z.c)
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
