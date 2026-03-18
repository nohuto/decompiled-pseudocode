/*
 * XREFs of atmfdFontManagement @ 0x1C02A4910
 * Callers:
 *     AtmDrvFontManagementRedirector @ 0x1C02A3EE0 (AtmDrvFontManagementRedirector.c)
 *     UmfdDispatchEscape @ 0x1C02A403C (UmfdDispatchEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     InitializeDriver @ 0x1C02A46AC (InitializeDriver.c)
 */

__int64 __fastcall atmfdFontManagement(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  if ( (unsigned int)InitializeDriver() == 1 )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64, int, __int64))pAtmfdFontManagement)(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  else
    return 0LL;
}
