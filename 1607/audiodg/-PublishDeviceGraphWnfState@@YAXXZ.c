/*
 * XREFs of ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140004BD0
 * Callers:
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140002000 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140002110 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140002530 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002700 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x140002EC0 (--1CStreamGroup@@QEAA@XZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400059E0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140005C10 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002D8E0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     AudioDGGetDeviceGraphWnfStateName @ 0x1400308B0 (AudioDGGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400079C0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140017F40 (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x140024E44 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140025524 (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ?FreePlexes@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAXXZ @ 0x140025598 (-FreePlexes@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CE.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAA_NI_N@Z @ 0x14002749C (-InitHashTable@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTra.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x140027CF0 (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x1400294D0 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     ?Rehash@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXI@Z @ 0x140029650 (-Rehash@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL.c)
 *     ?FreeNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002EAEC (-FreeNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x140030AC0 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 *     ?DumpDeviceGraph@@YAJPEAVCStreamGroup@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x140030B60 (-DumpDeviceGraph@@YAJPEAVCStreamGroup@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCD.c)
 *     ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x1400310CC (-LinkDisplayNodes@@YAXAEAV-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDispl.c)
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x140031598 (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
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
  void *v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  bool v10; // r8
  int v11; // esi
  unsigned int v12; // edi
  _QWORD *ValueAt; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  int v16; // eax
  CDisplayNode *v17; // rdi
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
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-D0h] BYREF
  char v37; // [rsp+38h] [rbp-C8h]
  void *Block; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-B8h]
  int v40; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+54h] [rbp-ACh]
  int v42; // [rsp+58h] [rbp-A8h]
  int v43; // [rsp+5Ch] [rbp-A4h]
  unsigned __int64 v44; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v45; // [rsp+68h] [rbp-98h]
  int v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+74h] [rbp-8Ch]
  ATL::CAtlPlex *v48; // [rsp+78h] [rbp-88h]
  __int64 v49; // [rsp+80h] [rbp-80h]
  void *v50; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v51; // [rsp+98h] [rbp-68h]
  int v52; // [rsp+A0h] [rbp-60h]
  int v53; // [rsp+A4h] [rbp-5Ch]
  int v54; // [rsp+A8h] [rbp-58h]
  int v55; // [rsp+ACh] [rbp-54h]
  unsigned __int64 v56; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v57; // [rsp+B8h] [rbp-48h]
  int v58; // [rsp+C0h] [rbp-40h]
  int v59; // [rsp+C4h] [rbp-3Ch]
  ATL::CAtlPlex *v60; // [rsp+C8h] [rbp-38h]
  __int64 v61; // [rsp+D0h] [rbp-30h]
  __int128 v62; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v63; // [rsp+F0h] [rbp-10h]
  ATL::CAtlPlex *v64[2]; // [rsp+F8h] [rbp-8h]
  int v65; // [rsp+108h] [rbp+8h]
  __int64 v66; // [rsp+110h] [rbp+10h]
  unsigned int v67; // [rsp+150h] [rbp+50h] BYREF
  void *v68; // [rsp+158h] [rbp+58h] BYREF

  v66 = -2LL;
  v62 = 0LL;
  v63 = 0LL;
  *(_OWORD *)v64 = 0LL;
  v65 = 10;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 17;
  v58 = 0;
  v59 = 10;
  v60 = 0LL;
  v61 = 0LL;
  v53 = 1061158912;
  v54 = 1048576000;
  v55 = 1074790400;
  v0 = 0LL;
  v1 = FLOAT_38_25;
  if ( 38.25 >= 9.223372e18 )
  {
    v1 = 38.25 - 9.223372e18;
    if ( (float)(38.25 - 9.223372e18) < 9.223372e18 )
      v0 = 0x8000000000000000uLL;
  }
  v2 = v0 + (unsigned int)(int)v1;
  v56 = v2;
  v3 = 0LL;
  v4 = FLOAT_4_25;
  if ( 9.223372e18 <= 4.25 )
  {
    v4 = 4.25 - 9.223372e18;
    if ( (float)(4.25 - 9.223372e18) < 9.223372e18 )
      v3 = 0x8000000000000000uLL;
  }
  v5 = v3 + (unsigned int)(int)v4;
  v57 = v5;
  if ( v5 < 0x11 )
    v57 = 0LL;
  Block = 0LL;
  v39 = 0LL;
  v40 = 17;
  v46 = 0;
  v47 = 10;
  v48 = 0LL;
  v49 = 0LL;
  v41 = 1061158912;
  v42 = 1048576000;
  v43 = 1074790400;
  v44 = v2;
  v45 = v3 + (unsigned int)(int)v4;
  if ( v5 < 0x11 )
    v45 = 0LL;
  v6 = 0LL;
  v68 = 0LL;
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection, &g_CritSecSadMap, 0);
    v11 = dword_140054CD0;
    v12 = 0;
    if ( dword_140054CD0 <= 0 )
    {
LABEL_31:
      if ( v37 )
        LeaveCriticalSection(lpCriticalSection);
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection, &g_CritSecStreamGroupList, v10);
      v14 = (_QWORD *)StreamGroupList;
      if ( !StreamGroupList )
      {
LABEL_36:
        if ( v37 )
          LeaveCriticalSection(lpCriticalSection);
        LinkDisplayNodes(&v50, &Block);
        v16 = SerializeDeviceGraphs(&v62, &v68, &v67);
        v6 = v68;
        if ( v16 >= 0 )
          RtlPublishWnfStateData(*(_QWORD *)g_hSqmSession.Data4, 0LL, v68, v67, 0LL);
LABEL_40:
        while ( v63 )
        {
          if ( !(_QWORD)v62 )
            ATL::AtlThrowImpl(-2147467259);
          v17 = *(CDisplayNode **)(v62 + 16);
          v18 = *(_QWORD *)v62;
          *(_QWORD *)&v62 = v18;
          if ( v18 )
            *(_QWORD *)(v18 + 8) = 0LL;
          else
            v62 = 0uLL;
          ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode(&v62);
          if ( v17 )
            CDisplayNode::`scalar deleting destructor'(v17, v19);
        }
        goto LABEL_12;
      }
      while ( 1 )
      {
        v15 = v14[2];
        v14 = (_QWORD *)*v14;
        if ( (int)DumpDeviceGraph(v15, &v62, &v50, &Block) < 0 )
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
        if ( (*(int (__fastcall **)(_QWORD, __int128 *, void **, void **))(*(_QWORD *)*ValueAt + 184LL))(
               *ValueAt,
               &v62,
               &v50,
               &Block) < 0 )
          break;
        if ( (int)++v12 >= v11 )
          goto LABEL_31;
      }
    }
    if ( v37 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_40;
  }
LABEL_12:
  operator delete(v6);
  ++v46;
  v7 = Block;
  if ( Block )
  {
    v20 = 0;
    for ( i = v40; v20 < i; ++v20 )
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
          *v24 = v49;
          v49 = v23;
          v25 = v39 - 1;
          v39 = v25;
          if ( v25 < v45 && !v46 )
          {
            v26 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &Block,
              v26);
            v25 = v39;
          }
          if ( !v25 )
            ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::FreePlexes(&Block);
        }
        while ( v22 );
        i = v40;
        v7 = Block;
      }
    }
  }
  operator delete[](v7);
  Block = 0LL;
  v39 = 0LL;
  if ( !v46 )
  {
    v27 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::InitHashTable(
      &Block,
      v27,
      0LL);
  }
  v49 = 0LL;
  if ( v48 )
  {
    ATL::CAtlPlex::FreeDataChain(v48);
    v48 = 0LL;
  }
  --v46;
  ++v58;
  v8 = v50;
  if ( v50 )
  {
    v28 = 0;
    for ( j = v52; v28 < j; ++v28 )
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
          *v32 = v61;
          v61 = v31;
          v33 = v51 - 1;
          v51 = v33;
          if ( v33 < v57 && !v58 )
          {
            v34 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v50);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &v50,
              v34);
            v33 = v51;
          }
          if ( !v33 )
            ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::FreePlexes(&v50);
        }
        while ( v30 );
        j = v52;
        v8 = v50;
      }
    }
  }
  operator delete[](v8);
  v50 = 0LL;
  v51 = 0LL;
  if ( !v58 )
  {
    v35 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v50);
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::InitHashTable(
      &v50,
      v35,
      0LL);
  }
  v61 = 0LL;
  if ( v60 )
  {
    ATL::CAtlPlex::FreeDataChain(v60);
    v60 = 0LL;
  }
  --v58;
  while ( v63 )
  {
    if ( !(_QWORD)v62 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)&v62 = *(_QWORD *)v62;
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode(&v62);
  }
  v62 = 0LL;
  v64[1] = 0LL;
  if ( v64[0] )
    ATL::CAtlPlex::FreeDataChain(v64[0]);
}
