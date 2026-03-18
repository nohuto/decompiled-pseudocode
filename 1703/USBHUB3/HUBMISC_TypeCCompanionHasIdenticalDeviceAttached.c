/*
 * XREFs of HUBMISC_TypeCCompanionHasIdenticalDeviceAttached @ 0x1C002AB64
 * Callers:
 *     HUBDSM_AddingDeviceToGlobalChildList @ 0x1C001BF80 (HUBDSM_AddingDeviceToGlobalChildList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     HUBCONNECTOR_GetCompanionPort @ 0x1C006D438 (HUBCONNECTOR_GetCompanionPort.c)
 */

bool __fastcall HUBMISC_TypeCCompanionHasIdenticalDeviceAttached(__int64 a1)
{
  __int64 v1; // rsi
  bool v2; // di
  __int64 v5; // rax
  __int64 CompanionPort; // rax
  _WORD *v7; // rdx
  __int64 v8; // rax
  _WORD *v9; // rdx
  __int64 v10; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  if ( !v1 || (*(_DWORD *)(v1 + 204) & 0x200) == 0 )
    return 0;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 56),
    0LL);
  CompanionPort = HUBCONNECTOR_GetCompanionPort(v1, 0LL);
  if ( CompanionPort )
  {
    if ( (*(_DWORD *)(CompanionPort + 1336) & 0x40) != 0 )
    {
      v7 = *(_WORD **)(CompanionPort + 1328);
      if ( v7 )
      {
        if ( v7[990] == *(_WORD *)(a1 + 1980) && v7[991] == *(_WORD *)(a1 + 1982) )
          v2 = v7[992] == *(_WORD *)(a1 + 1984);
      }
    }
  }
  v8 = HUBCONNECTOR_GetCompanionPort(v1, 1LL);
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 1336) & 0x40) != 0 )
    {
      v9 = *(_WORD **)(v8 + 1328);
      if ( v9 )
      {
        if ( v9[990] == *(_WORD *)(a1 + 1980) && v9[991] == *(_WORD *)(a1 + 1982) && v9[992] == *(_WORD *)(a1 + 1984) )
          v2 = 1;
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C005B110);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v10 + 56));
  return v2;
}
