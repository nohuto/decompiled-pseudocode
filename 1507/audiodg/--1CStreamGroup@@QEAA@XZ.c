/*
 * XREFs of ??1CStreamGroup@@QEAA@XZ @ 0x140012810
 * Callers:
 *     ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140013990 (--_E-$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z.c)
 *     _ATL::CComCreator_ATL::CComObject_CStreamGroup___::CreateInstance_::_1_::dtor$1 @ 0x14001BC95 (_ATL--CComCreator_ATL--CComObject_CStreamGroup___--CreateInstance_--_1_--dtor$1.c)
 *     _ATL::CComObject_CStreamGroup_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x14001BD17 (_ATL--CComObject_CStreamGroup_--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140029E18 (--1-$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ @ 0x140029E98 (--1-$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14000866C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D880 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140012DAC (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?RemoveAt@?$CAtlList@PEAVCStreamGroup@@V?$CElementTraits@PEAVCStreamGroup@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140012EAC (-RemoveAt@-$CAtlList@PEAVCStreamGroup@@V-$CElementTraits@PEAVCStreamGroup@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?FreeNode@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1400264F4 (-FreeNode@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPE.c)
 *     ??_GCStreamInstanceNew@@QEAAPEAXI@Z @ 0x14002681C (--_GCStreamInstanceNew@@QEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CStreamGroup::~CStreamGroup(CStreamGroup *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  CPipeInstance *v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  CPipeInstance *v8; // rcx
  __int64 *v9; // rdx
  CStreamInstanceNew *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v14; // [rsp+30h] [rbp-18h]

  while ( *((_QWORD *)this + 14) )
  {
    v9 = (__int64 *)*((_QWORD *)this + 12);
    if ( !v9 )
      ATL::AtlThrowImpl(-2147467259);
    v10 = (CStreamInstanceNew *)v9[2];
    v11 = *v9;
    *((_QWORD *)this + 12) = *v9;
    if ( v11 )
      *(_QWORD *)(v11 + 8) = 0LL;
    else
      *((_QWORD *)this + 13) = 0LL;
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::FreeNode((char *)this + 96);
    if ( v10 )
      CStreamInstanceNew::`scalar deleting destructor'(v10, v12);
  }
  lpCriticalSection = &g_CritSecStreamGroupList;
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = StreamGroupList;
  if ( StreamGroupList )
  {
    while ( *(CStreamGroup **)(v3 + 16) != this )
    {
      v3 = *(_QWORD *)v3;
      if ( !v3 )
        goto LABEL_5;
    }
    ATL::CAtlList<CStreamGroup *,ATL::CElementTraits<CStreamGroup *>>::RemoveAt(v2);
  }
LABEL_5:
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  PublishDeviceGraphWnfState();
  CoTaskMemFree(*((LPVOID *)this + 35));
  *((_QWORD *)this + 35) = 0LL;
  v4 = (CPipeInstance *)*((_QWORD *)this + 34);
  if ( v4 )
    CPipeInstance::`scalar deleting destructor'(v4);
  *((_QWORD *)this + 34) = 0LL;
  v5 = *((_QWORD *)this + 32);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 32));
  v6 = *((_QWORD *)this + 31);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 31));
  CoTaskMemFree(*((LPVOID *)this + 26));
  *((_QWORD *)this + 26) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 25));
  *((_QWORD *)this + 25) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4);
  v7 = *((_QWORD *)this + 19);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 19));
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((char *)this + 96);
  v8 = (CPipeInstance *)*((_QWORD *)this + 11);
  if ( v8 )
    CPipeInstance::`scalar deleting destructor'(v8);
  *((_QWORD *)this + 11) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  if ( *((_BYTE *)this + 64) )
  {
    *((_BYTE *)this + 64) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  }
}
