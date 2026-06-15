/*
 * XREFs of ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D880
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedNew@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000E690 (-Initialize@CSystemAudioDeviceSharedNew@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?Cleanup@CSystemAudioDeviceSharedNew@@MEAAXXZ @ 0x14000E8A0 (-Cleanup@CSystemAudioDeviceSharedNew@@MEAAXXZ.c)
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140011830 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140011960 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140011E00 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x140012810 (--1CStreamGroup@@QEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceShared@@MEAAXXZ @ 0x14002BEB0 (-Cleanup@CSystemAudioDeviceShared@@MEAAXXZ.c)
 *     ?CreateStream@CSystemAudioDeviceShared@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002C340 (-CreateStream@CSystemAudioDeviceShared@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVIC.c)
 *     ?DestroyStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002C520 (-DestroyStream@CSystemAudioDeviceShared@@UEAAJ_K@Z.c)
 *     AudioDGGetDeviceGraphWnfStateName @ 0x1400335E0 (AudioDGGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400106A0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x1400114F4 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140018AD0 (--_V@YAXPEAX@Z.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x140025E3C (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140026594 (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ?FreePlexes@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAXXZ @ 0x140026608 (-FreePlexes@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElement.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002A1C4 (-FreeNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAA_NI_N@Z @ 0x14002A1EC (-InitHashTable@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTra.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x14002A3B4 (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?Rehash@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXI@Z @ 0x14002A5B4 (-Rehash@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x1400336B8 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 *     ?DumpDeviceGraph@@YAJPEAVCStreamGroup@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x1400337C8 (-DumpDeviceGraph@@YAJPEAVCStreamGroup@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCD.c)
 *     ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x140033CBC (-LinkDisplayNodes@@YAXAEAV-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDispl.c)
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x140034188 (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 */

// Hidden C++ exception states: #wind=5
void PublishDeviceGraphWnfState(void)
{
  unsigned __int64 v0; // rax
  float v1; // xmm1_4
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  float v4; // xmm1_4
  unsigned __int64 v5; // rax
  void *v6; // rsi
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  bool v10; // r8
  int v11; // r15d
  unsigned int v12; // r14d
  _QWORD *ValueAt; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  CDisplayNode *v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // r14d
  unsigned int i; // edx
  __int64 v22; // rsi
  __int64 v23; // rdi
  _QWORD *v24; // rbx
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // r14d
  unsigned int j; // edx
  __int64 v30; // rsi
  __int64 v31; // rdi
  _QWORD *v32; // rbx
  unsigned __int64 v33; // rax
  unsigned int v34; // eax
  unsigned int v35; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C8h]
  void *v38; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v39; // [rsp+50h] [rbp-B8h]
  int v40; // [rsp+58h] [rbp-B0h]
  int v41; // [rsp+5Ch] [rbp-ACh]
  __int64 v42; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v43; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v44; // [rsp+70h] [rbp-98h]
  __int64 v45; // [rsp+78h] [rbp-90h]
  ATL::CAtlPlex *v46; // [rsp+80h] [rbp-88h]
  __int64 v47; // [rsp+88h] [rbp-80h]
  void *Block; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v49; // [rsp+A0h] [rbp-68h]
  int v50; // [rsp+A8h] [rbp-60h]
  int v51; // [rsp+ACh] [rbp-5Ch]
  int v52; // [rsp+B0h] [rbp-58h]
  int v53; // [rsp+B4h] [rbp-54h]
  unsigned __int64 v54; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v55; // [rsp+C0h] [rbp-48h]
  int v56; // [rsp+C8h] [rbp-40h]
  int v57; // [rsp+CCh] [rbp-3Ch]
  ATL::CAtlPlex *v58; // [rsp+D0h] [rbp-38h]
  __int64 v59; // [rsp+D8h] [rbp-30h]
  __int128 v60; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v61; // [rsp+F8h] [rbp-10h]
  ATL::CAtlPlex *v62[2]; // [rsp+100h] [rbp-8h]
  int v63; // [rsp+110h] [rbp+8h]
  __int64 v64; // [rsp+118h] [rbp+10h]
  unsigned int v65; // [rsp+158h] [rbp+50h] BYREF
  void *v66; // [rsp+160h] [rbp+58h] BYREF

  v64 = -2LL;
  v60 = 0LL;
  v61 = 0LL;
  *(_OWORD *)v62 = 0LL;
  v63 = 10;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 17;
  v45 = 0xA00000000LL;
  v46 = 0LL;
  v47 = 0LL;
  v41 = 1061158912;
  v42 = 0x401000003E800000LL;
  v0 = 0LL;
  v1 = FLOAT_38_25;
  if ( 38.25 >= 9.223372e18 )
  {
    v1 = 38.25 - 9.223372e18;
    if ( (float)(38.25 - 9.223372e18) < 9.223372e18 )
      v0 = 0x8000000000000000uLL;
  }
  v2 = v0 + (unsigned int)(int)v1;
  v43 = v2;
  v3 = 0LL;
  v4 = FLOAT_4_25;
  if ( 9.223372e18 <= 4.25 )
  {
    v4 = 4.25 - 9.223372e18;
    if ( (float)(4.25 - 9.223372e18) < 9.223372e18 )
      v3 = 0x8000000000000000uLL;
  }
  v5 = v3 + (unsigned int)(int)v4;
  v44 = v5;
  if ( v5 < 0x11 )
    v44 = 0LL;
  Block = 0LL;
  v49 = 0LL;
  v50 = 17;
  v56 = 0;
  v57 = 10;
  v58 = 0LL;
  v59 = 0LL;
  v51 = 1061158912;
  v52 = 1048576000;
  v53 = 1074790400;
  v54 = v2;
  v55 = v3 + (unsigned int)(int)v4;
  if ( v5 < 0x11 )
    v55 = 0LL;
  v6 = 0LL;
  v66 = 0LL;
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection, &g_CritSecSadMap, 0);
    v11 = dword_140055C00;
    v12 = 0;
    if ( dword_140055C00 <= 0 )
    {
LABEL_31:
      if ( (_BYTE)v37 )
        LeaveCriticalSection(lpCriticalSection);
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection, &g_CritSecStreamGroupList, v10);
      v14 = (_QWORD *)StreamGroupList;
      if ( !StreamGroupList )
      {
LABEL_36:
        if ( (_BYTE)v37 )
          LeaveCriticalSection(lpCriticalSection);
        LinkDisplayNodes(&v38, &Block);
        v16 = SerializeDeviceGraphs(&v60, &v66, &v65);
        v6 = v66;
        if ( v16 >= 0 )
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
            g_DeviceGraphWnfStateName,
            0LL,
            v66,
            v65,
            0LL);
LABEL_40:
        while ( v61 )
        {
          if ( !(_QWORD)v60 )
            ATL::AtlThrowImpl(-2147467259);
          v17 = *(CDisplayNode **)(v60 + 16);
          v18 = *(_QWORD *)v60;
          *(_QWORD *)&v60 = v18;
          if ( v18 )
            *(_QWORD *)(v18 + 8) = 0LL;
          else
            v60 = 0uLL;
          ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode(&v60);
          if ( v17 )
            CDisplayNode::`scalar deleting destructor'(v17, v19);
        }
        goto LABEL_12;
      }
      while ( 1 )
      {
        v15 = v14[2];
        v14 = (_QWORD *)*v14;
        if ( (int)DumpDeviceGraph(v15, &v60, &v38, &Block) < 0 )
          break;
        if ( !v14 )
          goto LABEL_36;
      }
    }
    else
    {
      while ( 1 )
      {
        ValueAt = (_QWORD *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
                              v9,
                              v12);
        if ( (*(int (__fastcall **)(_QWORD, __int128 *, void **, void **))(*(_QWORD *)*ValueAt + 168LL))(
               *ValueAt,
               &v60,
               &v38,
               &Block) < 0 )
          break;
        if ( (int)++v12 >= v11 )
          goto LABEL_31;
      }
    }
    if ( (_BYTE)v37 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_40;
  }
LABEL_12:
  operator delete(v6);
  ++v56;
  v7 = Block;
  if ( Block )
  {
    v20 = 0;
    for ( i = v50; v20 < i; ++v20 )
    {
      v22 = v7[v20];
      if ( v22 )
      {
        do
        {
          v23 = v22;
          v24 = (_QWORD *)(v22 + 56);
          v22 = *(_QWORD *)(v22 + 56);
          ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v23 + 8);
          *v24 = v59;
          v59 = v23;
          v25 = v49 - 1;
          v49 = v25;
          if ( v25 < v55 && !v56 )
          {
            v26 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &Block,
              v26);
            v25 = v49;
          }
          if ( !v25 )
            ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::FreePlexes(&Block);
        }
        while ( v22 );
        i = v50;
        v7 = Block;
      }
    }
  }
  operator delete[](v7);
  Block = 0LL;
  v49 = 0LL;
  if ( !v56 )
  {
    v27 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::InitHashTable(
      &Block,
      v27,
      0LL);
  }
  v59 = 0LL;
  if ( v58 )
  {
    ATL::CAtlPlex::FreeDataChain(v58);
    v58 = 0LL;
  }
  --v56;
  LODWORD(v45) = v45 + 1;
  v8 = v38;
  if ( v38 )
  {
    v28 = 0;
    for ( j = v40; v28 < j; ++v28 )
    {
      v30 = v8[v28];
      if ( v30 )
      {
        do
        {
          v31 = v30;
          v32 = (_QWORD *)(v30 + 56);
          v30 = *(_QWORD *)(v30 + 56);
          ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v31 + 8);
          *v32 = v47;
          v47 = v31;
          v33 = v39 - 1;
          v39 = v33;
          if ( v33 < v44 && !(_DWORD)v45 )
          {
            v34 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v38);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &v38,
              v34);
            v33 = v39;
          }
          if ( !v33 )
            ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::FreePlexes(&v38);
        }
        while ( v30 );
        j = v40;
        v8 = v38;
      }
    }
  }
  operator delete[](v8);
  v38 = 0LL;
  v39 = 0LL;
  if ( !(_DWORD)v45 )
  {
    v35 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v38);
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::InitHashTable(
      &v38,
      v35,
      0LL);
  }
  v47 = 0LL;
  if ( v46 )
  {
    ATL::CAtlPlex::FreeDataChain(v46);
    v46 = 0LL;
  }
  LODWORD(v45) = v45 - 1;
  while ( v61 )
  {
    if ( !(_QWORD)v60 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)&v60 = *(_QWORD *)v60;
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode(&v60);
  }
  v60 = 0LL;
  v62[1] = 0LL;
  if ( v62[0] )
    ATL::CAtlPlex::FreeDataChain(v62[0]);
}
