/*
 * XREFs of HUBDSM_RegisteringWithHSM @ 0x1C0016C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_RegisteringWithHSM(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  KIRQL v3; // r8
  unsigned int v4; // edi
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_QWORD *)v1 + 2240LL;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  if ( (*(_DWORD *)(v2 + 32) & 8) != 0 )
  {
    v4 = 4065;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(v1 + 224), 2u);
    ++*(_DWORD *)(v2 + 28);
    v5 = *(_QWORD **)(v2 + 72);
    v6 = v1 + 176;
    *(_QWORD *)(v1 + 176) = v2 + 64;
    *(_QWORD *)(v1 + 184) = v5;
    if ( *v5 != v2 + 64 )
      __fastfail(3u);
    *v5 = v6;
    v4 = 4077;
    *(_QWORD *)(v2 + 72) = v6;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v3);
  if ( v4 == 4077 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v1);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v7,
      "DSM Registration Tag",
      2616LL,
      "drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
  }
  return v4;
}
