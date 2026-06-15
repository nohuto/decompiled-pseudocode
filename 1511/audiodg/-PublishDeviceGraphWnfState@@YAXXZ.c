/*
 * XREFs of ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000A5F0
 * Callers:
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140003860 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140003980 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140003DB0 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140003F20 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x1400045B0 (--1CStreamGroup@@QEAA@XZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005F50 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140006230 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002F0C0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     AudioDGGetDeviceGraphWnfStateName @ 0x140033850 (AudioDGGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x140008140 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x140017188 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140018A14 (--_V@YAXPEAX@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140026730 (-RemoveAll@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?FreePlexes@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAXXZ @ 0x1400267A4 (-FreePlexes@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CE.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAA_NI_N@Z @ 0x140028920 (-InitHashTable@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTra.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x14002916C (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?FreeNode@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002A720 (-FreeNode@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAXPEAV.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x14002A840 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     ?Rehash@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXI@Z @ 0x14002A9F4 (-Rehash@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x140033928 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 *     ?DumpDeviceGraph@@YAJPEAVCStreamGroup@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x1400339C8 (-DumpDeviceGraph@@YAJPEAVCStreamGroup@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCD.c)
 *     ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x140033F10 (-LinkDisplayNodes@@YAXAEAV-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDispl.c)
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x1400343DC (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
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
  int v10; // r15d
  unsigned int v11; // r14d
  _QWORD *ValueAt; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  CDisplayNode *v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // r14d
  unsigned int i; // edx
  __int64 v21; // rsi
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // r14d
  unsigned int j; // edx
  __int64 v29; // rsi
  __int64 v30; // rdi
  _QWORD *v31; // rbx
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C8h]
  void *v37; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-B8h]
  int v39; // [rsp+58h] [rbp-B0h]
  int v40; // [rsp+5Ch] [rbp-ACh]
  __int64 v41; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v42; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v43; // [rsp+70h] [rbp-98h]
  __int64 v44; // [rsp+78h] [rbp-90h]
  ATL::CAtlPlex *v45; // [rsp+80h] [rbp-88h]
  __int64 v46; // [rsp+88h] [rbp-80h]
  void *Block; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v48; // [rsp+A0h] [rbp-68h]
  int v49; // [rsp+A8h] [rbp-60h]
  int v50; // [rsp+ACh] [rbp-5Ch]
  int v51; // [rsp+B0h] [rbp-58h]
  int v52; // [rsp+B4h] [rbp-54h]
  unsigned __int64 v53; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v54; // [rsp+C0h] [rbp-48h]
  int v55; // [rsp+C8h] [rbp-40h]
  int v56; // [rsp+CCh] [rbp-3Ch]
  ATL::CAtlPlex *v57; // [rsp+D0h] [rbp-38h]
  __int64 v58; // [rsp+D8h] [rbp-30h]
  __int128 v59; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v60; // [rsp+F8h] [rbp-10h]
  ATL::CAtlPlex *v61[2]; // [rsp+100h] [rbp-8h]
  int v62; // [rsp+110h] [rbp+8h]
  __int64 v63; // [rsp+118h] [rbp+10h]
  unsigned int v64; // [rsp+158h] [rbp+50h] BYREF
  void *v65; // [rsp+160h] [rbp+58h] BYREF

  v63 = -2LL;
  v59 = 0LL;
  v60 = 0LL;
  *(_OWORD *)v61 = 0LL;
  v62 = 10;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 17;
  v44 = 0xA00000000LL;
  v45 = 0LL;
  v46 = 0LL;
  v40 = 1061158912;
  v41 = 0x401000003E800000LL;
  v0 = 0LL;
  v1 = FLOAT_38_25;
  if ( 38.25 >= 9.223372e18 )
  {
    v1 = 38.25 - 9.223372e18;
    if ( (float)(38.25 - 9.223372e18) < 9.223372e18 )
      v0 = 0x8000000000000000uLL;
  }
  v2 = v0 + (unsigned int)(int)v1;
  v42 = v2;
  v3 = 0LL;
  v4 = FLOAT_4_25;
  if ( 9.223372e18 <= 4.25 )
  {
    v4 = 4.25 - 9.223372e18;
    if ( (float)(4.25 - 9.223372e18) < 9.223372e18 )
      v3 = 0x8000000000000000uLL;
  }
  v5 = v3 + (unsigned int)(int)v4;
  v43 = v5;
  if ( v5 < 0x11 )
    v43 = 0LL;
  Block = 0LL;
  v48 = 0LL;
  v49 = 17;
  v55 = 0;
  v56 = 10;
  v57 = 0LL;
  v58 = 0LL;
  v50 = 1061158912;
  v51 = 1048576000;
  v52 = 1074790400;
  v53 = v2;
  v54 = v3 + (unsigned int)(int)v4;
  if ( v5 < 0x11 )
    v54 = 0LL;
  v6 = 0LL;
  v65 = 0LL;
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection, &g_CritSecSadMap);
    v10 = dword_140055C00;
    v11 = 0;
    if ( dword_140055C00 <= 0 )
    {
LABEL_31:
      if ( (_BYTE)v36 )
        LeaveCriticalSection(lpCriticalSection);
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection, &g_CritSecStreamGroupList);
      v13 = (_QWORD *)StreamGroupList;
      if ( !StreamGroupList )
      {
LABEL_36:
        if ( (_BYTE)v36 )
          LeaveCriticalSection(lpCriticalSection);
        LinkDisplayNodes(&v37, &Block);
        v15 = SerializeDeviceGraphs(&v59, &v65, &v64);
        v6 = v65;
        if ( v15 >= 0 )
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
            g_DeviceGraphWnfStateName,
            0LL,
            v65,
            v64,
            0LL);
LABEL_40:
        while ( v60 )
        {
          if ( !(_QWORD)v59 )
            ATL::AtlThrowImpl(-2147467259);
          v16 = *(CDisplayNode **)(v59 + 16);
          v17 = *(_QWORD *)v59;
          *(_QWORD *)&v59 = v17;
          if ( v17 )
            *(_QWORD *)(v17 + 8) = 0LL;
          else
            v59 = 0uLL;
          ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::FreeNode(&v59);
          if ( v16 )
            CDisplayNode::`scalar deleting destructor'(v16, v18);
        }
        goto LABEL_12;
      }
      while ( 1 )
      {
        v14 = v13[2];
        v13 = (_QWORD *)*v13;
        if ( (int)DumpDeviceGraph(v14, &v59, &v37, &Block) < 0 )
          break;
        if ( !v13 )
          goto LABEL_36;
      }
    }
    else
    {
      while ( 1 )
      {
        ValueAt = (_QWORD *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
                              v9,
                              v11);
        if ( (*(int (__fastcall **)(_QWORD, __int128 *, void **, void **))(*(_QWORD *)*ValueAt + 184LL))(
               *ValueAt,
               &v59,
               &v37,
               &Block) < 0 )
          break;
        if ( (int)++v11 >= v10 )
          goto LABEL_31;
      }
    }
    if ( (_BYTE)v36 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_40;
  }
LABEL_12:
  operator delete(v6);
  ++v55;
  v7 = Block;
  if ( Block )
  {
    v19 = 0;
    for ( i = v49; v19 < i; ++v19 )
    {
      v21 = v7[v19];
      if ( v21 )
      {
        do
        {
          v22 = v21;
          v23 = (_QWORD *)(v21 + 56);
          v21 = *(_QWORD *)(v21 + 56);
          ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll(v22 + 8);
          *v23 = v58;
          v58 = v22;
          v24 = v48 - 1;
          v48 = v24;
          if ( v24 < v54 && !v55 )
          {
            v25 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &Block,
              v25);
            v24 = v48;
          }
          if ( !v24 )
            ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::FreePlexes(&Block);
        }
        while ( v21 );
        i = v49;
        v7 = Block;
      }
    }
  }
  operator delete[](v7);
  Block = 0LL;
  v48 = 0LL;
  if ( !v55 )
  {
    v26 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::InitHashTable(
      &Block,
      v26,
      0LL);
  }
  v58 = 0LL;
  if ( v57 )
  {
    ATL::CAtlPlex::FreeDataChain(v57);
    v57 = 0LL;
  }
  --v55;
  LODWORD(v44) = v44 + 1;
  v8 = v37;
  if ( v37 )
  {
    v27 = 0;
    for ( j = v39; v27 < j; ++v27 )
    {
      v29 = v8[v27];
      if ( v29 )
      {
        do
        {
          v30 = v29;
          v31 = (_QWORD *)(v29 + 56);
          v29 = *(_QWORD *)(v29 + 56);
          ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll(v30 + 8);
          *v31 = v46;
          v46 = v30;
          v32 = v38 - 1;
          v38 = v32;
          if ( v32 < v43 && !(_DWORD)v44 )
          {
            v33 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v37);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &v37,
              v33);
            v32 = v38;
          }
          if ( !v32 )
            ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::FreePlexes(&v37);
        }
        while ( v29 );
        j = v39;
        v8 = v37;
      }
    }
  }
  operator delete[](v8);
  v37 = 0LL;
  v38 = 0LL;
  if ( !(_DWORD)v44 )
  {
    v34 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v37);
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::InitHashTable(
      &v37,
      v34,
      0LL);
  }
  v46 = 0LL;
  if ( v45 )
  {
    ATL::CAtlPlex::FreeDataChain(v45);
    v45 = 0LL;
  }
  LODWORD(v44) = v44 - 1;
  while ( v60 )
  {
    if ( !(_QWORD)v59 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)&v59 = *(_QWORD *)v59;
    ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::FreeNode(&v59);
  }
  v59 = 0LL;
  v61[1] = 0LL;
  if ( v61[0] )
    ATL::CAtlPlex::FreeDataChain(v61[0]);
}
