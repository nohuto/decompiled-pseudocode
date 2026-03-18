/*
 * XREFs of HUBMISC_InitializeHsm @ 0x1C006DD84
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x1C00661A0 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBMISC_InitializeHsm(__int64 a1)
{
  __int64 v2; // rdx
  __int64 (__fastcall *v3)(PWDF_DRIVER_GLOBALS); // rax
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  unsigned __int16 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int64 Timer; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD v15[8]; // [rsp+30h] [rbp-40h] BYREF

  *(_QWORD *)(a1 + 2192) = a1;
  memset(v15, 0, 0x38uLL);
  v2 = *(_QWORD *)(a1 + 16);
  LODWORD(v15[0]) = 56;
  v3 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336);
  v15[3] = 0x100000001LL;
  v15[4] = v2;
  v4 = v3(WdfDriverGlobals);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v15,
         v4,
         a1 + 768);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 10;
LABEL_3:
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 2488), 2u, 3u, v7, (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids, v5);
    return v6;
  }
  *(_QWORD *)(a1 + 784) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                            WdfDriverGlobals,
                            *(_QWORD *)(a1 + 768));
  memset(v15, 0, 0x38uLL);
  v8 = *(_QWORD *)(a1 + 16);
  LODWORD(v15[0]) = 56;
  v15[3] = 0x100000001LL;
  v15[4] = v8;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v15,
         v9,
         a1 + 936);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 11;
    goto LABEL_3;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 2072));
  KeInitializeEvent((PRKEVENT)(a1 + 1120), NotificationEvent, 0);
  *(_DWORD *)(a1 + 2084) = 2000;
  *(_DWORD *)(a1 + 2112) = 0;
  if ( *(_BYTE *)(a1 + 232) )
  {
    v10 = *(_DWORD *)(a1 + 248);
    if ( v10 > 0 )
    {
      if ( v10 <= 2 )
      {
        *(_DWORD *)(a1 + 2184) = 1;
      }
      else if ( v10 == 3 )
      {
        *(_DWORD *)(a1 + 2184) = 2;
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 2184) = 4;
  }
  *(_DWORD *)(a1 + 2216) = 2000;
  *(_QWORD *)(a1 + 2208) = &HSMStateTable;
  *(_QWORD *)(a1 + 2264) = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 2232) = a1;
  Timer = ExAllocateTimer(HUBMISC_HubEventTimer, a1, 4LL);
  *(_QWORD *)(a1 + 2272) = Timer;
  if ( Timer )
  {
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 16));
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 488))(*(_QWORD *)(a1 + 240), v12, 1LL);
    *(_QWORD *)(a1 + 2224) = v13;
    if ( !v13 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2488), 2u, 3u, 0xDu, (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids);
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2488), 2u, 3u, 0xCu, (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids);
  }
  return v6;
}
