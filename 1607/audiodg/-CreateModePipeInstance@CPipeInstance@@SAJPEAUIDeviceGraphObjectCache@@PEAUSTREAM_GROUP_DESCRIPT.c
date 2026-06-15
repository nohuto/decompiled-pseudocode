/*
 * XREFs of ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000F060
 * Callers:
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140002B20 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x14000B500 (--0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000BA70 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000C1B0 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000C240 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x14000C850 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000CB50 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D4A0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000D540 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000D774 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000D7B0 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000EF10 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1400126C0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140019552 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CPipeInstance::CreateModePipeInstance(
        struct IUnknown *a1,
        struct STREAM_GROUP_DESCRIPTOR *a2,
        struct CPipeInstance **a3)
{
  BOOL v5; // r14d
  int v6; // eax
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  CAPOProcessNode *v13; // rdi
  void (__fastcall *v14)(CAPOProcessNode *, struct IAudioMediaType *); // rax
  struct IAudioMediaType *v15; // rsi
  void (__fastcall *v16)(CAPOProcessNode *, struct IAudioMediaType *); // rax
  __int64 v17; // r14
  _QWORD *v18; // rax
  __int64 v19; // rcx
  void *v20; // rax
  __int64 v21; // r15
  const unsigned __int16 *v22; // r14
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  unsigned __int16 *v25; // rax
  int v26; // r13d
  int v27; // eax
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  _QWORD *v29; // rcx
  int v31; // eax
  GUID *v32; // rax
  int v33; // r9d
  int v34; // eax
  __int64 v35; // rsi
  _QWORD *v36; // rcx
  __int64 v37; // rdx
  const struct tWAVEFORMATEX *v38; // rax
  int v39; // eax
  unsigned __int16 **v40; // [rsp+20h] [rbp-118h]
  unsigned __int64 *v41; // [rsp+28h] [rbp-110h]
  unsigned int v42; // [rsp+30h] [rbp-108h]
  __int64 v43; // [rsp+48h] [rbp-F0h] BYREF
  struct IAudioMediaType *v44; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v45; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-D0h]
  __int128 v47; // [rsp+70h] [rbp-C8h]
  int v48; // [rsp+80h] [rbp-B8h]
  CAPOProcessNode *v49; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+98h] [rbp-A0h] BYREF
  int pExceptionObject; // [rsp+A0h] [rbp-98h] BYREF
  int v53; // [rsp+A4h] [rbp-94h] BYREF
  unsigned int v54; // [rsp+A8h] [rbp-90h]
  int v55; // [rsp+ACh] [rbp-8Ch] BYREF
  int v56; // [rsp+B0h] [rbp-88h] BYREF
  int v57; // [rsp+B4h] [rbp-84h] BYREF
  int v58; // [rsp+B8h] [rbp-80h] BYREF
  int v59; // [rsp+BCh] [rbp-7Ch] BYREF
  __int64 v60; // [rsp+C0h] [rbp-78h]
  long *v61; // [rsp+C8h] [rbp-70h] BYREF
  ATL::CAtlException *v62; // [rsp+D0h] [rbp-68h] BYREF
  GUID v63; // [rsp+E0h] [rbp-58h] BYREF
  unsigned __int16 *v64[2]; // [rsp+F0h] [rbp-48h] BYREF
  BOOL v66; // [rsp+148h] [rbp+10h]
  void *v68; // [rsp+158h] [rbp+20h] BYREF

  v60 = -2LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 10;
  v5 = *(_DWORD *)a2 != 0;
  v66 = v5;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids);
  }
  *a3 = 0LL;
  try
  {
    v50 = 0LL;
    v6 = CProcessNode::CreateDummyProcessNode(v5, *((const struct tWAVEFORMATEX **)a2 + 2), &v50);
    if ( v6 < 0 )
    {
      pExceptionObject = v6;
      throw (long *)&pExceptionObject;
    }
    v7 = *((_QWORD *)&v45 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v45);
    v8 = (_QWORD *)*((_QWORD *)&v47 + 1);
    v68 = (void *)*((_QWORD *)&v47 + 1);
    v9 = **((_QWORD **)&v47 + 1);
    v51 = *((_QWORD *)&v47 + 1);
    if ( *((_QWORD *)&v47 + 1) )
      *(_QWORD *)(*((_QWORD *)&v47 + 1) + 16LL) = v50;
    *((_QWORD *)&v47 + 1) = v9;
    v8[1] = v7;
    *v8 = 0LL;
    ++v46;
    if ( *((_QWORD *)&v45 + 1) )
      **((_QWORD **)&v45 + 1) = v8;
    else
      *(_QWORD *)&v45 = v8;
    *((_QWORD *)&v45 + 1) = v8;
    v50 = 0LL;
    v10 = 0;
    v54 = 0;
    while ( v10 < *((_DWORD *)a2 + 19) )
    {
      v68 = 0LL;
      v31 = *((_DWORD *)a2 + 14);
      if ( _bittest(&v31, v10) )
      {
        v32 = (GUID *)((char *)a2 + 60);
        v33 = 2;
      }
      else
      {
        v32 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v33 = 0;
      }
      v63 = *v32;
      v34 = CAPOProcessNode::CreateAPOProcessNode(
              (const struct _GUID *)a2 + v10 + 5,
              v5,
              0,
              v33,
              (__int128 *)&v63,
              &v68);
      if ( v34 < 0 )
      {
        v53 = v34;
        throw (long *)&v53;
      }
      v35 = *((_QWORD *)&v45 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v45);
      v36 = (_QWORD *)*((_QWORD *)&v47 + 1);
      v51 = *((_QWORD *)&v47 + 1);
      v37 = **((_QWORD **)&v47 + 1);
      v43 = *((_QWORD *)&v47 + 1);
      if ( *((_QWORD *)&v47 + 1) )
        *(_QWORD *)(*((_QWORD *)&v47 + 1) + 16LL) = v68;
      *((_QWORD *)&v47 + 1) = v37;
      v36[1] = v35;
      *v36 = 0LL;
      ++v46;
      if ( *((_QWORD *)&v45 + 1) )
        **((_QWORD **)&v45 + 1) = v36;
      else
        *(_QWORD *)&v45 = v36;
      *((_QWORD *)&v45 + 1) = v36;
      v68 = 0LL;
      v54 = ++v10;
    }
    v44 = 0LL;
    v11 = CAudioMediaType::Create(*((const struct tWAVEFORMATEX **)a2 + 5), *((_DWORD *)a2 + 9), &v44, 0.0);
    if ( v11 < 0 )
    {
      v55 = v11;
      throw (long *)&v55;
    }
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        v43 = 0LL;
        v15 = v44;
        v38 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->GetAudioFormat)(v44);
        v39 = CProcessNode::CreateDummyProcessNode(v5, v38, &v43);
        if ( v39 < 0 )
        {
          v57 = v39;
          throw (long *)&v57;
        }
        v51 = v43;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v45, &v51);
        v43 = 0LL;
      }
      else
      {
        v15 = v44;
      }
    }
    else
    {
      v49 = 0LL;
      *(GUID *)v64 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v12 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
              v5,
              1,
              0,
              (__int128 *)v64,
              &v49);
      if ( v12 < 0 )
      {
        v56 = v12;
        throw (long *)&v56;
      }
      v13 = v49;
      v14 = *(void (__fastcall **)(CAPOProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v49 + 24LL);
      v15 = v44;
      if ( v14 == CAPOProcessNode::SetLeftFormat )
        CAPOProcessNode::SetLeftFormat(v49, v44);
      else
        v14(v49, v44);
      v16 = *(void (__fastcall **)(CAPOProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v13 + 32LL);
      if ( v16 == CAPOProcessNode::SetRightFormat )
        CAPOProcessNode::SetRightFormat(v13, v15);
      else
        v16(v13, v15);
      v17 = *((_QWORD *)&v45 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v45);
      v18 = (_QWORD *)*((_QWORD *)&v47 + 1);
      v68 = (void *)*((_QWORD *)&v47 + 1);
      v19 = **((_QWORD **)&v47 + 1);
      v51 = *((_QWORD *)&v47 + 1);
      if ( *((_QWORD *)&v47 + 1) )
        *(_QWORD *)(*((_QWORD *)&v47 + 1) + 16LL) = v13;
      *((_QWORD *)&v47 + 1) = v19;
      v18[1] = v17;
      *v18 = 0LL;
      ++v46;
      if ( *((_QWORD *)&v45 + 1) )
        **((_QWORD **)&v45 + 1) = v18;
      else
        *(_QWORD *)&v45 = v18;
      *((_QWORD *)&v45 + 1) = v18;
      v49 = 0LL;
    }
    v20 = operator new(0x130uLL);
    v68 = v20;
    if ( v20 )
      v21 = CPipeInstance::CPipeInstance((__int64)v20, 3);
    else
      v21 = 0LL;
    v43 = v21;
    if ( !v21 )
    {
      v58 = -2147024882;
      throw (long *)&v58;
    }
    v22 = (const unsigned __int16 *)*((_QWORD *)a2 + 3);
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    *(_QWORD *)(v21 + 184) = 0LL;
    v24 = v23 + 1;
    if ( v23 + 1 < v23 )
    {
      v27 = -2147024362;
    }
    else
    {
      *(_QWORD *)(v21 + 184) = 0LL;
      if ( is_mul_ok(v24, 2uLL) )
      {
        v25 = (unsigned __int16 *)CoTaskMemAlloc(2 * v24);
        *(_QWORD *)(v21 + 184) = v25;
        if ( !v25 )
        {
          v27 = -2147024882;
          goto LABEL_78;
        }
        v26 = 0;
        LODWORD(v68) = 0;
        StringCchCopyNExW(v25, v23 + 1, v22, v23, v40, v41, v42);
        v27 = 0;
      }
      else
      {
        v26 = -2147024362;
        v27 = -2147024362;
      }
      if ( v26 >= 0 )
      {
        *(_DWORD *)(v21 + 120) = *(_DWORD *)a2 == 2;
        *(_DWORD *)(v21 + 12) = v66;
        *(_DWORD *)(v21 + 128) = *((_DWORD *)a2 + 14) != 0;
        if ( *(_QWORD *)(v21 + 144) )
          ATL::AtlComPtrAssign((struct IUnknown **)(v21 + 144), 0LL);
        if ( *(struct IUnknown **)(v21 + 232) != a1 )
          ATL::AtlComPtrAssign((struct IUnknown **)(v21 + 232), a1);
        *(_QWORD *)v21 = 0LL;
        *(_DWORD *)(v21 + 8) = 1;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(
          (__int64 **)(v21 + 16),
          (__int64)&v45);
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v45);
        *(_DWORD *)(v21 + 140) = (int)(float)((float)(int)((float)((float)*(int *)(*((_QWORD *)a2 + 5) + 8LL)
                                                                 / (float)*(unsigned __int16 *)(*((_QWORD *)a2 + 5)
                                                                                              + 12LL))
                                                         * (double)(int)*((_QWORD *)a2 + 6)
                                                         / 10000000.0
                                                         + 0.5)
                                            * 1.1);
        *(_DWORD *)(v21 + 132) = 0;
        *(_DWORD *)(v21 + 204) = 0;
        *(_OWORD *)(v21 + 208) = *(_OWORD *)((char *)a2 + 60);
        *a3 = (struct CPipeInstance *)v21;
        v43 = 0LL;
        if ( v15 )
        {
          Release = v15->lpVtbl->Release;
          if ( (char *)Release == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v15);
          else
            ((void (__fastcall *)(struct IAudioMediaType *))Release)(v15);
        }
        v50 = 0LL;
        goto LABEL_86;
      }
    }
LABEL_78:
    v59 = v27;
    throw (long *)&v59;
  }
  catch ( long *v61 )
  {
    v26 = *(_DWORD *)v61;
  }
  catch ( ATL::CAtlException *v62 )
  {
    v26 = *(_DWORD *)v62;
  }
LABEL_86:
  v29 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15LL,
      &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
      (unsigned int)v26);
    v29 = WPP_GLOBAL_Control;
  }
  if ( v26 < 0 )
  {
    if ( v29 != &WPP_GLOBAL_Control && (*((_DWORD *)v29 + 7) & 0x20000) != 0 && *((_BYTE *)v29 + 25) >= 2u )
      WPP_SF_D(v29[2], 16LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids, (unsigned int)v26);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateModePipeInstance", 0x1BAu, v26);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v45);
  return (unsigned int)v26;
}
