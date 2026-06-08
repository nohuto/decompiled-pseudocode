/*
 * XREFs of InitAcpiLegacyPcc @ 0x1C001CCA0
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011F34 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PCCP @ 0x1C0010BDC (AcpiEval_PCCP.c)
 *     AcquirePccInterface @ 0x1C001E2A4 (AcquirePccInterface.c)
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
    v2 = AcpiEval_PCCP((__int64)a1, a1 + 66);
    if ( v2 >= 0 )
    {
      v2 = -1073741811;
      v3 = (_DWORD *)a1[66];
      if ( qword_1C0009868 && *v3 <= (unsigned int)(dword_1C0009870 - 4) )
        v2 = (unsigned int)(dword_1C0009870 - 4) < v3[1] ? 0xC000000D : 0;
      if ( v2 < 0 )
        goto LABEL_9;
      if ( (unsigned int)(dword_1C0009864 - 1) <= 0x26 )
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
