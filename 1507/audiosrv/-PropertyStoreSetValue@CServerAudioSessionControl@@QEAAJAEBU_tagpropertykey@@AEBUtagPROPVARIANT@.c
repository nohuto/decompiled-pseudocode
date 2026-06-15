/*
 * XREFs of ?PropertyStoreSetValue@CServerAudioSessionControl@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x18007D688
 * Callers:
 *     AudioSessionPropertyStoreSetValue @ 0x18007E5B0 (AudioSessionPropertyStoreSetValue.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall CServerAudioSessionControl::PropertyStoreSetValue(
        CServerAudioSessionControl *this,
        const struct _tagpropertykey *a2,
        const struct tagPROPVARIANT *a3)
{
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x39u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, const struct tagPROPVARIANT *))(**((_QWORD **)this + 9) + 424LL))(
           *((_QWORD *)this + 9),
           a2,
           a3);
}
