/*
 * XREFs of ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140010F40
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140001C10 (-Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCal.c)
 *     ?Initialize@CSystemAudioDeviceSharedNew@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000E690 (-Initialize@CSystemAudioDeviceSharedNew@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002B520 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?Initialize@CSystemAudioDeviceShared@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002CC40 (-Initialize@CSystemAudioDeviceShared@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCall.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140011174 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x140011624 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudi.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x140018A50 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x140029F74 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x14002A2CC (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSystemAudioDeviceCollection::Add(unsigned __int64 a1, struct CSystemAudioDeviceBase *a2)
{
  struct ATL::CStringData *(__fastcall *v3)(ATL::CAtlStringMgr *__hidden); // rdi
  struct ATL::CStringData *NilString; // rax
  unsigned __int16 v5; // dx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // esi
  volatile signed __int32 *v9; // r14
  HINSTANCE StringResourceInstance; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v13; // [rsp+30h] [rbp-28h]
  struct CSystemAudioDeviceBase *v14; // [rsp+68h] [rbp+10h] BYREF
  volatile signed __int32 *v15; // [rsp+70h] [rbp+18h] BYREF

  v14 = a2;
  lpCriticalSection = &g_CritSecSadMap;
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v3 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v3((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v15 = (volatile signed __int32 *)((char *)NilString + 24);
  if ( !a1 )
  {
    LODWORD(v6) = 0;
LABEL_7:
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v15, a1, (unsigned int)v6);
    goto LABEL_8;
  }
  if ( (a1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a1 + 2 * v6) );
    goto LABEL_7;
  }
  StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a1, v5);
  if ( StringResourceInstance )
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      &v15,
      StringResourceInstance,
      (unsigned __int16)a1);
LABEL_8:
  v8 = ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::Add(
         v7,
         &v15,
         &v14);
  v9 = v15;
  if ( _InterlockedExchangeAdd(v15 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**((_QWORD **)v9 - 3) + 8LL))(
      *((_QWORD *)v9 - 3),
      v9 - 6);
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
