/*
 * XREFs of RaidAdapterDeviceReady @ 0x1C0021388
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0012790 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0005768 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C002572C (WPP_SF_ddd.c)
 *     RaidUnitReady @ 0x1C0033240 (RaidUnitReady.c)
 */

__int64 __fastcall RaidAdapterDeviceReady(__int64 a1, unsigned int a2)
{
  __int64 Unit; // rax
  __int64 result; // rax

  Unit = RaidAdapterFindUnit(a1, a2);
  if ( Unit )
    return RaidUnitReady(Unit);
  result = (__int64)&WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    result = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( (result & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      return WPP_SF_ddd(
               WPP_GLOBAL_Control->AttachedDevice,
               55LL,
               &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
               (unsigned __int8)a2,
               BYTE1(a2),
               BYTE2(a2));
  }
  return result;
}
