/*
 * XREFs of RaidAdapterDeviceReady @ 0x1C0026E30
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0018290 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C002AED4 (WPP_SF_ddd.c)
 *     RaidUnitReady @ 0x1C0037E20 (RaidUnitReady.c)
 */

__int64 __fastcall RaidAdapterDeviceReady(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Unit; // rax
  __int64 result; // rax
  int v6; // [rsp+48h] [rbp+10h]

  v6 = a2;
  Unit = RaidAdapterFindUnit(a1, a2, a3, a4);
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
               &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
               (unsigned __int8)v6,
               BYTE1(v6),
               BYTE2(v6));
  }
  return result;
}
