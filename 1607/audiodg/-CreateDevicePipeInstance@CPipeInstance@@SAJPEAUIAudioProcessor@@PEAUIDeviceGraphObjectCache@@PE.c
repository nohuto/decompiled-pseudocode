/*
 * XREFs of ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000D930
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140006FA0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x14000B500 (--0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000CB50 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D4A0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000D540 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000D774 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000D7B0 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000EF10 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1400126C0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140014E64 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     _TlgKeywordOn @ 0x140016124 (_TlgKeywordOn.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140019552 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400250A4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14002DE08 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateDevicePipeInstance(
        struct IUnknown *a1,
        struct IUnknown *a2,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a3,
        struct CPipeInstance **a4)
{
  struct CDeviceProcessNode *v5; // rdi
  int v6; // r12d
  int v7; // r13d
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  unsigned int i; // ebx
  int v14; // eax
  __int64 v15; // rbx
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rbx
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rbx
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  void *v26; // rax
  __int64 v27; // r14
  int EndpointGuidFromEndpointId; // eax
  const unsigned __int16 *v29; // rsi
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r13
  unsigned __int128 v32; // rax
  unsigned __int16 *v33; // rax
  int v34; // r12d
  unsigned int v35; // eax
  _QWORD *v36; // rcx
  int v38; // eax
  int v39; // esi
  BOOL v40; // r14d
  GUID *v41; // rax
  int v42; // r9d
  int v43; // eax
  __int64 v44; // rsi
  _QWORD *v45; // rdx
  __int64 v46; // rcx
  int v47; // eax
  int v48; // eax
  _BYTE v49[32]; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int16 **v50; // [rsp+20h] [rbp-108h]
  unsigned __int64 *v51; // [rsp+28h] [rbp-100h]
  unsigned int v52; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v53; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v54; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v55; // [rsp+58h] [rbp-D0h]
  __int128 v56; // [rsp+60h] [rbp-C8h]
  int v57; // [rsp+70h] [rbp-B8h]
  struct CDeviceProcessNode *v58; // [rsp+78h] [rbp-B0h] BYREF
  void (__fastcall ***v59)(_QWORD, __int64); // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int16 *v60[2]; // [rsp+90h] [rbp-98h] BYREF
  int pExceptionObject; // [rsp+A0h] [rbp-88h] BYREF
  int v62; // [rsp+A4h] [rbp-84h] BYREF
  int v63; // [rsp+A8h] [rbp-80h] BYREF
  int v64; // [rsp+ACh] [rbp-7Ch] BYREF
  int v65; // [rsp+B0h] [rbp-78h] BYREF
  int v66; // [rsp+B4h] [rbp-74h] BYREF
  int v67; // [rsp+B8h] [rbp-70h] BYREF
  int v68; // [rsp+BCh] [rbp-6Ch] BYREF
  int v69; // [rsp+C0h] [rbp-68h] BYREF
  int v70; // [rsp+C4h] [rbp-64h] BYREF
  __int64 v71; // [rsp+C8h] [rbp-60h]
  __int64 v72; // [rsp+D0h] [rbp-58h]
  long *v73; // [rsp+D8h] [rbp-50h] BYREF
  ATL::CAtlException *v74; // [rsp+E0h] [rbp-48h] BYREF
  unsigned __int64 v77; // [rsp+140h] [rbp+18h] BYREF
  struct CPipeInstance **v78; // [rsp+148h] [rbp+20h]

  v78 = a4;
  v72 = -2LL;
  v5 = 0LL;
  v58 = 0LL;
  v71 = 0LL;
  v53 = 0LL;
  v59 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 10;
  v6 = 0;
  v7 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids);
  }
  try
  {
    v8 = *((_QWORD *)a3 + 3);
    if ( v8 )
    {
      v9 = CProcessNode::CreateDummyProcessNode(*((unsigned int *)a3 + 18), v8, &v59);
      if ( v9 < 0 )
      {
        pExceptionObject = v9;
        throw (long *)&pExceptionObject;
      }
      v10 = *((_QWORD *)&v54 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v54);
      v11 = (_QWORD *)*((_QWORD *)&v56 + 1);
      v77 = *((_QWORD *)&v56 + 1);
      v12 = **((_QWORD **)&v56 + 1);
      *(_QWORD *)(*((_QWORD *)&v56 + 1) + 16LL) = v59;
      *((_QWORD *)&v56 + 1) = v12;
      v11[1] = v10;
      *v11 = 0LL;
      ++v55;
      if ( *((_QWORD *)&v54 + 1) )
        **((_QWORD **)&v54 + 1) = v11;
      else
        *(_QWORD *)&v54 = v11;
      *((_QWORD *)&v54 + 1) = v11;
      v59 = 0LL;
    }
    if ( !*((_DWORD *)a3 + 18) )
    {
      v6 = 1;
      if ( (unsigned int)dword_1400540B0 > 4 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1400540B0, 0x400000000000uLL) )
          v7 = 1;
      }
    }
    for ( i = 0; i < *((_DWORD *)a3 + 24); ++i )
    {
      v38 = *((_DWORD *)a3 + 20);
      if ( _bittest(&v38, i) )
        v39 = 1;
      else
        v39 = 0;
      v40 = *((_DWORD *)a3 + 23) == i;
      if ( !v39 )
        goto LABEL_59;
      if ( *((_DWORD *)a3 + 22) == i )
      {
        if ( v6 )
        {
          *(GUID *)v60 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v47 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                  *((_DWORD *)a3 + 18),
                  1,
                  0,
                  (__int128 *)v60,
                  &v53);
          if ( v47 < 0 )
          {
            v62 = v47;
            throw (long *)&v62;
          }
          v77 = v53;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v54, (__int64 *)&v77);
          v53 = 0LL;
          v6 = 0;
        }
        if ( v7 )
        {
          *(GUID *)v60 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v48 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_693badea_1eb1_4013_b799_285f624a55bd,
                  *((_DWORD *)a3 + 18),
                  1,
                  0,
                  (__int128 *)v60,
                  &v53);
          if ( v48 < 0 )
          {
            v63 = v48;
            throw (long *)&v63;
          }
          v77 = v53;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v54, (__int64 *)&v77);
          v53 = 0LL;
          v7 = 0;
        }
      }
      v41 = (GUID *)((char *)a3 + 120);
      if ( v40 )
LABEL_59:
        v41 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v42 = 0;
      if ( v39 )
      {
        LOBYTE(v42) = v40;
        v42 += 2;
      }
      *(GUID *)v60 = *v41;
      v43 = CAPOProcessNode::CreateAPOProcessNode(
              (const struct _GUID *)((char *)a3 + 16 * i + 164),
              *((_DWORD *)a3 + 18),
              0,
              v42,
              (__int128 *)v60,
              &v53);
      if ( v43 < 0 )
      {
        v64 = v43;
        throw (long *)&v64;
      }
      v44 = *((_QWORD *)&v54 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v54);
      v45 = (_QWORD *)*((_QWORD *)&v56 + 1);
      v77 = *((_QWORD *)&v56 + 1);
      v46 = **((_QWORD **)&v56 + 1);
      *(_QWORD *)(*((_QWORD *)&v56 + 1) + 16LL) = v53;
      *((_QWORD *)&v56 + 1) = v46;
      v45[1] = v44;
      *v45 = 0LL;
      ++v55;
      if ( *((_QWORD *)&v54 + 1) )
        **((_QWORD **)&v54 + 1) = v45;
      else
        *(_QWORD *)&v54 = v45;
      *((_QWORD *)&v54 + 1) = v45;
      v53 = 0LL;
    }
    if ( v6 )
    {
      *(GUID *)v60 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v14 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
              *((_DWORD *)a3 + 18),
              1,
              0,
              (__int128 *)v60,
              &v53);
      if ( v14 < 0 )
      {
        v65 = v14;
        throw (long *)&v65;
      }
      v15 = *((_QWORD *)&v54 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v54);
      v16 = (_QWORD *)*((_QWORD *)&v56 + 1);
      v77 = *((_QWORD *)&v56 + 1);
      v17 = **((_QWORD **)&v56 + 1);
      *(_QWORD *)(*((_QWORD *)&v56 + 1) + 16LL) = v53;
      *((_QWORD *)&v56 + 1) = v17;
      v16[1] = v15;
      *v16 = 0LL;
      ++v55;
      if ( *((_QWORD *)&v54 + 1) )
        **((_QWORD **)&v54 + 1) = v16;
      else
        *(_QWORD *)&v54 = v16;
      *((_QWORD *)&v54 + 1) = v16;
      v53 = 0LL;
    }
    if ( v7 )
    {
      *(GUID *)v60 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v18 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_693badea_1eb1_4013_b799_285f624a55bd,
              *((_DWORD *)a3 + 18),
              1,
              0,
              (__int128 *)v60,
              &v53);
      if ( v18 < 0 )
      {
        v66 = v18;
        throw (long *)&v66;
      }
      v19 = *((_QWORD *)&v54 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v54);
      v20 = (_QWORD *)*((_QWORD *)&v56 + 1);
      v77 = *((_QWORD *)&v56 + 1);
      v21 = **((_QWORD **)&v56 + 1);
      *(_QWORD *)(*((_QWORD *)&v56 + 1) + 16LL) = v53;
      *((_QWORD *)&v56 + 1) = v21;
      v20[1] = v19;
      *v20 = 0LL;
      ++v55;
      if ( *((_QWORD *)&v54 + 1) )
        **((_QWORD **)&v54 + 1) = v20;
      else
        *(_QWORD *)&v54 = v20;
      *((_QWORD *)&v54 + 1) = v20;
      v53 = 0LL;
    }
    v22 = CDeviceProcessNode::CreateDeviceProcessNode(a3, &v58);
    if ( v22 < 0 )
    {
      v67 = v22;
      throw (long *)&v67;
    }
    v23 = *((_QWORD *)&v54 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v54);
    v24 = (_QWORD *)*((_QWORD *)&v56 + 1);
    v77 = *((_QWORD *)&v56 + 1);
    v25 = **((_QWORD **)&v56 + 1);
    *(_QWORD *)(*((_QWORD *)&v56 + 1) + 16LL) = v58;
    *((_QWORD *)&v56 + 1) = v25;
    v24[1] = v23;
    *v24 = 0LL;
    ++v55;
    if ( *((_QWORD *)&v54 + 1) )
      **((_QWORD **)&v54 + 1) = v24;
    else
      *(_QWORD *)&v54 = v24;
    *((_QWORD *)&v54 + 1) = v24;
    v58 = 0LL;
    v26 = operator new(0x130uLL);
    if ( v26 )
      v27 = CPipeInstance::CPipeInstance((__int64)v26, 1);
    else
      v27 = 0LL;
    v71 = v27;
    if ( !v27 )
    {
      v68 = -2147024882;
      throw (long *)&v68;
    }
    *(_OWORD *)(v27 + 288) = *(_OWORD *)((char *)a3 + 148);
    *(_DWORD *)(v27 + 12) = *((_DWORD *)a3 + 18);
    *(_DWORD *)(v27 + 128) = *((_DWORD *)a3 + 20) != 0;
    *(_DWORD *)(v27 + 124) = *((_DWORD *)a3 + 25) == 1;
    if ( *(struct IUnknown **)(v27 + 144) != a1 )
      ATL::AtlComPtrAssign((struct IUnknown **)(v27 + 144), a1);
    if ( *(struct IUnknown **)(v27 + 232) != a2 )
      ATL::AtlComPtrAssign((struct IUnknown **)(v27 + 232), a2);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(
      (__int64 **)(v27 + 16),
      (__int64)&v54);
    *(_DWORD *)(v27 + 204) = *((_DWORD *)a3 + 22) != -1;
    EndpointGuidFromEndpointId = GetEndpointGuidFromEndpointId(*((_QWORD *)a3 + 7), v27 + 152);
    if ( EndpointGuidFromEndpointId < 0 )
    {
      v69 = EndpointGuidFromEndpointId;
      throw (long *)&v69;
    }
    v29 = (const unsigned __int16 *)*((_QWORD *)a3 + 7);
    v30 = -1LL;
    do
      ++v30;
    while ( v29[v30] );
    *(_QWORD *)(v27 + 184) = 0LL;
    v31 = v30 + 1;
    if ( v30 + 1 < v30 )
    {
      LODWORD(v32) = -2147024362;
    }
    else
    {
      *(_QWORD *)(v27 + 184) = 0LL;
      v32 = v31 * (unsigned __int128)2uLL;
      if ( is_mul_ok(v31, 2uLL) )
      {
        v33 = (unsigned __int16 *)CoTaskMemAlloc(2 * v31);
        *(_QWORD *)(v27 + 184) = v33;
        if ( !v33 )
        {
          LODWORD(v32) = -2147024882;
          goto LABEL_96;
        }
        v34 = 0;
        StringCchCopyNExW(v33, v30 + 1, v29, v30, v50, v51, v52);
        LODWORD(v32) = 0;
      }
      else
      {
        v34 = -2147024362;
        LODWORD(v32) = -2147024362;
      }
      if ( v34 >= 0 )
      {
        v35 = (int)((float)((float)*(int *)(*((_QWORD *)a3 + 1) + 8LL)
                          / (float)*(unsigned __int16 *)(*((_QWORD *)a3 + 1) + 12LL))
                  * (double)(int)*((_QWORD *)a3 + 4)
                  / 10000000.0
                  + 0.5);
        *(_DWORD *)(v27 + 140) = v35;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids, v35);
        }
        goto LABEL_113;
      }
    }
LABEL_96:
    v70 = v32;
    throw (long *)&v70;
  }
  catch ( long *v73 )
  {
    *((_QWORD *)&v32 + 1) = v49;
    LODWORD(v77) = *(_DWORD *)v73;
    v34 = v77;
    v27 = v71;
    v5 = v58;
  }
  catch ( ATL::CAtlException *v74 )
  {
    *((_QWORD *)&v32 + 1) = v49;
    LODWORD(v77) = *(_DWORD *)v74;
    v34 = v77;
    v27 = v71;
    v5 = v58;
  }
LABEL_113:
  if ( v34 < 0 )
  {
    if ( v59 )
      (**v59)(v59, 1LL);
    if ( v53 )
      (**(void (__fastcall ***)(unsigned __int64, __int64))v53)(v53, 1LL);
    if ( v5 )
      (**(void (__fastcall ***)(struct CDeviceProcessNode *, __int64))v5)(v5, 1LL);
    if ( v27 )
      CPipeInstance::`scalar deleting destructor'((CPipeInstance *)v27, DWORD2(v32));
    else
      CleanupProcessNodeList(&v54);
  }
  else
  {
    *v78 = (struct CPipeInstance *)v27;
  }
  v36 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12LL,
      &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
      (unsigned int)v34);
    v36 = WPP_GLOBAL_Control;
  }
  if ( v34 < 0 )
  {
    if ( v36 != &WPP_GLOBAL_Control && (*((_DWORD *)v36 + 7) & 0x20000) != 0 && *((_BYTE *)v36 + 25) >= 2u )
      WPP_SF_D(v36[2], 13LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids, (unsigned int)v34);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateDevicePipeInstance", 0x123u, v34);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v54);
  return (unsigned int)v34;
}
