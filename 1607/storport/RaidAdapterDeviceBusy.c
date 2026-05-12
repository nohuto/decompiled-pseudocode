/*
 * XREFs of RaidAdapterDeviceBusy @ 0x1C0026D78
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0018290 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C002AED4 (WPP_SF_ddd.c)
 */

void __fastcall RaidAdapterDeviceBusy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 Unit; // rsi
  KIRQL v6; // al
  int v7; // [rsp+48h] [rbp+10h]

  v7 = a2;
  v4 = a3;
  Unit = RaidAdapterFindUnit(a1, a2, a3, a4);
  if ( Unit )
  {
    if ( v4 >= 0x7FFFFFFF )
      v4 = 0x7FFFFFFF;
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Unit + 472));
    if ( (signed int)v4 > *(_DWORD *)(Unit + 476) )
      v4 = *(_DWORD *)(Unit + 476);
    *(_DWORD *)(Unit + 432) = v4;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(Unit + 472), v6);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      54LL,
      &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
      (unsigned __int8)v7,
      BYTE1(v7),
      BYTE2(v7));
  }
}
