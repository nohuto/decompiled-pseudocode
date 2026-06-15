/*
 * XREFs of ?PropertyStoreGetAt@CServerAudioSessionControl@@QEAAJKPEAU_tagpropertykey@@@Z @ 0x1800787C0
 * Callers:
 *     AudioSessionPropertyStoreGetAt @ 0x180079640 (AudioSessionPropertyStoreGetAt.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall CServerAudioSessionControl::PropertyStoreGetAt(
        CServerAudioSessionControl *this,
        unsigned int a2,
        struct _tagpropertykey *a3)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x37u, (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _tagpropertykey *))(**((_QWORD **)this + 9) + 408LL))(
           *((_QWORD *)this + 9),
           a2,
           a3);
}
