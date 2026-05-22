/*
 * XREFs of ?CreateDynamicNodeReference@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18008B460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180007518 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003CB54 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@PEAUISpatialGraphNodeReferenceFactory@234@@Z @ 0x180089A84 (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@_NPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x180089D6C (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@_NPEAV-$.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18008BC5C (-erase@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$weak_ptr@VSpatialGraphDriverH.c)
 *     ?lock@?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEBA?AV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@2@XZ @ 0x18008C1DC (-lock@-$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEBA-AV-$s.c)
 *     ??$make_pair@VHString@Wrappers@WRL@Microsoft@@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@YA?AU?$pair@VHString@Wrappers@WRL@Microsoft@@V?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@0@$$QEAVHString@Wrappers@WRL@Microsoft@@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@0@@Z @ 0x18008CC70 (--$make_pair@VHString@Wrappers@WRL@Microsoft@@AEAV-$shared_ptr@VSpatialGraphDriverHandleWrapper@.c)
 *     ??0SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAA@XZ @ 0x18008CCB4 (--0SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ??$_Buynode@U?$pair@VHString@Wrappers@WRL@Microsoft@@V?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@1@$$QEAU?$pair@VHString@Wrappers@WRL@Microsoft@@V?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@1@@Z @ 0x18008D818 (--$_Buynode@U-$pair@VHString@Wrappers@WRL@Microsoft@@V-$shared_ptr@VSpatialGraphDriverHandleWrap.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@1@@Z @ 0x18008D8BC (--$_Insert_nohint@AEAU-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$weak_ptr@VSpatialGraphDrive.c)
 *     ?SpatialGraphDeviceNotUsable_@HolographicDriverClientTrace@@QEAAXPEB_W@Z @ 0x18008F0BC (-SpatialGraphDeviceNotUsable_@HolographicDriverClientTrace@@QEAAXPEB_W@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReference(
        unsigned __int64 this,
        HSTRING a2,
        const struct Windows::Internal::Holographic::DynamicNodeInfo *a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference **a4)
{
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference **v4; // r14
  HSTRING v5; // r15
  HRESULT v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r8
  const char *v10; // r9
  __int64 result; // rax
  __int64 **v12; // r12
  __int64 *v13; // rbx
  __int64 *v14; // rsi
  const WCHAR *StringRawBuffer; // rdi
  const WCHAR *v16; // rax
  const WCHAR *v17; // rdi
  const WCHAR *v18; // rax
  __int64 *v19; // rax
  __int64 v20; // r14
  __int64 v21; // r15
  volatile signed __int32 *v22; // rsi
  int v23; // esi
  const wchar_t *v24; // rsi
  _DWORD *v25; // rcx
  HolographicDriverClientTrace *v26; // rcx
  __int64 v27; // rbx
  int v28; // eax
  unsigned int v29; // esi
  __int64 v30; // rbx
  __int64 v31; // rax
  void *v32; // rax
  int v33; // r8d
  volatile signed __int32 *v34; // rbx
  Windows::Internal::Holographic::SpatialGraphNodeReference *v35; // rax
  int v36; // esi
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // rbx
  HSTRING newString; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v41; // [rsp+38h] [rbp-F0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-E0h] BYREF
  UINT32 length; // [rsp+50h] [rbp-D8h] BYREF
  UINT32 v44; // [rsp+54h] [rbp-D4h] BYREF
  UINT32 v45; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-C8h]
  __int64 v47; // [rsp+68h] [rbp-C0h]
  PSRWLOCK SRWLock; // [rsp+70h] [rbp-B8h] BYREF
  Windows::Internal::Holographic::SpatialGraphNodeReference *v49; // [rsp+78h] [rbp-B0h]
  __int64 v50; // [rsp+80h] [rbp-A8h]
  __int64 *v51; // [rsp+88h] [rbp-A0h]
  __int64 *v52; // [rsp+90h] [rbp-98h]
  _BYTE v53[8]; // [rsp+98h] [rbp-90h] BYREF
  _BYTE v54[8]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-80h]
  _BYTE v56[8]; // [rsp+B0h] [rbp-78h] BYREF
  volatile signed __int32 *v57; // [rsp+B8h] [rbp-70h]
  HSTRING string[2]; // [rsp+C0h] [rbp-68h] BYREF
  volatile signed __int32 *v59; // [rsp+D0h] [rbp-58h]
  int v60; // [rsp+D8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]
  UINT32 v62; // [rsp+130h] [rbp+8h] BYREF
  HSTRING v63; // [rsp+138h] [rbp+10h]
  const struct Windows::Internal::Holographic::DynamicNodeInfo *v64; // [rsp+140h] [rbp+18h]
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference **v65; // [rsp+148h] [rbp+20h]

  v65 = a4;
  v64 = a3;
  v63 = a2;
  v50 = -2LL;
  v4 = a4;
  v5 = a2;
  try
  {
    *a4 = 0LL;
    wil::critical_section::lock((struct _RTL_CRITICAL_SECTION *)(this + 56), &lpCriticalSection);
    v41 = 0LL;
    WindowsDeleteString(0LL);
    newString = 0LL;
    v7 = WindowsDuplicateString(v5, &newString);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3A1,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v7);
      WindowsDeleteString(newString);
      newString = 0LL;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return v8;
    }
    v12 = (__int64 **)(this + 96);
    v13 = *(__int64 **)(this + 96);
    v14 = (__int64 *)v13[1];
    while ( !*((_BYTE *)v14 + 25) )
    {
      StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)v14[4], &length);
      v16 = WindowsGetStringRawBuffer(newString, &v62);
      if ( CompareStringOrdinal(StringRawBuffer, length, v16, v62, 1) == 1 )
      {
        v14 = (__int64 *)v14[2];
      }
      else
      {
        v13 = v14;
        v14 = (__int64 *)*v14;
      }
    }
    v51 = *v12;
    if ( v13 == v51
      || (v17 = WindowsGetStringRawBuffer(newString, &v45),
          v18 = WindowsGetStringRawBuffer((HSTRING)v13[4], &v44),
          CompareStringOrdinal(v17, v45, v18, v44, 1) == 1) )
    {
      v13 = *v12;
    }
    v52 = *v12;
    if ( v13 != v52 )
    {
      v19 = (__int64 *)std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::lock(
                         v13 + 5,
                         v56);
      v46 = *v19;
      v20 = v46;
      v47 = v19[1];
      v21 = v47;
      *v19 = 0LL;
      v19[1] = 0LL;
      *((_QWORD *)&v41 + 1) = v21;
      *(_QWORD *)&v41 = v20;
      v22 = v57;
      if ( v57 )
      {
        if ( !_InterlockedDecrement(v57 + 2) )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
          if ( !_InterlockedDecrement(v22 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        }
        v20 = v46;
        v21 = v47;
      }
      if ( v20 )
      {
        wil::srwlock::lock_shared((RTL_SRWLOCK *)(v20 + 48), &SRWLock);
        v23 = *(_DWORD *)(v20 + 56);
        if ( SRWLock )
          ReleaseSRWLockShared(SRWLock);
        if ( v23 < 0 )
        {
          v24 = WindowsGetStringRawBuffer(*(HSTRING *)(v20 + 32), 0LL);
          v25 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
          if ( v25 && *v25 )
          {
            HolographicDriverClientTrace::Instance();
            HolographicDriverClientTrace::SpatialGraphDeviceNotUsable_(v26, v24);
          }
          std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::erase(
            this + 96,
            v54,
            v13);
          v41 = 0uLL;
          if ( v21 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 8), 0xFFFFFFFF) == 1 )
            {
              v27 = v47;
              (**(void (__fastcall ***)(__int64))v47)(v47);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 12), 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL))(v47);
            }
          }
        }
      }
      else
      {
        std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::erase(
          this + 96,
          v53,
          v13);
      }
      v4 = v65;
      v5 = v63;
    }
    if ( !(_QWORD)v41 )
    {
      v28 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create(v5, 1, (__int64)&v41);
      v29 = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x3B9,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)(unsigned int)v28);
        WindowsDeleteString(newString);
        newString = 0LL;
        if ( *((_QWORD *)&v41 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v30 = *((_QWORD *)&v41 + 1);
            (***((void (__fastcall ****)(_QWORD))&v41 + 1))(*((_QWORD *)&v41 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v41 + 1) + 8LL))(*((_QWORD *)&v41 + 1));
          }
        }
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return v29;
      }
      v31 = std::make_pair<Microsoft::WRL::Wrappers::HString,std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper> &>(
              string,
              &newString,
              &v41);
      v32 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Buynode<std::pair<Microsoft::WRL::Wrappers::HString,std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>(
                      this + 96,
                      v31);
      std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Insert_nohint<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>> &,std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>,void *> *>(
        this + 96,
        (int)&v60,
        v33,
        (_DWORD)v32 + 32,
        v32);
      v34 = v59;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
        }
      }
      WindowsDeleteString(string[0]);
    }
    *v4 = 0LL;
    v35 = (Windows::Internal::Holographic::SpatialGraphNodeReference *)operator new(
                                                                         0x90uLL,
                                                                         (const struct std::nothrow_t *)&std::nothrow);
    v49 = v35;
    if ( !v35 )
    {
      v36 = -2147024882;
      goto LABEL_55;
    }
    v37 = Windows::Internal::Holographic::SpatialGraphNodeReference::SpatialGraphNodeReference(v35);
    v55 = v37;
    v49 = 0LL;
    v36 = Windows::Internal::Holographic::SpatialGraphNodeReference::RuntimeClassInitialize(
            v37,
            (Windows::Internal::Holographic::HolographicDriverHandleWrapper **)&v41,
            (__int64)v64,
            this & -(__int64)(this != 8));
    if ( v36 >= 0 )
    {
      v36 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct Windows::Internal::Holographic::ISpatialGraphNodeReference **))v37)(
              v37,
              &GUID_38c1de2c_ee80_434a_bdb5_67c0ad990483,
              v4);
    }
    else if ( !v37 )
    {
LABEL_54:
      if ( v36 < 0 )
      {
LABEL_55:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x3BF,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)(unsigned int)v36);
        WindowsDeleteString(newString);
        newString = 0LL;
        if ( *((_QWORD *)&v41 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v38 = *((_QWORD *)&v41 + 1);
            (***((void (__fastcall ****)(_QWORD))&v41 + 1))(*((_QWORD *)&v41 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v41 + 1) + 8LL))(*((_QWORD *)&v41 + 1));
          }
        }
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return (unsigned int)v36;
      }
      WindowsDeleteString(newString);
      newString = 0LL;
      if ( *((_QWORD *)&v41 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v39 = *((_QWORD *)&v41 + 1);
          (***((void (__fastcall ****)(_QWORD))&v41 + 1))(*((_QWORD *)&v41 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v41 + 1) + 8LL))(*((_QWORD *)&v41 + 1));
        }
      }
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return 0LL;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    goto LABEL_54;
  }
  catch ( ... )
  {
    LODWORD(v65) = wil::details::in1diag3::Return_CaughtException(retaddr, (void *)0x3C2, v9, v10);
    return (unsigned int)v65;
  }
  return result;
}
