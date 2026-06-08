/*
 * XREFs of InitAcpiPerfStates @ 0x1C00130A4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     ValidateAcpi2PStates @ 0x1C00131E0 (ValidateAcpi2PStates.c)
 *     AcpiEval_PSS @ 0x1C0013B44 (AcpiEval_PSS.c)
 *     AcpiEval_PCT_PTC @ 0x1C0014634 (AcpiEval_PCT_PTC.c)
 *     ValidateXPssPStates @ 0x1C001B848 (ValidateXPssPStates.c)
 *     AcpiEval_XPSS @ 0x1C001D6D0 (AcpiEval_XPSS.c)
 */

__int64 __fastcall InitAcpiPerfStates(__int64 a1)
{
  int v2; // eax
  int v3; // edi
  int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // rdx
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  v2 = AcpiEval_PCT_PTC(a1, 1413697631LL, a1 + 368);
  v3 = 0;
  if ( v2 < 0 )
    v3 = v2;
  v4 = v2;
  if ( (*(_DWORD *)(a1 + 248) & 0x40000000) != 0 )
  {
    v4 = AcpiEval_XPSS(a1, a1 + 400);
    if ( v4 < 0 )
      *(_QWORD *)(a1 + 248) &= ~0x40000000uLL;
  }
  if ( (*(_DWORD *)(a1 + 248) & 0x30000000) != 0 )
  {
    v4 = AcpiEval_PSS(a1, a1 + 392);
    if ( v4 < 0 )
    {
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFCFFFFFFFuLL;
      if ( (*(_QWORD *)(a1 + 248) & 0x40000000LL) != 0 )
        v4 = 0;
    }
  }
  if ( v3 >= 0 )
  {
    if ( v4 < 0 )
      v3 = v4;
    if ( v3 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 248) & 0x40000000) != 0 )
      {
        v8 = *(_QWORD *)(a1 + 400);
        v9 = 0;
        v4 = ValidateXPssPStates(a1 + 368, v8, &v9);
        if ( v4 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1048), v9);
          *(_QWORD *)(a1 + 248) &= ~0x40000000uLL;
        }
      }
      if ( (*(_DWORD *)(a1 + 248) & 0x30000000) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 392);
        v9 = 0;
        v4 = ValidateAcpi2PStates(a1 + 368, v5, &v9);
        if ( v4 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1048), v9);
          *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFCFFFFFFFuLL;
        }
      }
      v6 = *(_QWORD *)(a1 + 248);
      if ( (v6 & 0x40000000) == 0 && (v6 & 0x30000000) == 0 )
        v3 = v4;
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  return (unsigned int)v3;
}
