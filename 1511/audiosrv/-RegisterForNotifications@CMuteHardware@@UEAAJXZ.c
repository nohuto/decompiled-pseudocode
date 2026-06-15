/*
 * XREFs of ?RegisterForNotifications@CMuteHardware@@UEAAJXZ @ 0x180041250
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180043950 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall CMuteHardware::RegisterForNotifications(CMuteHardware *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids, this);
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, CMuteHardware *))(**((_QWORD **)this + 5) + 112LL))(
         *((_QWORD *)this + 5),
         &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
         this);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Au,
        (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
        v2);
    }
  }
  else
  {
    *((_DWORD *)this + 14) = 1;
  }
  return v3;
}
