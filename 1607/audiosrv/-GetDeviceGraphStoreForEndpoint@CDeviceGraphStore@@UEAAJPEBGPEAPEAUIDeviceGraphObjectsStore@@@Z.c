/*
 * XREFs of ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800213E0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x1800224C0 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180023AC0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180023EC0 (-GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E7A0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_N_K@Z @ 0x1800216E0 (-_Tidy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_N_K@Z.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180021780 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180024F6C (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x180025AAC (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@@Details@WRL@Microsof.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180029040 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1800295F0 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(
        CDeviceGraphStore *this,
        const unsigned __int16 *a2,
        struct IDeviceGraphObjectsStore **a3)
{
  unsigned int v6; // r15d
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rbx
  void **v9; // rcx
  void **v10; // rax
  unsigned __int64 v11; // r14
  char *v12; // r12
  void **v13; // rax
  _QWORD *v14; // rdi
  void **v15; // rbx
  void **v16; // rdx
  _QWORD *v17; // r8
  void **v18; // r9
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r10
  bool i; // zf
  int v22; // r10d
  int v23; // ecx
  _QWORD *v24; // rax
  void *v25; // r9
  char *v26; // r8
  bool j; // zf
  int v28; // eax
  void *v29; // rcx
  __int64 v31; // rax
  void **v32; // [rsp+30h] [rbp-78h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+38h] [rbp-70h] BYREF
  void *v34[2]; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-50h]
  unsigned __int64 v36; // [rsp+60h] [rbp-48h]

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v6 = 0;
  *a3 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 16, (__int64)lpCriticalSection);
  try
  {
    v7 = 7LL;
    v36 = 7LL;
    v35 = 0LL;
    LOWORD(v34[0]) = 0;
    if ( *a2 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a2[v8] );
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlength_error("string too long");
    if ( v8 <= 7 )
    {
      if ( !v8 )
      {
        v11 = 0LL;
        v35 = 0LL;
        LOWORD(v34[0]) = 0;
LABEL_13:
        v12 = (char *)this + 56;
        v13 = (void **)*((_QWORD *)this + 7);
        v14 = v13[1];
        v15 = v13;
        v16 = (void **)v34[0];
        while ( !*((_BYTE *)v14 + 25) )
        {
          v17 = v14 + 4;
          if ( v7 < 8 )
            v18 = v34;
          else
            v18 = (void **)v34[0];
          v19 = v14[6];
          if ( v19 < v11 )
            v20 = v14[6];
          else
            v20 = v11;
          if ( v14[7] >= 8uLL )
            v17 = (_QWORD *)*v17;
          for ( i = v20 == 0; ; i = v20 == 0 )
          {
            if ( i )
            {
              v22 = 0;
              goto LABEL_25;
            }
            if ( *(_WORD *)v17 != *(_WORD *)v18 )
              break;
            v17 = (_QWORD *)((char *)v17 + 2);
            v18 = (void **)((char *)v18 + 2);
            --v20;
          }
          v22 = 1;
          if ( *(_WORD *)v17 < *(_WORD *)v18 )
            v22 = -1;
LABEL_25:
          v23 = v22;
          if ( !v22 )
          {
            if ( v19 < v11 )
              v23 = -1;
            else
              v23 = v19 != v11;
          }
          if ( v23 < 0 )
          {
            v14 = (_QWORD *)v14[2];
          }
          else
          {
            v15 = (void **)v14;
            v14 = (_QWORD *)*v14;
          }
        }
        if ( v15 == v13 )
          goto LABEL_58;
        v24 = v15 + 4;
        v25 = v15[6];
        if ( (unsigned __int64)v15[7] >= 8 )
          v24 = (_QWORD *)*v24;
        if ( v11 < (unsigned __int64)v25 )
          v26 = (char *)v11;
        else
          v26 = (char *)v15[6];
        if ( v7 < 8 )
          v16 = v34;
        for ( j = v26 == 0LL; ; j = --v26 == 0LL )
        {
          if ( j )
          {
            v28 = 0;
            goto LABEL_43;
          }
          if ( *(_WORD *)v16 != *(_WORD *)v24 )
            break;
          v16 = (void **)((char *)v16 + 2);
          v24 = (_QWORD *)((char *)v24 + 2);
        }
        v28 = *(_WORD *)v16 >= *(_WORD *)v24 ? 1 : -1;
LABEL_43:
        if ( !v28 )
        {
          if ( v11 < (unsigned __int64)v25 )
            v28 = -1;
          else
            v28 = v11 != (_QWORD)v25;
        }
        if ( v28 < 0 )
        {
LABEL_58:
          v32 = v34;
          v31 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
                  v12,
                  v16,
                  &v32);
          std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Insert_hint<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>> &,std::_Tree_node<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>,void *> *>(
            (_DWORD)v12,
            (unsigned int)&v32,
            (_DWORD)v15,
            v31 + 32,
            v31);
          v15 = v32;
        }
        LOBYTE(v16) = 1;
        std::wstring::_Tidy(v34, v16, 0LL);
        if ( !v15[8] )
        {
          Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(v15 + 8);
          v6 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore>(v15 + 8);
        }
        v29 = v15[8];
        if ( v29 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v29 + 8LL))(v29);
        *a3 = (struct IDeviceGraphObjectsStore *)v15[8];
        goto LABEL_76;
      }
    }
    else
    {
      std::wstring::_Copy(v34, v8, 0LL);
      v7 = v36;
    }
    if ( v7 < 8 )
      v9 = v34;
    else
      v9 = (void **)v34[0];
    memcpy_0(v9, a2, 2 * v8);
    v35 = v8;
    if ( v36 < 8 )
      v10 = v34;
    else
      v10 = (void **)v34[0];
    *((_WORD *)v10 + v8) = 0;
    v7 = v36;
    v11 = v35;
    goto LABEL_13;
  }
  catch ( std::bad_alloc )
  {
    LODWORD(v32) = -2147024882;
    v6 = -2147024882;
  }
LABEL_76:
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  return v6;
}
