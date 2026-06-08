/*
 * XREFs of InitAcpiProcessorDomains @ 0x1C0012E40
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     InitAcpiIdleDomain @ 0x1C0012FD0 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C001301C (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C001DE50 (InitAcpiThrottleDomain.c)
 */

__int64 __fastcall InitAcpiProcessorDomains(__int64 a1)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  if ( (*(_DWORD *)(a1 + 248) & 0x7F070LL) != 0 && *(_QWORD *)(a1 + 472) && (int)InitAcpiIdleDomain(a1, a1 + 480) < 0 )
    *(_QWORD *)(a1 + 480) = 0LL;
  v2 = *(_QWORD *)(a1 + 248);
  if ( (v2 & 0x1000000000LL) != 0 )
    *(_QWORD *)(a1 + 488) = *(_QWORD *)(a1 + 1136);
  if ( (v2 & 0xF8000000) != 0 && (int)InitAcpiPerfDomain(a1) >= 0 && (*(_QWORD *)(a1 + 248) & 0x1000000000LL) == 0 )
    *(_QWORD *)(a1 + 488) = *(_QWORD *)(a1 + 416);
  if ( (*(_DWORD *)(a1 + 248) & 0x3000000) != 0
    && (int)InitAcpiThrottleDomain(a1) >= 0
    && (*(_QWORD *)(a1 + 248) & 0x10F8000000LL) == 0 )
  {
    *(_QWORD *)(a1 + 488) = *(_QWORD *)(a1 + 464);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 192));
}
