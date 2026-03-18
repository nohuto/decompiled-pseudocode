/*
 * XREFs of HUBPDO_IdleResiliencySettingCallback @ 0x1C0017130
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C0016BDC (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 */

__int64 __fastcall HUBPDO_IdleResiliencySettingCallback(
        LPCGUID SettingGuid,
        unsigned __int8 *Value,
        ULONG ValueLength,
        _QWORD *Context)
{
  unsigned __int8 v4; // si
  unsigned int v5; // edi
  __int64 v7; // rcx

  v4 = *Value;
  v5 = 0;
  if ( !*Value )
  {
    v7 = Context[2];
    if ( *(_DWORD *)(v7 + 400) == 1 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 4), 1, 0) )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(Context[1] + 1432LL),
          3u,
          5u,
          0x88u,
          (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids);
      }
      else
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(Context[1] + 1432LL),
          4u,
          2u,
          0x87u,
          (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids);
        EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper((__int64)Context, 2228255LL, 0);
        HUBSM_AddEvent((__int64)(Context + 61), 4011);
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  WPP_RECORDER_SF_dD(
    *(_QWORD *)(Context[1] + 1432LL),
    4u,
    5u,
    0x89u,
    (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
    v4,
    v5);
  return v5;
}
