/*
 * XREFs of InitAcpiCStates @ 0x1C00134B8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     InitAcpi2CStates @ 0x1C001354C (InitAcpi2CStates.c)
 *     InitAcpi1CStates @ 0x1C00207EC (InitAcpi1CStates.c)
 */

__int64 __fastcall InitAcpiCStates(__int64 a1)
{
  int inited; // edi

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  inited = -1073741823;
  if ( (*(_DWORD *)(a1 + 248) & 0x7F070LL) != 0 )
  {
    inited = InitAcpi2CStates(a1, a1 + 464);
    if ( inited >= 0 )
      goto LABEL_3;
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFFF80F8FuLL;
  }
  if ( (*(_BYTE *)(a1 + 248) & 7) == 0 )
    goto LABEL_4;
  inited = InitAcpi1CStates(a1);
  if ( inited < 0 )
  {
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_4;
  }
LABEL_3:
  inited = 0;
LABEL_4:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  return (unsigned int)inited;
}
