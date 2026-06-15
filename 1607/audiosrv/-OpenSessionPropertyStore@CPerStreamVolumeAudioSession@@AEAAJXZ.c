/*
 * XREFs of ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005DD8C
 * Callers:
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180008AD0 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180008B10 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800090E0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_Sq @ 0x18005FC4C (WPP_SF_Sq.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180066A08 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x18006B4C8 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::OpenSessionPropertyStore(CPerStreamVolumeAudioSession *this)
{
  int v2; // edi
  struct IPropertyStore **v3; // rsi
  ATL::CStringData *v4; // rcx
  CPolicyConfig *v5; // rcx
  unsigned __int16 *v6; // rbx
  int AudioSessionPropertyStore; // eax
  LPCRITICAL_SECTION v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  unsigned __int16 *v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 1016));
  v3 = (struct IPropertyStore **)((char *)this + 1056);
  if ( !*((_QWORD *)this + 132) )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v11);
    v2 = CAudioSessionInstanceId::ToPersistedString((char *)this + 784, &v11, 1LL);
    if ( v2 >= 0 )
    {
      v5 = WPP_GLOBAL_Control;
      v6 = v11;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x78u,
          (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
          v11);
      }
      AudioSessionPropertyStore = CPolicyConfig::GetAudioSessionPropertyStore(v5, v6, v3);
      v2 = AudioSessionPropertyStore;
      if ( AudioSessionPropertyStore )
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x79u,
            (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
            AudioSessionPropertyStore);
        }
      }
      else if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
             && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          122,
          (unsigned int)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
          (_DWORD)v6,
          (char)*v3);
      }
      v4 = (ATL::CStringData *)(v6 - 12);
    }
    else
    {
      v4 = (ATL::CStringData *)(v11 - 12);
    }
    ATL::CStringData::Release(v4);
    if ( v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::OpenSessionPropertyStore", 5050, v2);
  }
  if ( v10 )
    ATL::CCritSecLock::Unlock(&v9);
  return (unsigned int)v2;
}
