/*
 * XREFs of ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140002280
 * Callers:
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140012450 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x140008790 (--0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x140008A00 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140009400 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x1400094C0 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140009C80 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B4E0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000B7A0 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000B820 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000B9A0 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140012FB0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14001893C (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140019B5C (_CxxThrowException_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CPipeInstance::CreateModePipeInstance(
        struct IUnknown *a1,
        struct STREAM_GROUP_DESCRIPTOR *a2,
        struct CPipeInstance **a3)
{
  BOOL v5; // r14d
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  CAPOProcessNode *v10; // rsi
  void (__fastcall *v11)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // r14
  struct IAudioMediaType *v12; // rdi
  void (__fastcall *v13)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // r14
  unsigned __int16 *v14; // rax
  __int64 v15; // r15
  unsigned __int16 *v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rcx
  unsigned __int16 *v19; // rax
  int v20; // r14d
  int v21; // esi
  ULONG (__stdcall *Release)(IAudioMediaType *); // rsi
  __int64 v23; // rcx
  int v25; // eax
  __int64 v26; // r9
  GUID *v27; // rax
  int APOProcessNode; // eax
  __int64 v29; // rax
  int v30; // eax
  unsigned __int16 **v31; // [rsp+20h] [rbp-138h]
  unsigned __int64 *v32; // [rsp+28h] [rbp-130h]
  unsigned int v33; // [rsp+30h] [rbp-128h]
  unsigned __int16 *v34; // [rsp+48h] [rbp-110h] BYREF
  __int64 v35; // [rsp+50h] [rbp-108h] BYREF
  unsigned __int16 *v36; // [rsp+58h] [rbp-100h] BYREF
  CAPOProcessNode *v37; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-F0h] BYREF
  int v39; // [rsp+70h] [rbp-E8h] BYREF
  int v40; // [rsp+74h] [rbp-E4h] BYREF
  int v41; // [rsp+78h] [rbp-E0h] BYREF
  int pExceptionObject; // [rsp+7Ch] [rbp-DCh] BYREF
  int v43; // [rsp+80h] [rbp-D8h] BYREF
  int v44; // [rsp+84h] [rbp-D4h] BYREF
  int v45; // [rsp+88h] [rbp-D0h] BYREF
  unsigned int v46; // [rsp+8Ch] [rbp-CCh]
  __int64 v47; // [rsp+90h] [rbp-C8h] BYREF
  CAPOProcessNode *v48; // [rsp+98h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-B0h] BYREF
  __int128 v51; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-98h]
  __int128 v53; // [rsp+C8h] [rbp-90h]
  int v54; // [rsp+D8h] [rbp-80h]
  long *v55; // [rsp+E0h] [rbp-78h] BYREF
  GUID v56; // [rsp+F0h] [rbp-68h] BYREF
  unsigned __int16 *v57[2]; // [rsp+100h] [rbp-58h] BYREF
  ATL::CAtlException *v58[9]; // [rsp+110h] [rbp-48h] BYREF
  BOOL v60; // [rsp+168h] [rbp+10h]
  struct IAudioMediaType *v62; // [rsp+178h] [rbp+20h] BYREF

  v58[1] = (ATL::CAtlException *)-2LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 10;
  v5 = *(_DWORD *)a2 != 0;
  v60 = v5;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 17LL, &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids);
  }
  *a3 = 0LL;
  try
  {
    v35 = 0LL;
    v6 = CProcessNode::CreateDummyProcessNode(v5, *((_QWORD *)a2 + 2), &v35);
    if ( v6 < 0 )
    {
      pExceptionObject = v6;
      throw (long *)&pExceptionObject;
    }
    v49 = v35;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v51, &v49);
    v35 = 0LL;
    v7 = 0;
    v46 = 0;
    while ( v7 < *((_DWORD *)a2 + 19) )
    {
      v38 = 0LL;
      v25 = *((_DWORD *)a2 + 14);
      if ( _bittest(&v25, v7) )
      {
        v26 = 1LL;
        v27 = (GUID *)((char *)a2 + 60);
      }
      else
      {
        v26 = 0LL;
        v27 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
      v56 = *v27;
      v32 = (unsigned __int64 *)&v38;
      v31 = (unsigned __int16 **)&v56;
      APOProcessNode = CAPOProcessNode::CreateAPOProcessNode((char *)a2 + 16 * v7 + 80, v5, 0LL, v26);
      if ( APOProcessNode < 0 )
      {
        v44 = APOProcessNode;
        throw (long *)&v44;
      }
      v50 = v38;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v51, &v50);
      v38 = 0LL;
      v46 = ++v7;
    }
    v62 = 0LL;
    v8 = CAudioMediaType::Create(*((const struct tWAVEFORMATEX **)a2 + 5), *((_DWORD *)a2 + 8), &v62, 0.0);
    if ( v8 < 0 )
    {
      v45 = v8;
      throw (long *)&v45;
    }
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        v34 = 0LL;
        v12 = v62;
        v29 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v62->lpVtbl->GetAudioFormat)(v62);
        v30 = CProcessNode::CreateDummyProcessNode(v5, v29, &v34);
        if ( v30 < 0 )
        {
          v40 = v30;
          throw (long *)&v40;
        }
        v36 = v34;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v51, &v36);
        v34 = 0LL;
      }
      else
      {
        v12 = v62;
      }
    }
    else
    {
      v37 = 0LL;
      *(GUID *)v57 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v32 = (unsigned __int64 *)&v37;
      v31 = v57;
      v9 = CAPOProcessNode::CreateAPOProcessNode(&GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a, v5, 1LL, 0LL);
      if ( v9 < 0 )
      {
        v43 = v9;
        throw (long *)&v43;
      }
      v10 = v37;
      v11 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v37 + 24LL);
      v12 = v62;
      if ( v11 == CAPOProcessNode::SetLeftFormat )
        CAPOProcessNode::SetLeftFormat(v37, v62);
      else
        v11(v37, v62);
      v13 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v10 + 32LL);
      if ( v13 == CAPOProcessNode::SetRightFormat )
        CAPOProcessNode::SetRightFormat(v10, v12);
      else
        v13(v10, v12);
      v48 = v10;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v51, &v48);
      v37 = 0LL;
    }
    v14 = (unsigned __int16 *)operator new(0x120uLL);
    v36 = v14;
    if ( v14 )
      v15 = CPipeInstance::CPipeInstance(v14, 3LL);
    else
      v15 = 0LL;
    v47 = v15;
    if ( !v15 )
    {
      v41 = -2147024882;
      throw (long *)&v41;
    }
    v16 = (unsigned __int16 *)*((_QWORD *)a2 + 3);
    v36 = v16;
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    *(_QWORD *)(v15 + 184) = 0LL;
    v18 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
      v21 = -2147024362;
    }
    else
    {
      *(_QWORD *)(v15 + 184) = 0LL;
      if ( is_mul_ok(v18, 2uLL) )
      {
        v19 = (unsigned __int16 *)CoTaskMemAlloc(2 * v18);
        *(_QWORD *)(v15 + 184) = v19;
        if ( !v19 )
        {
          v21 = -2147024882;
          goto LABEL_63;
        }
        v20 = 0;
        v21 = 0;
        StringCchCopyNExW(v19, v17 + 1, v36, v17, v31, v32, v33);
      }
      else
      {
        v20 = -2147024362;
        v21 = -2147024362;
      }
      if ( v20 >= 0 )
      {
        *(_DWORD *)(v15 + 120) = *(_DWORD *)a2 == 2;
        *(_DWORD *)(v15 + 12) = v60;
        *(_DWORD *)(v15 + 124) = *((_DWORD *)a2 + 14) != 0;
        if ( *(_QWORD *)(v15 + 144) )
          ATL::AtlComPtrAssign((struct IUnknown **)(v15 + 144), 0LL);
        if ( *(struct IUnknown **)(v15 + 232) != a1 )
          ATL::AtlComPtrAssign((struct IUnknown **)(v15 + 232), a1);
        *(_QWORD *)v15 = 0LL;
        *(_DWORD *)(v15 + 8) = 1;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(v15 + 16, &v51);
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v51);
        *(_DWORD *)(v15 + 136) = (int)(float)((float)(int)((float)((float)*(int *)(*((_QWORD *)a2 + 5) + 8LL)
                                                                 / (float)*(unsigned __int16 *)(*((_QWORD *)a2 + 5)
                                                                                              + 12LL))
                                                         * (double)(int)*((_QWORD *)a2 + 6)
                                                         / 10000000.0
                                                         + 0.5)
                                            * 1.1);
        *(_DWORD *)(v15 + 128) = 0;
        *(_DWORD *)(v15 + 204) = 0;
        *(_OWORD *)(v15 + 208) = *(_OWORD *)((char *)a2 + 60);
        v47 = 0LL;
        *a3 = (struct CPipeInstance *)v15;
        ATL::CAutoPtr<CPipeInstance>::Free(&v47);
        if ( v12 )
        {
          Release = v12->lpVtbl->Release;
          if ( (char *)Release == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v12);
          else
            ((void (__fastcall *)(struct IAudioMediaType *))Release)(v12);
        }
        v35 = 0LL;
        goto LABEL_70;
      }
    }
LABEL_63:
    v39 = v21;
    throw (long *)&v39;
  }
  catch ( long *v55 )
  {
    v20 = *(_DWORD *)v55;
  }
  catch ( ATL::CAtlException *v58 )
  {
    v20 = *(_DWORD *)v58[0];
  }
LABEL_70:
  v23 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      18LL,
      &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      (unsigned int)v20);
    v23 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( v20 < 0
    && (unsigned int *)v23 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v23 + 28) & 0x20000) != 0
    && *(_BYTE *)(v23 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v23 + 16), 19LL, &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids, (unsigned int)v20);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v51);
  return (unsigned int)v20;
}
