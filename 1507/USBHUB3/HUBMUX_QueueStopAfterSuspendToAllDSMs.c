/*
 * XREFs of HUBMUX_QueueStopAfterSuspendToAllDSMs @ 0x1C000CBFC
 * Callers:
 *     HUBHSM_NotifyingHubStopToDevicesOnSuspriseRemove @ 0x1C0006FA0 (HUBHSM_NotifyingHubStopToDevicesOnSuspriseRemove.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueueStopAfterSuspendToAllDSMs(__int64 a1)
{
  __int64 v2; // rbx
  KIRQL v3; // r12
  int v4; // esi
  __int64 v5; // rcx
  int v6; // edi
  _QWORD **v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // r15
  bool v11; // bl
  _QWORD *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // [rsp+30h] [rbp-38h] BYREF
  _QWORD **v17; // [rsp+38h] [rbp-30h]

  v17 = &v16;
  v2 = a1 + 2240;
  v16 = &v16;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2240));
  _InterlockedOr((volatile signed __int32 *)(v2 + 32), 8u);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 64);
  v6 = 0;
  while ( 1 )
  {
    v9 = v5 - 176;
    v10 = (__int64 *)(v9 + 176);
    if ( v2 + 64 == v9 + 176 )
      break;
    ++v6;
    _InterlockedOr((volatile signed __int32 *)(v9 + 224), 4u);
    v7 = v17;
    ++v4;
    *(_QWORD *)(v9 + 192) = &v16;
    *(_QWORD *)(v9 + 200) = v7;
    if ( *v7 != &v16 )
      __fastfail(3u);
    *v7 = (_QWORD *)(v9 + 192);
    v17 = (_QWORD **)(v9 + 192);
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v9);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v8,
      "DSM PnPPower Tag",
      2107LL,
      "drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
    v5 = *v10;
  }
  *(_DWORD *)(v2 + 12) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v3);
  if ( !v4 )
    goto LABEL_9;
  v11 = v6 == 0;
  v12 = v16 - 24;
  v13 = *v16 - 192LL;
  if ( &v16 != v16 )
  {
    do
    {
      HUBSM_AddEvent((__int64)(v12 + 61), 0xFBAu);
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              v12);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v14,
        "DSM PnPPower Tag",
        2156LL,
        "drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
      v15 = (_QWORD *)(v13 + 192);
      v12 = (_QWORD *)v13;
      v13 = *(_QWORD *)(v13 + 192) - 192LL;
    }
    while ( &v16 != v15 );
  }
  if ( v11 )
LABEL_9:
    HUBSM_AddEvent(a1 + 1184, 0x7E6u);
}
