/*
 * XREFs of ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000BAF0
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FD30 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003824 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14000866C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x140008790 (--0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140009C80 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B4E0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000B580 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000B7A0 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000B820 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000B9A0 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140012FB0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140019B5C (_CxxThrowException_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14002EE28 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateDevicePipeInstance(
        struct IUnknown *a1,
        struct IUnknown *a2,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a3,
        struct CPipeInstance **a4)
{
  struct CDeviceProcessNode *v6; // rsi
  int v7; // edi
  const struct tWAVEFORMATEX *v8; // rdx
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
  void *v22; // rax
  __int64 v23; // r14
  int EndpointGuidFromEndpointId; // eax
  const unsigned __int16 *v25; // rdi
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r12
  unsigned __int16 *v28; // rax
  int v29; // r15d
  int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v34; // eax
  int v35; // r14d
  BOOL v36; // r15d
  GUID *v37; // rax
  int v38; // eax
  int v39; // eax
  unsigned __int16 **v40; // [rsp+20h] [rbp-F8h]
  unsigned __int64 *v41; // [rsp+28h] [rbp-F0h]
  unsigned int v42; // [rsp+30h] [rbp-E8h]
  unsigned __int64 v43; // [rsp+40h] [rbp-D8h] BYREF
  struct CDeviceProcessNode *v44; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v45; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-B8h]
  __int128 v47; // [rsp+68h] [rbp-B0h]
  int v48; // [rsp+78h] [rbp-A0h]
  void (__fastcall ***v49)(_QWORD, __int64); // [rsp+80h] [rbp-98h] BYREF
  int pExceptionObject; // [rsp+88h] [rbp-90h] BYREF
  int v51; // [rsp+8Ch] [rbp-8Ch] BYREF
  __int64 v52; // [rsp+90h] [rbp-88h]
  int v53; // [rsp+98h] [rbp-80h] BYREF
  int v54; // [rsp+9Ch] [rbp-7Ch] BYREF
  int v55; // [rsp+A0h] [rbp-78h] BYREF
  int v56; // [rsp+A4h] [rbp-74h] BYREF
  int v57; // [rsp+A8h] [rbp-70h] BYREF
  int v58; // [rsp+ACh] [rbp-6Ch] BYREF
  unsigned __int16 *v59[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-58h]
  long *v61; // [rsp+C8h] [rbp-50h] BYREF
  ATL::CAtlException *v62; // [rsp+D0h] [rbp-48h] BYREF
  unsigned __int64 v64; // [rsp+130h] [rbp+18h] BYREF
  struct CPipeInstance **v65; // [rsp+138h] [rbp+20h]

  v65 = a4;
  v60 = -2LL;
  v6 = 0LL;
  v44 = 0LL;
  v52 = 0LL;
  v43 = 0LL;
  v49 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 10;
  v7 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 10LL, &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids);
  }
  try
  {
    v8 = (const struct tWAVEFORMATEX *)*((_QWORD *)a3 + 3);
    if ( v8 )
    {
      v9 = CProcessNode::CreateDummyProcessNode(*((_DWORD *)a3 + 16), v8, &v49);
      if ( v9 < 0 )
      {
        pExceptionObject = v9;
        throw (long *)&pExceptionObject;
      }
      v10 = *((_QWORD *)&v45 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v45);
      v11 = (_QWORD *)*((_QWORD *)&v47 + 1);
      v64 = *((_QWORD *)&v47 + 1);
      v12 = **((_QWORD **)&v47 + 1);
      *(_QWORD *)(*((_QWORD *)&v47 + 1) + 16LL) = v49;
      *((_QWORD *)&v47 + 1) = v12;
      v11[1] = v10;
      *v11 = 0LL;
      ++v46;
      if ( *((_QWORD *)&v45 + 1) )
        **((_QWORD **)&v45 + 1) = v11;
      else
        *(_QWORD *)&v45 = v11;
      *((_QWORD *)&v45 + 1) = v11;
      v49 = 0LL;
    }
    if ( !*((_DWORD *)a3 + 16) )
      v7 = 1;
    for ( i = 0; i < *((_DWORD *)a3 + 21); ++i )
    {
      v34 = *((_DWORD *)a3 + 18);
      v35 = _bittest(&v34, i);
      v36 = *((_DWORD *)a3 + 20) == i;
      if ( !v35 )
        goto LABEL_52;
      if ( *((_DWORD *)a3 + 19) == i && v7 )
      {
        *(GUID *)v59 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v39 = CAPOProcessNode::CreateAPOProcessNode(
                &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                *((_DWORD *)a3 + 16),
                1,
                0,
                (__int128 *)v59,
                &v43);
        if ( v39 < 0 )
        {
          v57 = v39;
          throw (long *)&v57;
        }
        v64 = v43;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v45, &v64);
        v43 = 0LL;
        v7 = 0;
      }
      if ( !v36 )
        v37 = (GUID *)((char *)a3 + 108);
      else
LABEL_52:
        v37 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      *(GUID *)v59 = *v37;
      v38 = CAPOProcessNode::CreateAPOProcessNode(
              (const struct _GUID *)((char *)a3 + 16 * i + 152),
              *((_DWORD *)a3 + 16),
              0,
              v35,
              (__int128 *)v59,
              &v43);
      if ( v38 < 0 )
      {
        v56 = v38;
        throw (long *)&v56;
      }
      v64 = v43;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v45, &v64);
      v43 = 0LL;
    }
    if ( v7 )
    {
      *(GUID *)v59 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v14 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
              *((_DWORD *)a3 + 16),
              1,
              0,
              (__int128 *)v59,
              &v43);
      if ( v14 < 0 )
      {
        v51 = v14;
        throw (long *)&v51;
      }
      v15 = *((_QWORD *)&v45 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v45);
      v16 = (_QWORD *)*((_QWORD *)&v47 + 1);
      v64 = *((_QWORD *)&v47 + 1);
      v17 = **((_QWORD **)&v47 + 1);
      *(_QWORD *)(*((_QWORD *)&v47 + 1) + 16LL) = v43;
      *((_QWORD *)&v47 + 1) = v17;
      v16[1] = v15;
      *v16 = 0LL;
      ++v46;
      if ( *((_QWORD *)&v45 + 1) )
        **((_QWORD **)&v45 + 1) = v16;
      else
        *(_QWORD *)&v45 = v16;
      *((_QWORD *)&v45 + 1) = v16;
      v43 = 0LL;
    }
    v18 = CDeviceProcessNode::CreateDeviceProcessNode(a3, &v44);
    if ( v18 < 0 )
    {
      v58 = v18;
      throw (long *)&v58;
    }
    v19 = *((_QWORD *)&v45 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v45);
    v20 = (_QWORD *)*((_QWORD *)&v47 + 1);
    v64 = *((_QWORD *)&v47 + 1);
    v21 = **((_QWORD **)&v47 + 1);
    *(_QWORD *)(*((_QWORD *)&v47 + 1) + 16LL) = v44;
    *((_QWORD *)&v47 + 1) = v21;
    v20[1] = v19;
    *v20 = 0LL;
    ++v46;
    if ( *((_QWORD *)&v45 + 1) )
      **((_QWORD **)&v45 + 1) = v20;
    else
      *(_QWORD *)&v45 = v20;
    *((_QWORD *)&v45 + 1) = v20;
    v44 = 0LL;
    v22 = operator new(0x120uLL);
    if ( v22 )
      v23 = CPipeInstance::CPipeInstance((__int64)v22, 1);
    else
      v23 = 0LL;
    v52 = v23;
    if ( !v23 )
    {
      v54 = -2147024882;
      throw (long *)&v54;
    }
    *(_DWORD *)(v23 + 12) = *((_DWORD *)a3 + 16);
    *(_DWORD *)(v23 + 124) = *((_DWORD *)a3 + 18) != 0;
    if ( *(struct IUnknown **)(v23 + 144) != a1 )
      ATL::AtlComPtrAssign((struct IUnknown **)(v23 + 144), a1);
    if ( *(struct IUnknown **)(v23 + 232) != a2 )
      ATL::AtlComPtrAssign((struct IUnknown **)(v23 + 232), a2);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(
      (__int64 **)(v23 + 16),
      (__int64)&v45);
    *(_DWORD *)(v23 + 204) = *((_DWORD *)a3 + 19) != -1;
    EndpointGuidFromEndpointId = GetEndpointGuidFromEndpointId(*((_QWORD *)a3 + 7), v23 + 152);
    if ( EndpointGuidFromEndpointId < 0 )
    {
      v53 = EndpointGuidFromEndpointId;
      throw (long *)&v53;
    }
    v25 = (const unsigned __int16 *)*((_QWORD *)a3 + 7);
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    *(_QWORD *)(v23 + 184) = 0LL;
    v27 = v26 + 1;
    if ( v26 + 1 < v26 )
    {
      v30 = -2147024362;
    }
    else
    {
      *(_QWORD *)(v23 + 184) = 0LL;
      if ( is_mul_ok(v27, 2uLL) )
      {
        v28 = (unsigned __int16 *)CoTaskMemAlloc(2 * v27);
        *(_QWORD *)(v23 + 184) = v28;
        if ( !v28 )
        {
          v30 = -2147024882;
          goto LABEL_75;
        }
        v29 = 0;
        StringCchCopyNExW(v28, v26 + 1, v25, v26, v40, v41, v42);
        v30 = 0;
      }
      else
      {
        v29 = -2147024362;
        v30 = -2147024362;
      }
      if ( v29 >= 0 )
      {
        v31 = (int)((float)((float)*(int *)(*((_QWORD *)a3 + 1) + 8LL)
                          / (float)*(unsigned __int16 *)(*((_QWORD *)a3 + 1) + 12LL))
                  * (double)(int)*((_QWORD *)a3 + 4)
                  / 10000000.0
                  + 0.5);
        *(_DWORD *)(v23 + 136) = v31;
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            11LL,
            &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
            v31);
        }
        goto LABEL_91;
      }
    }
LABEL_75:
    v55 = v30;
    throw (long *)&v55;
  }
  catch ( long *v61 )
  {
    LODWORD(v64) = *(_DWORD *)v61;
    v29 = v64;
    v23 = v52;
    v6 = v44;
  }
  catch ( ATL::CAtlException *v62 )
  {
    LODWORD(v64) = *(_DWORD *)v62;
    v29 = v64;
    v23 = v52;
    v6 = v44;
  }
LABEL_91:
  if ( v29 < 0 )
  {
    if ( v49 )
      (**v49)(v49, 1LL);
    if ( v43 )
      (**(void (__fastcall ***)(unsigned __int64, __int64))v43)(v43, 1LL);
    if ( v6 )
      (**(void (__fastcall ***)(struct CDeviceProcessNode *, __int64))v6)(v6, 1LL);
    if ( v23 )
      CPipeInstance::`scalar deleting destructor'((CPipeInstance *)v23);
    else
      CleanupProcessNodeList(&v45);
  }
  else
  {
    *v65 = (struct CPipeInstance *)v23;
  }
  v32 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      12LL,
      &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      (unsigned int)v29);
    v32 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( v29 < 0
    && (unsigned int *)v32 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v32 + 28) & 0x20000) != 0
    && *(_BYTE *)(v32 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v32 + 16), 13LL, &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids, (unsigned int)v29);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v45);
  return (unsigned int)v29;
}
