/*
 * XREFs of ?ReleaseSaDevice@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800751F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEBAAEAPEAVCEndpointSaDeviceLists@@H@Z @ 0x1800685CC (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEnd.c)
 *     ??_GCSaDeviceInstance@@QEAAPEAXI@Z @ 0x180073B50 (--_GCSaDeviceInstance@@QEAAPEAXI@Z.c)
 *     ?AddSaDevice@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEAVCSaDeviceInstance@@@Z @ 0x180073CD0 (-AddSaDevice@CSaProvider@@IEAAJPEAV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?FindSaDeviceForAudioDeviceGraph@CEndpointSaDeviceLists@@QEAAPEAVCSaDeviceInstance@@PEAUIAudioDeviceGraph@@@Z @ 0x180074184 (-FindSaDeviceForAudioDeviceGraph@CEndpointSaDeviceLists@@QEAAPEAVCSaDeviceInstance@@PEAUIAudioDe.c)
 *     ?ReleaseSaDevice@CSaDeviceInstance@@QEAAXXZ @ 0x180075128 (-ReleaseSaDevice@CSaDeviceInstance@@QEAAXXZ.c)
 *     ?RemoveSaDevice@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEAVCSaDeviceInstance@@@Z @ 0x180075720 (-RemoveSaDevice@CSaProvider@@IEAAJPEAV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G.c)
 */

__int64 __fastcall CSaProvider::ReleaseSaDevice(CSaProvider *this, struct IAudioDeviceGraph *a2)
{
  struct IAudioDeviceGraph *v2; // rbx
  CSaProvider *v3; // rdi
  int v4; // r14d
  struct _RTL_CRITICAL_SECTION *v5; // r15
  int i; // r12d
  CEndpointSaDeviceLists **ValueAt; // rax
  struct CSaDeviceInstance *SaDeviceForAudioDeviceGraph; // rax
  __int64 *v9; // rbx
  char *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  CSaDeviceInstance *v17; // [rsp+80h] [rbp+18h]

  v2 = a2;
  v3 = this;
  v4 = -2005139430;
  v5 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Du,
      (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
      a2,
      -2LL);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 64));
  for ( i = 0; i < *((_DWORD *)v3 + 30); ++i )
  {
    ValueAt = (CEndpointSaDeviceLists **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::GetValueAt(
                                           (__int64)v3 + 104,
                                           i);
    SaDeviceForAudioDeviceGraph = CEndpointSaDeviceLists::FindSaDeviceForAudioDeviceGraph(*ValueAt, v2);
    v9 = (__int64 *)SaDeviceForAudioDeviceGraph;
    v17 = SaDeviceForAudioDeviceGraph;
    if ( SaDeviceForAudioDeviceGraph )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)SaDeviceForAudioDeviceGraph + 8, 0xFFFFFFFF) == 1 )
      {
        if ( *((_DWORD *)SaDeviceForAudioDeviceGraph + 4) )
        {
          v10 = *(char **)&WPP_GLOBAL_Control.Data1;
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0x1Eu,
              (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
              SaDeviceForAudioDeviceGraph);
          }
          try
          {
            CSaProvider::AddSaDevice(v10, (__int64)v3 + 128, v9);
            CSaProvider::RemoveSaDevice(v11, (char *)v3 + 104, v9);
          }
          catch ( ATL::CAtlException )
          {
            CSaProvider::RemoveSaDevice(v12, (char *)this + 104, v17);
            CSaDeviceInstance::ReleaseSaDevice(v17);
            v3 = this;
            v5 = (struct _RTL_CRITICAL_SECTION *)v17;
          }
        }
        else
        {
          v13 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0x1Fu,
              (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
              SaDeviceForAudioDeviceGraph);
          }
          CSaProvider::RemoveSaDevice(v13, (char *)v3 + 104, v9);
          CSaDeviceInstance::ReleaseSaDevice((CSaDeviceInstance *)v9);
          v5 = (struct _RTL_CRITICAL_SECTION *)v9;
        }
      }
      v4 = 0;
      break;
    }
    v2 = a2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 64));
  if ( v5 )
  {
    if ( g_PolicyManager )
      (*(void (__fastcall **)(CWindowsPolicyManager *, HANDLE *))(*(_QWORD *)g_PolicyManager + 152LL))(
        g_PolicyManager,
        &v5[1].LockSemaphore);
    CSaDeviceInstance::`scalar deleting destructor'(v5);
  }
  if ( v4 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x20u,
      (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
      v4);
  }
  return (unsigned int)v4;
}
