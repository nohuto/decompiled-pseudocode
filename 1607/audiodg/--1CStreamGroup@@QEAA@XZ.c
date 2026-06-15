/*
 * XREFs of ??1CStreamGroup@@QEAA@XZ @ 0x140002EC0
 * Callers:
 *     ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x1400110F8 (--1-$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CStreamGroup_::_CComObject_CStreamGroup__::_1_::dtor$0 @ 0x14001B669 (_ATL--CComObject_CStreamGroup_--_CComObject_CStreamGroup__--_1_--dtor$0.c)
 *     _ATL::CComCreator_ATL::CComObject_CStreamGroup___::CreateInstance_::_1_::dtor$1 @ 0x14001B7EE (_ATL--CComCreator_ATL--CComObject_CStreamGroup___--CreateInstance_--_1_--dtor$1.c)
 *     ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140025C54 (--1-$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ @ 0x140025CC8 (--1-$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCStreamGroup@@V?$CElementTraits@PEAVCStreamGroup@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140001C98 (-RemoveAt@-$CAtlList@PEAVCStreamGroup@@V-$CElementTraits@PEAVCStreamGroup@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140001E14 (-DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000376C (-RemoveAll@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QE.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140004BD0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000B620 (--1CPipeInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400250A4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x1400253F8 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ??0?$CComQIPtr@UISaDeviceInternal@@$1?_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140025954 (--0-$CComQIPtr@UISaDeviceInternal@@$1-_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@.c)
 *     ?RemoveHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAVCStreamInstance@@XZ @ 0x1400291C8 (-RemoveHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@Q.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CStreamGroup::~CStreamGroup(CStreamGroup *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // edx
  CPipeInstance *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rdi
  struct ISaDeviceInternal *v10; // rcx
  CStreamInstance *v11; // rax
  unsigned int v12; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v14; // [rsp+30h] [rbp-18h]
  struct ISaDeviceInternal *v15; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 32) )
  {
    ATL::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>(&v15);
    v10 = v15;
    if ( v15 )
    {
      CStreamGroup::DisconnectPipesFromDeviceGraph(this, v15);
      v10 = v15;
    }
    if ( v10 )
      (*(void (__fastcall **)(struct ISaDeviceInternal *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  while ( *((_QWORD *)this + 14) )
  {
    v11 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 96);
    if ( v11 )
      CStreamInstance::`scalar deleting destructor'(v11, v12);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecStreamGroupList;
  v14 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v3 = StreamGroupList;
  if ( StreamGroupList )
  {
    while ( *(CStreamGroup **)(v3 + 16) != this )
    {
      v3 = *(_QWORD *)v3;
      if ( !v3 )
        goto LABEL_6;
    }
    ATL::CAtlList<CStreamGroup *,ATL::CElementTraits<CStreamGroup *>>::RemoveAt(v2, (__int64 *)v3);
  }
LABEL_6:
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  PublishDeviceGraphWnfState();
  CoTaskMemFree(*((LPVOID *)this + 35));
  *((_QWORD *)this + 35) = 0LL;
  v5 = (CPipeInstance *)*((_QWORD *)this + 34);
  if ( v5 )
    CPipeInstance::`scalar deleting destructor'(v5, v4);
  *((_QWORD *)this + 34) = 0LL;
  v6 = *((_QWORD *)this + 32);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 31);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  CoTaskMemFree(*((LPVOID *)this + 26));
  *((_QWORD *)this + 26) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 25));
  *((_QWORD *)this + 25) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4);
  v8 = *((_QWORD *)this + 19);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 96);
  v9 = (void *)*((_QWORD *)this + 11);
  if ( v9 )
  {
    CPipeInstance::~CPipeInstance(*((CPipeInstance **)this + 11));
    operator delete(v9);
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
