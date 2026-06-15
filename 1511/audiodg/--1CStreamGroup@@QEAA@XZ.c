/*
 * XREFs of ??1CStreamGroup@@QEAA@XZ @ 0x1400045B0
 * Callers:
 *     ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140008E84 (--1-$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CStreamGroup_::_CComObject_CStreamGroup__::_1_::dtor$0 @ 0x14001B17C (_ATL--CComObject_CStreamGroup_--_CComObject_CStreamGroup__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140026E60 (--1-$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ @ 0x140026EEC (--1-$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x1400036BC (-DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCStreamGroup@@V?$CElementTraits@PEAVCStreamGroup@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140004A5C (-RemoveAt@-$CAtlList@PEAVCStreamGroup@@V-$CElementTraits@PEAVCStreamGroup@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?RemoveAll@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x1400053AC (-RemoveAll@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QE.c)
 *     ??0?$CComQIPtr@UISaDeviceInternal@@$1?_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140005464 (--0-$CComQIPtr@UISaDeviceInternal@@$1-_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000A5F0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000C020 (--1CPipeInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140026234 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x1400265F4 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?RemoveHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAVCStreamInstance@@XZ @ 0x14002A500 (-RemoveHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@Q.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CStreamGroup::~CStreamGroup(CStreamGroup *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // edx
  CPipeInstance *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  void *v10; // rbx
  struct ISaDeviceInternal *v11; // rbx
  CStreamInstance *v12; // rax
  unsigned int v13; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v15; // [rsp+30h] [rbp-28h]
  struct ISaDeviceInternal *v16; // [rsp+68h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 32);
  if ( v2 )
  {
    ATL::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>(
      &v16,
      v2);
    v11 = v16;
    if ( v16 )
    {
      CStreamGroup::DisconnectPipesFromDeviceGraph(this, v16);
      v11 = v16;
    }
    if ( v11 )
      (*(void (__fastcall **)(struct ISaDeviceInternal *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  while ( *((_QWORD *)this + 14) )
  {
    v12 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 96);
    if ( v12 )
      CStreamInstance::`scalar deleting destructor'(v12, v13);
  }
  lpCriticalSection = &g_CritSecStreamGroupList;
  v15 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = StreamGroupList;
  if ( StreamGroupList )
  {
    while ( *(CStreamGroup **)(v4 + 16) != this )
    {
      v4 = *(_QWORD *)v4;
      if ( !v4 )
        goto LABEL_6;
    }
    ATL::CAtlList<CStreamGroup *,ATL::CElementTraits<CStreamGroup *>>::RemoveAt(v3);
  }
LABEL_6:
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  PublishDeviceGraphWnfState();
  CoTaskMemFree(*((LPVOID *)this + 35));
  *((_QWORD *)this + 35) = 0LL;
  v6 = (CPipeInstance *)*((_QWORD *)this + 34);
  if ( v6 )
    CPipeInstance::`scalar deleting destructor'(v6, v5);
  *((_QWORD *)this + 34) = 0LL;
  v7 = *((_QWORD *)this + 32);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 32));
  v8 = *((_QWORD *)this + 31);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 31));
  CoTaskMemFree(*((LPVOID *)this + 26));
  *((_QWORD *)this + 26) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 25));
  *((_QWORD *)this + 25) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4);
  v9 = *((_QWORD *)this + 19);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 19));
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 96);
  v10 = (void *)*((_QWORD *)this + 11);
  if ( v10 )
  {
    CPipeInstance::~CPipeInstance(*((CPipeInstance **)this + 11));
    operator delete(v10);
  }
  *((_QWORD *)this + 11) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  if ( *((_BYTE *)this + 64) )
  {
    *((_BYTE *)this + 64) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  }
}
