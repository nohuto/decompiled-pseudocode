/*
 * XREFs of ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B4B0
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140007990 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x140002500 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B990 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000BA30 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000BC58 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000BC90 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x14000FEC0 (--0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140011770 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140012E70 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140015B0C (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140019A9C (_CxxThrowException_0.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140026234 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14002F6A4 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateDevicePipeInstance(
        struct IUnknown *a1,
        struct IUnknown *a2,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a3,
        struct CPipeInstance **a4)
{
  struct CDeviceProcessNode *v6; // rdi
  void (__fastcall ***v7)(_QWORD, __int64); // r15
  int v8; // r12d
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rsi
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  unsigned int i; // esi
  int v15; // eax
  __int64 v16; // rsi
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rsi
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // rsi
  int EndpointGuidFromEndpointId; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  char *v28; // r8
  unsigned __int64 v29; // r9
  int v30; // eax
  _BYTE *v31; // rdx
  int v32; // r14d
  unsigned int v33; // eax
  _QWORD *v34; // rcx
  int v36; // eax
  int v37; // r14d
  BOOL v38; // r15d
  GUID *v39; // rax
  int v40; // eax
  __int64 v41; // r14
  _QWORD *v42; // rdx
  __int64 v43; // rcx
  int APOProcessNode; // eax
  _BYTE v45[32]; // [rsp+0h] [rbp-108h] BYREF
  GUID *v46; // [rsp+20h] [rbp-E8h]
  _QWORD *v47; // [rsp+28h] [rbp-E0h]
  void (__fastcall ***v48)(_QWORD, __int64); // [rsp+30h] [rbp-D8h] BYREF
  __int128 v49; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+48h] [rbp-C0h]
  __int128 v51; // [rsp+50h] [rbp-B8h]
  int v52; // [rsp+60h] [rbp-A8h]
  struct CDeviceProcessNode *v53; // [rsp+68h] [rbp-A0h] BYREF
  void (__fastcall ***v54)(_QWORD, __int64); // [rsp+70h] [rbp-98h] BYREF
  int pExceptionObject; // [rsp+78h] [rbp-90h] BYREF
  int v56; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v57; // [rsp+80h] [rbp-88h]
  int v58; // [rsp+88h] [rbp-80h] BYREF
  int v59; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v60; // [rsp+90h] [rbp-78h] BYREF
  int v61; // [rsp+94h] [rbp-74h] BYREF
  int v62; // [rsp+98h] [rbp-70h] BYREF
  int v63; // [rsp+9Ch] [rbp-6Ch] BYREF
  GUID v64; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-58h]
  long *v66; // [rsp+B8h] [rbp-50h] BYREF
  ATL::CAtlException *v67; // [rsp+C0h] [rbp-48h] BYREF
  void (__fastcall ***v69)(_QWORD, __int64); // [rsp+120h] [rbp+18h] BYREF
  struct CPipeInstance **v70; // [rsp+128h] [rbp+20h]

  v70 = a4;
  v65 = -2LL;
  v6 = 0LL;
  v53 = 0LL;
  v57 = 0LL;
  v7 = 0LL;
  v48 = 0LL;
  v54 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 10;
  v8 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids);
  }
  try
  {
    v9 = *((_QWORD *)a3 + 3);
    if ( v9 )
    {
      v10 = CProcessNode::CreateDummyProcessNode(*((unsigned int *)a3 + 18), v9, &v54);
      if ( v10 < 0 )
      {
        pExceptionObject = v10;
        throw (long *)&pExceptionObject;
      }
      v11 = *((_QWORD *)&v49 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v49);
      v12 = (_QWORD *)*((_QWORD *)&v51 + 1);
      v69 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)&v51 + 1);
      v13 = **((_QWORD **)&v51 + 1);
      *(_QWORD *)(*((_QWORD *)&v51 + 1) + 16LL) = v54;
      *((_QWORD *)&v51 + 1) = v13;
      v12[1] = v11;
      *v12 = 0LL;
      ++v50;
      if ( *((_QWORD *)&v49 + 1) )
        **((_QWORD **)&v49 + 1) = v12;
      else
        *(_QWORD *)&v49 = v12;
      *((_QWORD *)&v49 + 1) = v12;
      v54 = 0LL;
    }
    if ( !*((_DWORD *)a3 + 18) )
      v8 = 1;
    for ( i = 0; i < *((_DWORD *)a3 + 23); ++i )
    {
      v36 = *((_DWORD *)a3 + 20);
      if ( _bittest(&v36, i) )
        v37 = 1;
      else
        v37 = 0;
      v38 = *((_DWORD *)a3 + 22) == i;
      if ( !v37 )
        goto LABEL_48;
      if ( *((_DWORD *)a3 + 21) == i && v8 )
      {
        v64 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v47 = &v48;
        v46 = &v64;
        APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                           &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                           *((unsigned int *)a3 + 18),
                           1LL);
        if ( APOProcessNode < 0 )
        {
          v62 = APOProcessNode;
          throw (long *)&v62;
        }
        v69 = v48;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v49, &v69);
        v48 = 0LL;
        v8 = 0;
      }
      v39 = (GUID *)((char *)a3 + 116);
      if ( v38 )
LABEL_48:
        v39 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v64 = *v39;
      v47 = &v48;
      v46 = &v64;
      v40 = CAPOProcessNode::CreateAPOProcessNode((char *)a3 + 16 * i + 160, *((unsigned int *)a3 + 18), 0LL);
      if ( v40 < 0 )
      {
        v61 = v40;
        throw (long *)&v61;
      }
      v41 = *((_QWORD *)&v49 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v49);
      v42 = (_QWORD *)*((_QWORD *)&v51 + 1);
      v69 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)&v51 + 1);
      v43 = **((_QWORD **)&v51 + 1);
      *(_QWORD *)(*((_QWORD *)&v51 + 1) + 16LL) = v48;
      *((_QWORD *)&v51 + 1) = v43;
      v42[1] = v41;
      *v42 = 0LL;
      ++v50;
      if ( *((_QWORD *)&v49 + 1) )
        **((_QWORD **)&v49 + 1) = v42;
      else
        *(_QWORD *)&v49 = v42;
      *((_QWORD *)&v49 + 1) = v42;
      v7 = 0LL;
      v48 = 0LL;
    }
    if ( v8 )
    {
      v64 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v47 = &v48;
      v46 = &v64;
      v15 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
              *((unsigned int *)a3 + 18),
              1LL);
      if ( v15 < 0 )
      {
        v56 = v15;
        throw (long *)&v56;
      }
      v16 = *((_QWORD *)&v49 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v49);
      v17 = (_QWORD *)*((_QWORD *)&v51 + 1);
      v69 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)&v51 + 1);
      v18 = **((_QWORD **)&v51 + 1);
      *(_QWORD *)(*((_QWORD *)&v51 + 1) + 16LL) = v48;
      *((_QWORD *)&v51 + 1) = v18;
      v17[1] = v16;
      *v17 = 0LL;
      ++v50;
      if ( *((_QWORD *)&v49 + 1) )
        **((_QWORD **)&v49 + 1) = v17;
      else
        *(_QWORD *)&v49 = v17;
      *((_QWORD *)&v49 + 1) = v17;
      v7 = 0LL;
      v48 = 0LL;
    }
    v19 = CDeviceProcessNode::CreateDeviceProcessNode(a3, &v53);
    if ( v19 < 0 )
    {
      v63 = v19;
      throw (long *)&v63;
    }
    v20 = *((_QWORD *)&v49 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v49);
    v21 = (_QWORD *)*((_QWORD *)&v51 + 1);
    v69 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)&v51 + 1);
    v22 = **((_QWORD **)&v51 + 1);
    *(_QWORD *)(*((_QWORD *)&v51 + 1) + 16LL) = v53;
    *((_QWORD *)&v51 + 1) = v22;
    v21[1] = v20;
    *v21 = 0LL;
    ++v50;
    if ( *((_QWORD *)&v49 + 1) )
      **((_QWORD **)&v49 + 1) = v21;
    else
      *(_QWORD *)&v49 = v21;
    *((_QWORD *)&v49 + 1) = v21;
    v53 = 0LL;
    v23 = operator new(0x120uLL);
    if ( v23 )
      v24 = CPipeInstance::CPipeInstance(v23, 1LL);
    else
      v24 = 0LL;
    v57 = v24;
    if ( !v24 )
    {
      v59 = -2147024882;
      throw (long *)&v59;
    }
    *(_DWORD *)(v24 + 12) = *((_DWORD *)a3 + 18);
    *(_DWORD *)(v24 + 128) = *((_DWORD *)a3 + 20) != 0;
    *(_DWORD *)(v24 + 124) = *((_DWORD *)a3 + 24) == 1;
    if ( *(struct IUnknown **)(v24 + 144) != a1 )
      ATL::AtlComPtrAssign((struct IUnknown **)(v24 + 144), a1);
    if ( *(struct IUnknown **)(v24 + 232) != a2 )
      ATL::AtlComPtrAssign((struct IUnknown **)(v24 + 232), a2);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(v24 + 16, &v49);
    *(_DWORD *)(v24 + 204) = *((_DWORD *)a3 + 21) != -1;
    EndpointGuidFromEndpointId = GetEndpointGuidFromEndpointId(*((_QWORD *)a3 + 7), v24 + 152);
    if ( EndpointGuidFromEndpointId < 0 )
    {
      v58 = EndpointGuidFromEndpointId;
      throw (long *)&v58;
    }
    v28 = (char *)*((_QWORD *)a3 + 7);
    v29 = -1LL;
    do
      ++v29;
    while ( *(_WORD *)&v28[2 * v29] );
    v30 = _AllocStringWorker<CTCoAllocPolicy>(v27, v26, v28, v29, (int)v46, (char **)(v24 + 184));
    v32 = v30;
    if ( v30 < 0 )
    {
      v60 = v30;
      throw (long *)&v60;
    }
    v33 = (int)((float)((float)*(int *)(*((_QWORD *)a3 + 1) + 8LL)
                      / (float)*(unsigned __int16 *)(*((_QWORD *)a3 + 1) + 12LL))
              * (double)(int)*((_QWORD *)a3 + 4)
              / 10000000.0
              + 0.5);
    *(_DWORD *)(v24 + 140) = v33;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, v33);
    }
  }
  catch ( long *v66 )
  {
    v31 = v45;
    LODWORD(v69) = *(_DWORD *)v66;
    v32 = (int)v69;
    v7 = v48;
    v24 = v57;
    v6 = v53;
  }
  catch ( ATL::CAtlException *v67 )
  {
    v31 = v45;
    LODWORD(v69) = *(_DWORD *)v67;
    v32 = (int)v69;
    v7 = v48;
    v24 = v57;
    v6 = v53;
  }
  if ( v32 < 0 )
  {
    if ( v54 )
      (**v54)(v54, 1LL);
    if ( v7 )
      (**v7)(v7, 1LL);
    if ( v6 )
      (**(void (__fastcall ***)(struct CDeviceProcessNode *, __int64))v6)(v6, 1LL);
    if ( v24 )
      CPipeInstance::`scalar deleting destructor'((CPipeInstance *)v24, (unsigned int)v31);
    else
      CleanupProcessNodeList(&v49);
  }
  else
  {
    *v70 = (struct CPipeInstance *)v24;
  }
  v34 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12LL,
      &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids,
      (unsigned int)v32);
    v34 = WPP_GLOBAL_Control;
  }
  if ( v32 < 0 && v34 != &WPP_GLOBAL_Control && (*((_DWORD *)v34 + 7) & 0x20000) != 0 && *((_BYTE *)v34 + 25) >= 2u )
    WPP_SF_D(v34[2], 13LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, (unsigned int)v32);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v49);
  return (unsigned int)v32;
}
