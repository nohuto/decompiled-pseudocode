/*
 * XREFs of HUBMUX_QueuePowerDownEventToDSMs @ 0x1C000CF54
 * Callers:
 *     HUBHSM_NotifyingHubStopToDevices @ 0x1C00074E0 (HUBHSM_NotifyingHubStopToDevices.c)
 *     HUBHSM_WaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset @ 0x1C0007C20 (HUBHSM_WaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset.c)
 *     HUBHSM_WaitingForDevicesToReleaseReferenceOnSuspend @ 0x1C0007C50 (HUBHSM_WaitingForDevicesToReleaseReferenceOnSuspend.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueuePowerDownEventToDSMs(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  int v4; // edi
  KIRQL v6; // r12
  int v7; // esi
  __int64 i; // rcx
  _QWORD **v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // r15
  bool v13; // si
  _QWORD *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // [rsp+30h] [rbp-38h] BYREF
  _QWORD **v19; // [rsp+38h] [rbp-30h]

  v19 = &v18;
  v3 = a1 + 2264;
  v4 = 0;
  v18 = &v18;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2264));
  _InterlockedOr((volatile signed __int32 *)(v3 + 32), 8u);
  v7 = 0;
  for ( i = *(_QWORD *)(v3 + 64); ; i = *v12 )
  {
    v11 = i - 176;
    v12 = (__int64 *)(v11 + 176);
    if ( v3 + 64 == v11 + 176 )
      break;
    if ( (*(_DWORD *)(v11 + 224) & 2) != 0 )
    {
      ++v4;
      _InterlockedOr((volatile signed __int32 *)(v11 + 224), 4u);
    }
    ++v7;
    v9 = v19;
    *(_QWORD *)(v11 + 192) = &v18;
    *(_QWORD *)(v11 + 200) = v9;
    if ( *v9 != &v18 )
      __fastfail(3u);
    *v9 = (_QWORD *)(v11 + 192);
    v19 = (_QWORD **)(v11 + 192);
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v11);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v10,
      "DSM PnPPower Tag",
      1980LL,
      "drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
  }
  *(_DWORD *)(v3 + 12) = v4;
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v6);
  if ( !v7 )
    goto LABEL_11;
  v13 = v4 == 0;
  v14 = v18 - 24;
  v15 = *v18 - 192LL;
  if ( &v18 != v18 )
  {
    do
    {
      HUBSM_AddEvent((__int64)(v14 + 61), a2);
      v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              v14);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v16,
        "DSM PnPPower Tag",
        2029LL,
        "drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
      v17 = (_QWORD *)(v15 + 192);
      v14 = (_QWORD *)v15;
      v15 = *(_QWORD *)(v15 + 192) - 192LL;
    }
    while ( &v18 != v17 );
  }
  if ( v13 )
LABEL_11:
    HUBSM_AddEvent(a1 + 1208, 0x7E2u);
}
