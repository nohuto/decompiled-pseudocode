/*
 * XREFs of ?ReleaseSaDevice@CSaDeviceInstance@@QEAAXXZ @ 0x180075128
 * Callers:
 *     ??1CSaDeviceInstance@@QEAA@XZ @ 0x1800738F4 (--1CSaDeviceInstance@@QEAA@XZ.c)
 *     ?ReleaseSaDevice@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800751F0 (-ReleaseSaDevice@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     _CSaProvider::ReleaseSaDevice_::_1_::catch$0 @ 0x1800753FC (_CSaProvider--ReleaseSaDevice_--_1_--catch$0.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

void __fastcall CSaDeviceInstance::ReleaseSaDevice(CSaDeviceInstance *this)
{
  if ( *((_QWORD *)this + 3) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xBu,
        (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 16LL))(*((_QWORD *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xCu,
        (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids);
    }
  }
}
