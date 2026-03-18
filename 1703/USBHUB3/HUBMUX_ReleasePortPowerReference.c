/*
 * XREFs of HUBMUX_ReleasePortPowerReference @ 0x1C000D604
 * Callers:
 *     HUBPSM20_PoweredOffSuspended @ 0x1C000EA50 (HUBPSM20_PoweredOffSuspended.c)
 *     HUBPSM30_ReleasingPowerReferenceOnHubS0IdleInD3Cold @ 0x1C000ECE0 (HUBPSM30_ReleasingPowerReferenceOnHubS0IdleInD3Cold.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMUX_ReleasePortPowerReference(volatile signed __int32 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFFB);
  _InterlockedAnd(a1 + 66, 0xFFFFFFF7);
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 2312));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 2300), 0xFFFFFFFF) == 1 )
    HUBSM_AddEvent(v2 + 1232, 2058);
  result = *((unsigned int *)a1 + 334);
  if ( (result & 0x20) != 0 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
               WdfDriverGlobals,
               *(_QWORD *)(*(_QWORD *)a1 + 16LL),
               0LL,
               1140LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
    _InterlockedAnd(a1 + 334, 0xFFFFFFDF);
  }
  return result;
}
