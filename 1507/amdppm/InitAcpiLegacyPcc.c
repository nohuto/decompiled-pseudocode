/*
 * XREFs of InitAcpiLegacyPcc @ 0x1C001D640
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PCCP @ 0x1C0010970 (AcpiEval_PCCP.c)
 *     AcquirePccInterface @ 0x1C001D720 (AcquirePccInterface.c)
 */

__int64 __fastcall InitAcpiLegacyPcc(_QWORD *a1)
{
  signed int v2; // ebx
  _DWORD *v3; // rcx

  v2 = AcquirePccInterface();
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      a1[24],
      0LL);
    v2 = AcpiEval_PCCP((__int64)a1, a1 + 65);
    if ( v2 >= 0 )
    {
      v2 = -1073741811;
      v3 = (_DWORD *)a1[65];
      if ( qword_1C0009800 && *v3 <= (unsigned int)(dword_1C0009808 - 4) )
        v2 = (unsigned int)(dword_1C0009808 - 4) < v3[1] ? 0xC000000D : 0;
      if ( v2 < 0 )
        goto LABEL_9;
      if ( (unsigned int)(dword_1C00097FC - 1) <= 0x26 )
      {
        v2 = -1073741823;
LABEL_9:
        a1[31] &= ~0x80000000uLL;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, a1[24]);
  }
  return (unsigned int)v2;
}
