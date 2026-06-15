/*
 * XREFs of ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x18000B4D0
 * Callers:
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x180005B70 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCh.c)
 * Callees:
 *     ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x18000B860 (-CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z.c)
 *     ??C?$CAutoPtr@USaDeviceParams@@@ATL@@QEBAPEAUSaDeviceParams@@XZ @ 0x18000BBF4 (--C-$CAutoPtr@USaDeviceParams@@@ATL@@QEBAPEAUSaDeviceParams@@XZ.c)
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x18000E3A0 (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@$$CBKK@std@@V-$allocator@U-$pair@$$C.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180047938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BBE8 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     WPP_SF_Sddd @ 0x18008DBC4 (WPP_SF_Sddd.c)
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
  int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r8
  const struct tWAVEFORMATEX *v15; // r10
  const struct tWAVEFORMATEX *v16; // r11
  struct IAudioDeviceGraph *v17; // rbx
  struct SaDeviceParams *v18; // rdi
  struct SaDeviceResourceParams *v19; // rbx
  struct IAudioDeviceGraph *v20; // rax
  struct IAudioDeviceGraph *v21; // rsi
  int v22; // edi
  struct _GUID v24; // [rsp+80h] [rbp-68h] BYREF
  struct _GUID v25; // [rsp+90h] [rbp-58h] BYREF
  struct _GUID v26; // [rsp+A0h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+F0h] [rbp+8h] BYREF
  struct IAudioDeviceGraph *v28; // [rsp+100h] [rbp+18h] BYREF

  pv = 0LL;
  (*(void (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)a3 + 2) + 40LL))(*((_QWORD *)a3 + 2), &pv);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      25,
      (unsigned int)&WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids,
      (_DWORD)pv,
      *(_DWORD *)(*((_QWORD *)a2 + 2) + 4LL),
      *(_WORD *)(*((_QWORD *)a2 + 2) + 2LL),
      *(_WORD *)(*((_QWORD *)a2 + 2) + 14LL));
  }
  v10 = CloneSaDeviceParams(a2, this + 6);
  if ( v10 < 0 )
    goto LABEL_24;
  v28 = 0LL;
  v24 = *(struct _GUID *)(ATL::CAutoPtr<SaDeviceParams>::operator->(this + 6) + 80);
  v25 = *(struct _GUID *)(ATL::CAutoPtr<SaDeviceParams>::operator->(this + 6) + 64);
  v26 = *(struct _GUID *)(ATL::CAutoPtr<SaDeviceParams>::operator->(this + 6) + 48);
  ATL::CAutoPtr<SaDeviceParams>::operator->(this + 6);
  ATL::CAutoPtr<SaDeviceParams>::operator->(this + 6);
  ATL::CAutoPtr<SaDeviceParams>::operator->(this + 6);
  ATL::CAutoPtr<SaDeviceParams>::operator->(this + 6);
  ATL::CAutoPtr<SaDeviceParams>::operator->(this + 6);
  v11 = ATL::CAutoPtr<SaDeviceParams>::operator->(this + 6);
  v10 = CreateSaDevice(
          a3,
          a4,
          a5,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(v11 + 8),
          &v26,
          &v25,
          *(_QWORD *)(v14 + 32),
          *(_QWORD *)(v13 + 40),
          v15,
          v16,
          &v24,
          *(_BYTE *)(v12 + 96),
          &v28);
  v17 = v28;
  if ( v10 >= 0 && this[10] != v28 )
  {
    if ( v28 )
      (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v28 + 8LL))(v28);
    v18 = this[10];
    this[10] = v17;
    if ( v18 )
      (*(void (__fastcall **)(struct SaDeviceParams *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( v17 )
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v10 < 0 )
    goto LABEL_24;
  *((_BYTE *)this + 72) = a4 == AUDCLNT_SHAREMODE_EXCLUSIVE;
  v19 = a6;
  this[8] = *(struct SaDeviceParams **)a6;
  this[11] = 0LL;
  v20 = (struct IAudioDeviceGraph *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v21 = v20;
  v28 = v20;
  if ( v20 )
  {
    v22 = *((_DWORD *)v19 + 2);
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)v20, 0, 0);
    *(_QWORD *)&v24.Data1 = (char *)v21 + 40;
    *((_QWORD *)v21 + 5) = 0LL;
    *((_QWORD *)v21 + 6) = 0LL;
    *((_QWORD *)v21 + 5) = std::_Tree_alloc<0,std::_Tree_base_types<std::pair<unsigned long const,unsigned long>>>::_Buyheadnode();
    *((_DWORD *)v21 + 14) = v22;
  }
  else
  {
    v21 = 0LL;
  }
  this[7] = v21;
  if ( !v21 )
  {
    v10 = -2147024882;
LABEL_24:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        26LL,
        &WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids,
        (unsigned int)v10);
    }
    goto LABEL_28;
  }
  v10 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids, this);
  }
LABEL_28:
  CoTaskMemFree(pv);
  return (unsigned int)v10;
}
