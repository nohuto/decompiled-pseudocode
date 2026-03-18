/*
 * XREFs of HUBMUX_QueuePowerDownEventToDSMs @ 0x1C000DA2C
 * Callers:
 *     HUBHSM_NotifyingHubStopToDevices @ 0x1C00078C0 (HUBHSM_NotifyingHubStopToDevices.c)
 *     HUBHSM_WaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset @ 0x1C0008080 (HUBHSM_WaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset.c)
 *     HUBHSM_WaitingForDevicesToReleaseReferenceOnSuspend @ 0x1C00080C0 (HUBHSM_WaitingForDevicesToReleaseReferenceOnSuspend.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueuePowerDownEventToDSMs(__int64 a1, int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  KIRQL v5; // r12
  int v6; // esi
  __int64 v7; // rcx
  int v8; // edi
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // r15
  bool v14; // bl
  _QWORD *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // [rsp+30h] [rbp-38h] BYREF
  _QWORD **v20; // [rsp+38h] [rbp-30h]

  v2 = a1;
  v20 = &v19;
  v3 = a1 + 2288;
  v19 = &v19;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2288));
  _InterlockedOr((volatile signed __int32 *)(v3 + 32), 8u);
  v6 = 0;
  v7 = *(_QWORD *)(v3 + 64);
  v8 = 0;
  while ( 1 )
  {
    v12 = v7 - 176;
    v13 = (__int64 *)(v12 + 176);
    if ( v3 + 64 == v12 + 176 )
      break;
    if ( (*(_DWORD *)(v12 + 224) & 2) != 0 )
    {
      ++v8;
      _InterlockedOr((volatile signed __int32 *)(v12 + 224), 4u);
    }
    v9 = v20;
    ++v6;
    v10 = (_QWORD *)(v12 + 192);
    if ( *v20 != &v19 )
      __fastfail(3u);
    *(_QWORD *)(v12 + 200) = v20;
    *v10 = &v19;
    *v9 = v10;
    v20 = (_QWORD **)(v12 + 192);
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v12);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v11,
      "DSM PnPPower Tag",
      1980LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
    v7 = *v13;
  }
  *(_DWORD *)(v3 + 12) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v5);
  if ( !v6 )
    goto LABEL_12;
  v14 = v8 == 0;
  v15 = v19 - 24;
  v16 = *v19 - 192LL;
  if ( &v19 != v19 )
  {
    do
    {
      HUBSM_AddEvent((__int64)(v15 + 61), a2);
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              v15);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v17,
        "DSM PnPPower Tag",
        2029LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
      v18 = (_QWORD *)(v16 + 192);
      v15 = (_QWORD *)v16;
      v16 = *(_QWORD *)(v16 + 192) - 192LL;
    }
    while ( &v19 != v18 );
    v2 = a1;
  }
  if ( v14 )
LABEL_12:
    HUBSM_AddEvent(v2 + 1232, 2018);
}
