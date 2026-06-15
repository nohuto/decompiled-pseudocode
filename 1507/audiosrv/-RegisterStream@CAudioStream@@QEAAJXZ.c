/*
 * XREFs of ?RegisterStream@CAudioStream@@QEAAJXZ @ 0x1800824C0
 * Callers:
 *     ?SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z @ 0x1800667D8 (-SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z.c)
 * Callees:
 *     GetSAProvider @ 0x18002E018 (GetSAProvider.c)
 *     ?Release@?$CComObject@VCSaProvider@@@ATL@@UEAAKXZ @ 0x18002E1D0 (-Release@-$CComObject@VCSaProvider@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::RegisterStream(CAudioStream *this)
{
  volatile int *v2; // rdx
  int SAProvider; // edi
  __int64 (__fastcall *v4)(__int64, volatile int *); // rsi
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  SAProvider = GetSAProvider((__int64)&v6);
  if ( SAProvider < 0
    || (SAProvider = (*(__int64 (__fastcall **)(__int64, _QWORD, CAudioStream *))(*(_QWORD *)v6 + 56LL))(
                       v6,
                       *((_QWORD *)this + 6),
                       this),
        SAProvider < 0) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x11u,
        (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        SAProvider);
    }
  }
  if ( v6 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v6 + 16LL);
    if ( v4 == ATL::CComObject<CSaProvider>::Release )
      ATL::CComObject<CSaProvider>::Release(v6, v2);
    else
      ((void (__fastcall *)(__int64))v4)(v6);
  }
  return (unsigned int)SAProvider;
}
