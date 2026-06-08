/*
 * XREFs of InitAcpiCStates @ 0x1C0014FC8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     InitAcpi1CStates @ 0x1C0015080 (InitAcpi1CStates.c)
 *     InitAcpi2CStates @ 0x1C0015310 (InitAcpi2CStates.c)
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
      goto LABEL_7;
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFFF80F8FuLL;
  }
  if ( (*(_BYTE *)(a1 + 248) & 7) != 0 )
  {
    inited = InitAcpi1CStates(a1);
    if ( inited < 0 )
    {
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_8;
    }
LABEL_7:
    inited = 0;
  }
LABEL_8:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  return (unsigned int)inited;
}
