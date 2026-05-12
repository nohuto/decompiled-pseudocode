/*
 * XREFs of RaidAdapterDeviceBusy @ 0x1C00212D0
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0012790 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0005768 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C002572C (WPP_SF_ddd.c)
 */

void __fastcall RaidAdapterDeviceBusy(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 Unit; // rsi
  KIRQL v5; // al

  Unit = RaidAdapterFindUnit(a1, a2);
  if ( Unit )
  {
    if ( a3 >= 0x7FFFFFFF )
      a3 = 0x7FFFFFFF;
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Unit + 472));
    if ( (signed int)a3 > *(_DWORD *)(Unit + 476) )
      a3 = *(_DWORD *)(Unit + 476);
    *(_DWORD *)(Unit + 432) = a3;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(Unit + 472), v5);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      54LL,
      &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
      (unsigned __int8)a2,
      BYTE1(a2),
      BYTE2(a2));
  }
}
