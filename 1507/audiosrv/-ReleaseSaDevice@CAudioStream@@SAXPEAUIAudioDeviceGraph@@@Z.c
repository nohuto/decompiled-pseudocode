/*
 * XREFs of ?ReleaseSaDevice@CAudioStream@@SAXPEAUIAudioDeviceGraph@@@Z @ 0x1800826BC
 * Callers:
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180016B88 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001E630 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?FinalRelease@CAudioStream@@MEAAXXZ @ 0x1800667A0 (-FinalRelease@CAudioStream@@MEAAXXZ.c)
 * Callees:
 *     GetSAProvider @ 0x18002E018 (GetSAProvider.c)
 *     ?Release@?$CComObject@VCSaProvider@@@ATL@@UEAAKXZ @ 0x18002E1D0 (-Release@-$CComObject@VCSaProvider@@@ATL@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioStream::ReleaseSaDevice(struct IAudioDeviceGraph *a1)
{
  volatile int *v2; // rdx
  int v3; // eax
  __int64 (__fastcall *v4)(__int64, volatile int *); // rdi
  int v5; // [rsp+20h] [rbp-28h]
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
  {
    v6 = 0LL;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xCu,
        (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        a1);
    }
    if ( (int)GetSAProvider((__int64)&v6) >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)a1 + 16LL))(a1);
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        v5 = v3;
        WPP_SF_qD(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0xDu,
          (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
          a1,
          v5);
      }
      (*(void (__fastcall **)(__int64, struct IAudioDeviceGraph *))(*(_QWORD *)v6 + 32LL))(v6, a1);
    }
    if ( v6 )
    {
      v4 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v6 + 16LL);
      if ( v4 == ATL::CComObject<CSaProvider>::Release )
        ATL::CComObject<CSaProvider>::Release(v6, v2);
      else
        ((void (__fastcall *)(__int64))v4)(v6);
    }
  }
}
