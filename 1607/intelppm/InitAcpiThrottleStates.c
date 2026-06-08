/*
 * XREFs of InitAcpiThrottleStates @ 0x1C0015A24
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001403C (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     InitAcpi1ThrottleStates @ 0x1C0015AE4 (InitAcpi1ThrottleStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0015BB8 (InitAcpi3ThrottleStates.c)
 *     ValidateAcpiThrottleStates @ 0x1C001C9F4 (ValidateAcpiThrottleStates.c)
 */

__int64 __fastcall InitAcpiThrottleStates(__int64 a1)
{
  int inited; // edi
  __int64 v4; // rdx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  inited = -1073741823;
  if ( (*(_DWORD *)(a1 + 248) & 0x3000000) != 0 )
  {
    inited = InitAcpi3ThrottleStates(a1);
    if ( inited >= 0 )
      goto LABEL_8;
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFCFFFFFFuLL;
  }
  if ( (*(_DWORD *)(a1 + 248) & 0x300000) == 0 )
    goto LABEL_7;
  inited = InitAcpi1ThrottleStates(a1);
  if ( inited < 0 )
  {
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFFCFFFFFuLL;
    goto LABEL_7;
  }
LABEL_8:
  v4 = *(_QWORD *)(a1 + 456);
  v5 = 0;
  inited = ValidateAcpiThrottleStates(a1 + 432, v4, &v5);
  if ( inited >= 0 )
    inited = 0;
  else
    _InterlockedOr((volatile signed __int32 *)(a1 + 1056), v5);
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  return (unsigned int)inited;
}
