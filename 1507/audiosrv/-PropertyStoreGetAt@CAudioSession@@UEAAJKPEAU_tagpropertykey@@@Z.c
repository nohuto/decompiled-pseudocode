/*
 * XREFs of ?PropertyStoreGetAt@CAudioSession@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x18007AD90
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreGetAt(CAudioSession *this, unsigned int a2, struct _tagpropertykey *a3)
{
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xD2u,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _tagpropertykey *))(**((_QWORD **)this + 58) + 32LL))(
           *((_QWORD *)this + 58),
           a2,
           a3);
}
