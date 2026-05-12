/*
 * XREFs of RaidAdapterDeviceReady @ 0x1C0023A68
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00147E0 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006838 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C0027818 (WPP_SF_ddd.c)
 *     RaidUnitReady @ 0x1C0034BB0 (RaidUnitReady.c)
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
               &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids,
               (unsigned __int8)a2,
               BYTE1(a2),
               BYTE2(a2));
  }
  return result;
}
