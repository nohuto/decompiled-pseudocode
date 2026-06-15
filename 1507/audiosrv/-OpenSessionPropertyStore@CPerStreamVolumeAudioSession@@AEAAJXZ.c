/*
 * XREFs of ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003543C
 * Callers:
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18001372C (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180013780 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180013FE0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x180033440 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180036D68 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_Sq @ 0x18007C2E0 (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::OpenSessionPropertyStore(CPerStreamVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  int v3; // edi
  struct IPropertyStore **v4; // rsi
  CPolicyConfig *v5; // rcx
  unsigned __int16 *v6; // rbx
  int AudioSessionPropertyStore; // eax
  ATL::CStringData *v8; // rcx
  unsigned __int16 *v10; // [rsp+50h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 792);
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 792));
  v4 = (struct IPropertyStore **)((char *)this + 832);
  if ( !*((_QWORD *)this + 104) )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v10);
    v3 = CAudioSessionInstanceId::ToPersistedString((char *)this + 632, &v10, 1LL);
    if ( v3 < 0 )
    {
      v8 = (ATL::CStringData *)(v10 - 12);
    }
    else
    {
      v5 = *(CPolicyConfig **)&WPP_GLOBAL_Control.Data1;
      v6 = v10;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_S(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          161LL,
          &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          v10);
      }
      AudioSessionPropertyStore = CPolicyConfig::GetAudioSessionPropertyStore(v5, v6, v4);
      v3 = AudioSessionPropertyStore;
      if ( AudioSessionPropertyStore )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0xA2u,
            (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
            AudioSessionPropertyStore);
        }
      }
      else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
             && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_Sq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          163,
          (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          (_DWORD)v6,
          (char)*v4);
      }
      v8 = (ATL::CStringData *)(v6 - 12);
    }
    ATL::CStringData::Release(v8);
  }
  LeaveCriticalSection(v1);
  if ( v3 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xA4u,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
