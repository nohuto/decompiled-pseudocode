/*
 * XREFs of ??1TSSession@@QEAA@XZ @ 0x18009B950
 * Callers:
 *     ??_GTSSession@@QEAAPEAXI@Z @ 0x18009BE30 (--_GTSSession@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x180018C84 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800399C4 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ?UnregisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x18003B22C (-UnregisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180065AC4 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCStreamClassPolicyGainsWrapper@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCStreamClassPolicyGainsWrapper@@@2@@ATL@@QEBAAEAPEAVCStreamClassPolicyGainsWrapper@@H@Z @ 0x180066CC8 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCStr.c)
 *     ??_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z @ 0x18009BDD0 (--_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z.c)
 *     ?RemoveAll@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAAXXZ @ 0x18009C6E0 (-RemoveAll@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAAHH@Z @ 0x18009C7C8 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckin.c)
 *     ?RemoveKey@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NPEBG@Z @ 0x18009C95C (-RemoveKey@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall TSSession::~TSSession(TSSession *this)
{
  char *v2; // r14
  unsigned int v3; // ecx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rdx
  void *v9; // rcx
  CStreamClassPolicyGainsWrapper *v10; // rbx
  unsigned int v11; // edx
  void *v12; // rbx
  int i; // ebx
  void *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi
  int j; // ebx
  void *v19; // rcx

  v2 = (char *)this + 240;
  if ( *((_QWORD *)this + 31) )
  {
    v3 = 0;
    if ( *((_DWORD *)v2 + 4) )
    {
      v4 = *(_QWORD *)v2;
      while ( !*(_QWORD *)(v4 + 8LL * v3) )
      {
        if ( ++v3 >= *((_DWORD *)v2 + 4) )
          goto LABEL_8;
      }
      v5 = *(_QWORD *)(v4 + 8LL * v3);
    }
    else
    {
LABEL_8:
      v5 = 0LL;
    }
    while ( v5 )
    {
      v6 = v5;
      v7 = *(_QWORD *)(v5 + 16);
      if ( !v7 )
      {
        v7 = 0LL;
        v8 = (unsigned int)(*(_DWORD *)(v5 + 24) % *((_DWORD *)v2 + 4) + 1);
        do
        {
          if ( (unsigned int)v8 >= *((_DWORD *)v2 + 4) )
            break;
          if ( *(_QWORD *)(*(_QWORD *)v2 + 8 * v8) )
            v7 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v8);
          v8 = (unsigned int)(v8 + 1);
        }
        while ( !v7 );
      }
      v5 = v7;
      CRefCountedObject::Release(*(CRefCountedObject **)(v6 + 8));
      ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::RemoveKey(
        v2,
        *(_QWORD *)v6);
    }
  }
  TSSession::UnregisterSessionDisplayNotificationCallback(this);
  v9 = (void *)*((_QWORD *)this + 5);
  if ( v9 )
    WTSFreeMemory(v9);
  while ( *((int *)this + 42) > 0 )
  {
    v10 = *(CStreamClassPolicyGainsWrapper **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CStreamClassPolicyGainsWrapper *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CStreamClassPolicyGainsWrapper *>>::GetValueAt(
                                                (__int64)this + 152,
                                                0);
    ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::RemoveAt((char *)this + 152);
    if ( v10 )
      CStreamClassPolicyGainsWrapper::`scalar deleting destructor'(v10, v11);
  }
  if ( *((int *)this + 88) > 0 )
  {
    while ( *((int *)this + 88) > 0 )
    {
      v12 = (void *)**((_QWORD **)this + 43);
      ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::RemoveAt((char *)this + 336);
      operator delete(v12);
      if ( *((int *)this + 88) <= 0 )
        goto LABEL_28;
    }
    RaiseException(0xC000008C, 1u, 0, 0LL);
  }
LABEL_28:
  if ( *((_QWORD *)this + 42) )
  {
    for ( i = 0; i < *((_DWORD *)this + 88); ++i )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'((_QWORD *)(*((_QWORD *)this + 42) + 8LL * i));
    free(*((void **)this + 42));
    *((_QWORD *)this + 42) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 43);
  if ( v14 )
  {
    free(v14);
    *((_QWORD *)this + 43) = 0LL;
  }
  *((_DWORD *)this + 88) = 0;
  v15 = *((_QWORD *)this + 41);
  if ( v15 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 16LL))(*((_QWORD *)this + 41));
  v16 = *((_QWORD *)this + 40);
  if ( v16 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 16LL))(*((_QWORD *)this + 40));
  v17 = *((_QWORD *)this + 39);
  if ( v17 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 16LL))(*((_QWORD *)this + 39));
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::RemoveAll(v2);
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)this + 176);
  if ( *((_QWORD *)this + 19) )
  {
    for ( j = 0; j < *((_DWORD *)this + 42); ++j )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'((_QWORD *)(*((_QWORD *)this + 19) + 8LL * j));
    free(*((void **)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  v19 = (void *)*((_QWORD *)this + 20);
  if ( v19 )
  {
    free(v19);
    *((_QWORD *)this + 20) = 0LL;
  }
  *((_DWORD *)this + 42) = 0;
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)this + 104);
  ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::RemoveAll((__int64 *)this + 7);
}
