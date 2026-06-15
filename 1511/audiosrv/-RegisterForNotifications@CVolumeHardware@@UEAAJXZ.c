/*
 * XREFs of ?RegisterForNotifications@CVolumeHardware@@UEAAJXZ @ 0x180041960
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180043950 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeHardware::RegisterForNotifications(CVolumeHardware *this)
{
  int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, CVolumeHardware *))(**((_QWORD **)this + 11) + 112LL))(
         *((_QWORD *)this + 11),
         &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
         this);
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Bu,
        (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
        v2);
    }
  }
  else
  {
    *((_DWORD *)this + 30) = 1;
  }
  return (unsigned int)v2;
}
