/*
 * XREFs of ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x18002277C
 * Callers:
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x1800255F8 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCh.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x180023738 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@st.c)
 *     ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x180023790 (-CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMMDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180028E54 (-InternalRelease@-$ComPtr@UIMMDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18002AAA0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_Sddd @ 0x1800760F4 (WPP_SF_Sddd.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSaDeviceProxy::RuntimeClassInitialize(
        struct SaDeviceParams **this,
        const struct SaDeviceParams *a2,
        struct CEndpointCharacteristics *a3,
        enum _AUDCLNT_SHAREMODE a4,
        unsigned int a5,
        struct SaDeviceResourceParams *a6)
{
  int v10; // edi
  struct SaDeviceParams *v11; // r8
  struct IAudioDeviceGraph *v12; // rbx
  struct SaDeviceResourceParams *v13; // rbx
  struct IAudioDeviceGraph *v14; // rax
  struct IAudioDeviceGraph *v15; // r14
  int v16; // edi
  struct _GUID v18; // [rsp+78h] [rbp-19h] BYREF
  __int64 v19; // [rsp+88h] [rbp-9h]
  struct _GUID v20; // [rsp+98h] [rbp+7h] BYREF
  struct _GUID v21; // [rsp+A8h] [rbp+17h] BYREF
  struct IAudioDeviceGraph *v22; // [rsp+E8h] [rbp+57h] BYREF
  LPVOID pv; // [rsp+F8h] [rbp+67h] BYREF

  v19 = -2LL;
  pv = 0LL;
  (*(void (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)a3 + 2) + 40LL))(*((_QWORD *)a3 + 2), &pv);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      21,
      *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 2LL),
      (_DWORD)pv,
      *(_DWORD *)(*((_QWORD *)a2 + 2) + 4LL),
      *(_WORD *)(*((_QWORD *)a2 + 2) + 2LL),
      *(_WORD *)(*((_QWORD *)a2 + 2) + 14LL));
  }
  v10 = CloneSaDeviceParams(a2, this + 6);
  if ( v10 >= 0 )
  {
    v22 = 0LL;
    v11 = this[6];
    v18 = (struct _GUID)*((_OWORD *)v11 + 5);
    v20 = (struct _GUID)*((_OWORD *)v11 + 4);
    v21 = (struct _GUID)*((_OWORD *)v11 + 3);
    v10 = CreateSaDevice(
            a3,
            a4,
            a5,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)v11 + 2),
            &v21,
            &v20,
            *((_QWORD *)v11 + 4),
            *((_QWORD *)v11 + 5),
            *((const struct tWAVEFORMATEX **)v11 + 2),
            *((const struct tWAVEFORMATEX **)v11 + 3),
            &v18,
            *((_BYTE *)v11 + 96),
            &v22);
    if ( v10 >= 0 )
    {
      v12 = v22;
      if ( this[10] != v22 )
      {
        if ( v22 )
          (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v22 + 8LL))(v22);
        *(_QWORD *)&v18.Data1 = this[10];
        this[10] = v12;
        Microsoft::WRL::ComPtr<IMMDevice>::InternalRelease(&v18);
      }
    }
    Microsoft::WRL::ComPtr<IMMDevice>::InternalRelease(&v22);
    if ( v10 >= 0 )
    {
      *((_BYTE *)this + 72) = a4 == AUDCLNT_SHAREMODE_EXCLUSIVE;
      v13 = a6;
      this[8] = *(struct SaDeviceParams **)a6;
      *((_DWORD *)this + 22) = 0;
      *((_DWORD *)this + 23) = 0;
      *((_DWORD *)this + 24) = 0;
      *((_DWORD *)this + 25) = 0;
      v14 = (struct IAudioDeviceGraph *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v15 = v14;
      v22 = v14;
      if ( v14 )
      {
        v16 = *((_DWORD *)v13 + 2);
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)v14, 0, 0);
        *(_QWORD *)&v18.Data1 = (char *)v15 + 40;
        *((_QWORD *)v15 + 5) = 0LL;
        *((_QWORD *)v15 + 6) = 0LL;
        *((_QWORD *)v15 + 5) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buyheadnode();
        *((_DWORD *)v15 + 14) = v16;
      }
      else
      {
        v15 = 0LL;
      }
      this[7] = v15;
      if ( v15 )
      {
        v10 = 0;
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_744b99acf30f393db0480888c2449482_Traceguids, this);
        }
        goto LABEL_19;
      }
      v10 = -2147024882;
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      22LL,
      &WPP_744b99acf30f393db0480888c2449482_Traceguids,
      (unsigned int)v10);
  }
LABEL_19:
  CoTaskMemFree(pv);
  return (unsigned int)v10;
}
