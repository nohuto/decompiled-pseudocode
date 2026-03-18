/*
 * XREFs of HUBMUX_UnregisterWithHSM @ 0x1C000D078
 * Callers:
 *     HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup @ 0x1C0017590 (HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup.c)
 *     HUBDSM_UnregsiteringWithHsmOnDetach @ 0x1C00175C0 (HUBDSM_UnregsiteringWithHsmOnDetach.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_UnregisterWithHSM(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // bp
  bool v4; // si
  KIRQL v5; // r8
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx

  if ( (*(_DWORD *)(a1 + 1620) & 0x40) != 0 )
  {
    *(_QWORD *)(a1 + 1500) = 0LL;
    *(_QWORD *)(a1 + 1508) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFFFFBF);
  }
  v2 = *(_QWORD *)a1 + 2240LL;
  v3 = 0;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
  {
    v3 = 1;
    --*(_DWORD *)(v2 + 28);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 224), 0xFFFFFFFD);
  }
  if ( (*(_DWORD *)(a1 + 224) & 4) != 0 )
    v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 12), 0xFFFFFFFF) == 1;
  v6 = *(_QWORD *)(a1 + 176);
  v7 = *(_QWORD **)(a1 + 184);
  if ( *(_QWORD *)(v6 + 8) != a1 + 176 || *v7 != a1 + 176 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v8,
    "DSM Registration Tag",
    2696LL,
    "drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
  if ( v4 )
  {
    if ( v3 )
      v9 = 2018;
    else
      v9 = 2014;
    HUBSM_AddEvent(*(_QWORD *)a1 + 1184LL, v9);
  }
}
