/*
 * XREFs of HUBMUX_QueuePowerUpEventToDSMs @ 0x1C000CE68
 * Callers:
 *     HUBHSM_NotifyingHubResumeInS0ToDevices @ 0x1C0006EB0 (HUBHSM_NotifyingHubResumeInS0ToDevices.c)
 *     HUBHSM_NotifyingHubResumeToDevices @ 0x1C0006ED0 (HUBHSM_NotifyingHubResumeToDevices.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevices @ 0x1C0006F00 (HUBHSM_NotifyingHubResumeWithResetToDevices.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure @ 0x1C0006F30 (HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure.c)
 *     HUBHSM_WaitingForDevicesToAcquireReferenceOnStart @ 0x1C00076A0 (HUBHSM_WaitingForDevicesToAcquireReferenceOnStart.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueuePowerUpEventToDSMs(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  KIRQL v5; // al
  int v6; // ebx
  __int64 v7; // rdx
  KIRQL v8; // r15
  __int64 v9; // rdx
  __int64 *v10; // rsi
  _QWORD **v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // [rsp+30h] [rbp-28h] BYREF
  _QWORD **v18; // [rsp+38h] [rbp-20h]

  v18 = &v17;
  v3 = a1 + 2240;
  v17 = &v17;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2240));
  v6 = 0;
  v7 = *(_QWORD *)(v3 + 64);
  v8 = v5;
  while ( 1 )
  {
    v9 = v7 - 176;
    v10 = (__int64 *)(v9 + 176);
    if ( v3 + 64 == v9 + 176 )
      break;
    if ( (*(_DWORD *)(v9 + 224) & 1) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v9 + 224), 0xFFFFFFFE);
      _InterlockedOr((volatile signed __int32 *)(v9 + 224), 4u);
      v11 = v18;
      *(_QWORD *)(v9 + 200) = v18;
      *(_QWORD *)(v9 + 192) = &v17;
      ++v6;
      if ( *v11 != &v17 )
        __fastfail(3u);
      *v11 = (_QWORD *)(v9 + 192);
      v18 = (_QWORD **)(v9 + 192);
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v12,
        "DSM PnPPower Tag",
        2338LL,
        "drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
    }
    v7 = *v10;
  }
  *(_DWORD *)(v3 + 12) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v8);
  if ( v6 )
  {
    v13 = v17 - 24;
    v14 = *v17 - 192LL;
    if ( &v17 != v17 )
    {
      do
      {
        HUBSM_AddEvent((__int64)(v13 + 61), a2);
        v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                v13);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                  + 1648))(
          WdfDriverGlobals,
          v15,
          "DSM PnPPower Tag",
          2379LL,
          "drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
        v16 = (_QWORD *)(v14 + 192);
        v13 = (_QWORD *)v14;
        v14 = *(_QWORD *)(v14 + 192) - 192LL;
      }
      while ( &v17 != v16 );
    }
  }
  else
  {
    HUBSM_AddEvent(a1 + 1184, 0x7DEu);
  }
}
