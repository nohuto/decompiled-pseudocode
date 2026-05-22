/*
 * XREFs of ?AddDeviceToCache@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800790B0
 * Callers:
 *     ?OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800787C0 (-OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@VSpatialInteractionController@SpatialInteractionDevices@@AEAKAEAI@std@@YA?AV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@0@AEAKAEAI@Z @ 0x18007B164 (--$make_shared@VSpatialInteractionController@SpatialInteractionDevices@@AEAKAEAI@std@@YA-AV-$sha.c)
 *     ??$_Buynode@AEAKAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@1@AEAKAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@1@@Z @ 0x18007B544 (--$_Buynode@AEAKAEAV-$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@1@@Z @ 0x18007B5A0 (--$_Insert_nohint@AEAU-$pair@$$CBKV-$shared_ptr@VSpatialInteractionController@SpatialInteraction.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=47
__int64 __fastcall SpatialInputControllerCollection::AddDeviceToCache(
        struct _RTL_CRITICAL_SECTION *a1,
        DWORD a2,
        _QWORD *a3)
{
  _QWORD *v5; // r14
  volatile signed __int32 *v6; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  struct _RTL_CRITICAL_SECTION *CriticalSection; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v9; // rdx
  int v11; // r8d
  __int64 v12; // rbx
  __int128 v13; // [rsp+30h] [rbp-C8h]
  __int64 v14; // [rsp+38h] [rbp-C0h]
  volatile signed __int32 *v15; // [rsp+40h] [rbp-B8h]
  __int128 v16; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A0h]
  __int64 v18; // [rsp+60h] [rbp-98h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-90h]
  volatile signed __int32 *v20; // [rsp+78h] [rbp-80h]
  __int64 v21; // [rsp+80h] [rbp-78h]
  PRTL_CRITICAL_SECTION_DEBUG v22; // [rsp+88h] [rbp-70h]
  PRTL_CRITICAL_SECTION_DEBUG v23; // [rsp+90h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+98h] [rbp-60h]
  void *v25; // [rsp+A0h] [rbp-58h]
  _QWORD *v26; // [rsp+A8h] [rbp-50h]
  int v27; // [rsp+B0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  int v29; // [rsp+100h] [rbp+8h] BYREF
  DWORD v30; // [rsp+108h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+110h] [rbp+18h]
  __int64 v32; // [rsp+118h] [rbp+20h]

  v30 = a2;
  v21 = -2LL;
  v5 = a3 + 1;
  v20 = (volatile signed __int32 *)a3[1];
  v6 = v20;
  a3[1] = 0LL;
  *a3 = 0LL;
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  lpCriticalSection = a1 + 69;
  EnterCriticalSection(a1 + 69);
  v31 = a1 + 69;
  _InterlockedExchange(
    &MPCInputInfoHelper::m_nextSpectrumId,
    (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
  v29 = MPCInputInfoHelper::m_nextSpectrumId;
  DebugInfo = a1[70].DebugInfo;
  CriticalSection = DebugInfo->CriticalSection;
  v9 = DebugInfo;
  while ( !BYTE1(CriticalSection->LockSemaphore) )
  {
    if ( LODWORD(CriticalSection->SpinCount) >= v30 )
    {
      v9 = (PRTL_CRITICAL_SECTION_DEBUG)CriticalSection;
      CriticalSection = (struct _RTL_CRITICAL_SECTION *)CriticalSection->DebugInfo;
    }
    else
    {
      CriticalSection = (struct _RTL_CRITICAL_SECTION *)CriticalSection->OwningThread;
    }
  }
  v22 = a1[70].DebugInfo;
  if ( v9 == DebugInfo || v30 < v9->EntryCount )
    v9 = DebugInfo;
  v23 = DebugInfo;
  if ( v9 != DebugInfo )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)0x80004005LL);
    if ( a1 != (struct _RTL_CRITICAL_SECTION *)-2760LL )
    {
      LeaveCriticalSection(a1 + 69);
      v31 = 0LL;
    }
    return 2147500037LL;
  }
  try
  {
    std::make_shared<SpatialInteractionDevices::SpatialInteractionController,unsigned long &,unsigned int &>(
      &v16,
      &v30,
      &v29);
    v24 = a1 + 70;
    v25 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Buynode<unsigned long &,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController> &>(
                    &a1[70],
                    &v30,
                    &v16);
    std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Insert_nohint<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>> &,std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>,void *> *>(
      (_DWORD)a1 + 2800,
      (int)&v27,
      v11,
      (_DWORD)v25 + 32,
      v25);
    v13 = v16;
    v16 = 0LL;
    v26 = v5;
    v17 = *((_QWORD *)&v13 + 1);
    v14 = *v5;
    *v5 = v17;
    v18 = v13;
    *a3 = v13;
    if ( v14 )
    {
      v32 = v14;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
      {
        v12 = v32;
        (**(void (__fastcall ***)(__int64))v32)(v32);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
      }
    }
    if ( *((_QWORD *)&v16 + 1) )
    {
      v15 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  catch ( std::bad_alloc )
  {
    if ( lpCriticalSection )
    {
      LeaveCriticalSection(lpCriticalSection);
      v31 = 0LL;
    }
    return 2147942414LL;
  }
  if ( a1 != (struct _RTL_CRITICAL_SECTION *)-2760LL )
  {
    LeaveCriticalSection(a1 + 69);
    v31 = 0LL;
  }
  return 0LL;
}
