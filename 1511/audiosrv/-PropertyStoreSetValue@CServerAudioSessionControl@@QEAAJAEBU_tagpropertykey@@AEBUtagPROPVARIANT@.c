/*
 * XREFs of ?PropertyStoreSetValue@CServerAudioSessionControl@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800788E8
 * Callers:
 *     AudioSessionPropertyStoreSetValue @ 0x1800797D0 (AudioSessionPropertyStoreSetValue.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall CServerAudioSessionControl::PropertyStoreSetValue(
        CServerAudioSessionControl *this,
        const struct _tagpropertykey *a2,
        const struct tagPROPVARIANT *a3)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, const struct tagPROPVARIANT *))(**((_QWORD **)this + 9) + 424LL))(
           *((_QWORD *)this + 9),
           a2,
           a3);
}
