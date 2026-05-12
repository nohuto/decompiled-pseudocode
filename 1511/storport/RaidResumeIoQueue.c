/*
 * XREFs of RaidResumeIoQueue @ 0x1C0009E74
 * Callers:
 *     RaidResumeUnitQueue @ 0x1C0009DC4 (RaidResumeUnitQueue.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0033A0C (RaidResumeAndRestartUnitQueue.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00277A8 (WPP_SF_.c)
 */

__int64 __fastcall RaidResumeIoQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned int v6; // ecx

  v5 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 44));
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 10LL, &WPP_7b4f6bc752390653ffc9fb5187272117_Traceguids, a4);
    }
    _InterlockedAdd((volatile signed __int32 *)(a1 + 44), 1u);
    return 0;
  }
  else
  {
    v6 = 0;
    if ( !v5 )
    {
      v6 = 1;
      _InterlockedExchange((volatile __int32 *)(a1 + 152), 1);
    }
  }
  return v6;
}
