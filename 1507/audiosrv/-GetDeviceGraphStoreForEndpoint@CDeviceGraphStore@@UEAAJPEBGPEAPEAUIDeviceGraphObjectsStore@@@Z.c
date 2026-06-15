/*
 * XREFs of ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x180028050
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x180026F20 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x1800290B0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800294F0 (-GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_N_K@Z @ 0x180028360 (-_Tidy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_N_K@Z.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x1800283D0 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x1800284C0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180028540 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTr.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180030DC0 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??$_Buynode@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@1@$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@1@@Z @ 0x180030F18 (--$_Buynode@U-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$ComPtr@UIDe.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030F90 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800317D0 (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@@Details@WRL@Microsof.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180042EC8 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(
        CDeviceGraphStore *this,
        const unsigned __int16 *a2,
        struct IDeviceGraphObjectsStore **a3)
{
  unsigned int v5; // r15d
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rbx
  void **v8; // rcx
  void **v9; // rax
  unsigned __int64 v10; // r14
  char *v11; // r13
  _QWORD *v12; // rax
  __int64 *v13; // rdi
  _QWORD *v14; // rbx
  int v15; // r12d
  void **v16; // rdx
  _QWORD *v17; // rax
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r8
  bool i; // zf
  _QWORD *v21; // r8
  void **v22; // r9
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r10
  bool j; // zf
  struct IDeviceGraphObjectsStore **v26; // rsi
  int v28; // r10d
  __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // [rsp+30h] [rbp-B8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-B0h] BYREF
  struct IDeviceGraphObjectsStore **v33; // [rsp+40h] [rbp-A8h]
  _QWORD v34[2]; // [rsp+48h] [rbp-A0h] BYREF
  void *v35[2]; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-80h]
  unsigned __int64 v37; // [rsp+70h] [rbp-78h]
  _BYTE v38[32]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v39; // [rsp+98h] [rbp-50h] BYREF

  v34[1] = -2LL;
  v33 = a3;
  v5 = 0;
  *a3 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 16, &lpCriticalSection);
  try
  {
    v6 = 7LL;
    v37 = 7LL;
    v36 = 0LL;
    LOWORD(v35[0]) = 0;
    if ( *a2 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( a2[v7] );
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlength_error("string too long");
    if ( v7 <= 7 )
    {
      if ( !v7 )
      {
        v10 = 0LL;
        v36 = 0LL;
        LOWORD(v35[0]) = 0;
LABEL_13:
        v11 = (char *)this + 56;
        v12 = (_QWORD *)*((_QWORD *)this + 7);
        v13 = (__int64 *)v12[1];
        v14 = v12;
        v15 = 1;
        v16 = (void **)v35[0];
        while ( 1 )
        {
          if ( *((_BYTE *)v13 + 25) )
          {
            if ( v14 == v12 )
              goto LABEL_51;
            v17 = v14 + 4;
            v18 = v14[6];
            if ( v14[7] >= 8uLL )
              v17 = (_QWORD *)*v17;
            if ( v10 < v18 )
              v19 = v10;
            else
              v19 = v14[6];
            if ( v6 < 8 )
              v16 = v35;
            for ( i = v19 == 0; ; i = v19 == 0 )
            {
              if ( i )
              {
                v15 = 0;
                goto LABEL_37;
              }
              if ( *(_WORD *)v16 != *(_WORD *)v17 )
                break;
              v16 = (void **)((char *)v16 + 2);
              v17 = (_QWORD *)((char *)v17 + 2);
              --v19;
            }
            if ( *(_WORD *)v16 < *(_WORD *)v17 )
              v15 = -1;
LABEL_37:
            if ( v15 )
            {
              if ( v15 < 0 )
                goto LABEL_51;
            }
            else
            {
              if ( v10 >= v18 )
                goto LABEL_39;
LABEL_51:
              std::wstring::wstring(v38, v35);
              v39 = 0LL;
              v34[0] = 0LL;
              v29 = std::_Tree_buy<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>::_Buynode<std::pair<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>(
                      v11,
                      v38);
              std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Insert_hint<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>> &,std::_Tree_node<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>,void *> *>(
                (_DWORD)v11,
                (unsigned int)&v31,
                (_DWORD)v14,
                v29 + 32,
                v29);
              v14 = v31;
              Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v39);
              LOBYTE(v30) = 1;
              std::wstring::_Tidy(v38, v30, 0LL);
              Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(v34);
            }
LABEL_39:
            v26 = (struct IDeviceGraphObjectsStore **)(v14 + 8);
            LOBYTE(v16) = 1;
            std::wstring::_Tidy(v35, v16, 0LL);
            if ( !v14[8] )
            {
              Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(v14 + 8);
              v5 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore>(v14 + 8);
            }
            if ( *v26 )
              (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)*v26 + 8LL))(*v26);
            *v33 = *v26;
            goto LABEL_73;
          }
          v21 = v13 + 4;
          if ( v6 < 8 )
            v22 = v35;
          else
            v22 = (void **)v35[0];
          v23 = v13[6];
          if ( v23 < v10 )
            v24 = v13[6];
          else
            v24 = v10;
          if ( (unsigned __int64)v13[7] >= 8 )
            v21 = (_QWORD *)*v21;
          for ( j = v24 == 0; ; j = v24 == 0 )
          {
            if ( j )
            {
              v28 = 0;
              goto LABEL_48;
            }
            if ( *(_WORD *)v21 != *(_WORD *)v22 )
              break;
            v21 = (_QWORD *)((char *)v21 + 2);
            v22 = (void **)((char *)v22 + 2);
            --v24;
          }
          v28 = 1;
          if ( *(_WORD *)v21 < *(_WORD *)v22 )
            v28 = -1;
LABEL_48:
          if ( v28 )
          {
            if ( v28 < 0 )
              goto LABEL_64;
LABEL_50:
            v14 = v13;
            v13 = (__int64 *)*v13;
          }
          else
          {
            if ( v23 >= v10 )
              goto LABEL_50;
LABEL_64:
            v13 = (__int64 *)v13[2];
          }
        }
      }
    }
    else
    {
      std::wstring::_Copy(v35, v7, 0LL);
      v6 = v37;
    }
    if ( v6 < 8 )
      v8 = v35;
    else
      v8 = (void **)v35[0];
    memcpy_0(v8, a2, 2 * v7);
    v36 = v7;
    if ( v37 < 8 )
      v9 = v35;
    else
      v9 = (void **)v35[0];
    *((_WORD *)v9 + v7) = 0;
    v6 = v37;
    v10 = v36;
    goto LABEL_13;
  }
  catch ( std::bad_alloc )
  {
    LODWORD(v31) = -2147024882;
    v5 = -2147024882;
  }
LABEL_73:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
