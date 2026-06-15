/*
 * XREFs of ?PropertyStoreCommit@CAudioSession@@UEAAJXZ @ 0x180075FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreCommit(CAudioSession *this)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDCu, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 77) + 56LL))(*((_QWORD *)this + 77));
}
