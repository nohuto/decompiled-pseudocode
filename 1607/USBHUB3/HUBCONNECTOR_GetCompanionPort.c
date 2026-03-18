/*
 * XREFs of HUBCONNECTOR_GetCompanionPort @ 0x1C006A160
 * Callers:
 *     HUBMISC_TypeCCompanionHasIdenticalDeviceAttached @ 0x1C00282A0 (HUBMISC_TypeCCompanionHasIdenticalDeviceAttached.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C006620C (HUBFDO_IoctlGetPortConnectorProperties.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBCONNECTOR_GetCompanionPort(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rbx
  int v5; // eax
  unsigned __int16 v6; // r9
  __int64 v7; // rcx
  __int64 *v8; // r12
  __int64 i; // rdi
  _QWORD *v10; // rdi
  bool v11; // zf

  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 204) & 0x20) == 0 )
    return v2;
  if ( a2 > 1u )
  {
    v5 = *(_DWORD *)(a1 + 208);
    v6 = 21;
    v7 = *(_QWORD *)(a1 + 1432);
LABEL_4:
    WPP_RECORDER_SF_d(v7, 2u, 6u, v6, (__int64)&WPP_87e3f05bec5a3ef5eeee36d3d8873aec_Traceguids, v5);
    return v2;
  }
  v8 = (__int64 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     WdfDriverGlobals->Driver,
                     off_1C00580E8)
                 + 40);
  for ( i = *v8; ; i = v10[10] )
  {
    v10 = (_QWORD *)(i - 80);
    if ( v8 == v10 + 10 )
      break;
    if ( RtlCompareMemory(v10, (const void *)(a1 + 1368), 0x38uLL) == 56 )
      goto LABEL_10;
  }
  v10 = 0LL;
LABEL_10:
  if ( !v10 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 1432), 2u, 4u, 0x16u, (__int64)&WPP_87e3f05bec5a3ef5eeee36d3d8873aec_Traceguids);
    return v2;
  }
  v5 = *(_DWORD *)(a1 + 208);
  if ( v5 == 512 )
  {
    if ( !a2 )
      return v10[8];
    v11 = a2 == 1;
    goto LABEL_21;
  }
  if ( v5 != 768 )
  {
    v7 = *(_QWORD *)(a1 + 1432);
    v6 = 23;
    goto LABEL_4;
  }
  if ( !a2 )
    return v10[7];
  if ( a2 == 1 )
  {
    v2 = v10[8];
    v11 = a1 == v2;
LABEL_21:
    if ( v11 )
      return v10[9];
  }
  return v2;
}
