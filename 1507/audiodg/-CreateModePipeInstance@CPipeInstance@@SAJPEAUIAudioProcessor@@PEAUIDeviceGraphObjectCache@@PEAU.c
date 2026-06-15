/*
 * XREFs of ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAV1@PEAPEAV1@@Z @ 0x14002F4A0
 * Callers:
 *     ?CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z @ 0x140031698 (-CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14000866C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x140008790 (--0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140009C80 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B4E0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000B7A0 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000B820 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000B9A0 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140012FB0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140019B5C (_CxxThrowException_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14002EE28 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::CreateModePipeInstance(
        struct IUnknown *a1,
        struct IUnknown *a2,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a3,
        struct CPipeInstance *a4,
        struct CPipeInstance **a5)
{
  struct AUDIO_DEVICE_MODE_DESCRIPTOR *v5; // r14
  void (__fastcall ***v6)(_QWORD, __int64); // r12
  BOOL v7; // r15d
  const struct tWAVEFORMATEX *v8; // rdx
  int v9; // eax
  unsigned int i; // ebx
  int v11; // eax
  int v12; // r9d
  GUID *v13; // rax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  CAudioMediaType *v18; // rdi
  __int64 (__fastcall *v19)(CAudioMediaType *); // rdi
  __int64 v20; // rax
  int v21; // eax
  const struct tWAVEFORMATEX *v22; // rax
  int v23; // eax
  __int64 (__fastcall *v24)(CAudioMediaType *); // rdi
  void *v25; // rax
  __int64 v26; // rdi
  unsigned __int16 *v27; // rax
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // r13
  int v30; // r14d
  int v31; // ebx
  char *v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v35; // [rsp+40h] [rbp-F8h] BYREF
  CAudioMediaType *v36; // [rsp+48h] [rbp-F0h] BYREF
  CAudioMediaType *v37; // [rsp+50h] [rbp-E8h] BYREF
  BOOL v38; // [rsp+58h] [rbp-E0h]
  void (__fastcall ***v39)(_QWORD, __int64); // [rsp+60h] [rbp-D8h] BYREF
  int v40; // [rsp+68h] [rbp-D0h] BYREF
  int v41; // [rsp+6Ch] [rbp-CCh] BYREF
  __int64 v42; // [rsp+70h] [rbp-C8h]
  int v43; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+80h] [rbp-B8h]
  int v45; // [rsp+88h] [rbp-B0h] BYREF
  int v46; // [rsp+8Ch] [rbp-ACh] BYREF
  int v47; // [rsp+90h] [rbp-A8h] BYREF
  int v48; // [rsp+94h] [rbp-A4h] BYREF
  int pExceptionObject; // [rsp+98h] [rbp-A0h] BYREF
  unsigned __int16 *v50[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v51; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-78h]
  __int128 v53; // [rsp+C8h] [rbp-70h]
  int v54; // [rsp+D8h] [rbp-60h]
  long *v55; // [rsp+E0h] [rbp-58h] BYREF
  ATL::CAtlException *v56[10]; // [rsp+E8h] [rbp-50h] BYREF

  v56[1] = (ATL::CAtlException *)-2LL;
  v5 = a3;
  v44 = 0LL;
  v42 = 0LL;
  v6 = 0LL;
  v35 = 0LL;
  v39 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 10;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xEu,
      (__int64)&WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids);
  }
  try
  {
    v7 = *(_DWORD *)v5 != 0;
    v38 = v7;
    v8 = (const struct tWAVEFORMATEX *)*((_QWORD *)v5 + 2);
    if ( v8 )
    {
      v9 = CProcessNode::CreateDummyProcessNode(v7, v8, &v39);
      if ( v9 < 0 )
      {
        pExceptionObject = v9;
        throw (long *)&pExceptionObject;
      }
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v51, &v39);
      v39 = 0LL;
      v7 = v38;
    }
    for ( i = 0; i < *((_DWORD *)v5 + 13); ++i )
    {
      v11 = *((_DWORD *)v5 + 8);
      if ( _bittest(&v11, i) )
      {
        v12 = 1;
        v13 = (GUID *)((char *)v5 + 36);
      }
      else
      {
        v12 = 0;
        v13 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
      *(GUID *)v50 = *v13;
      v14 = CAPOProcessNode::CreateAPOProcessNode(
              (const struct _GUID *)((char *)v5 + 16 * i + 56),
              v7,
              0,
              v12,
              (__int128 *)v50,
              &v35);
      if ( v14 < 0 )
      {
        v40 = v14;
        throw (long *)&v40;
      }
      v36 = (CAudioMediaType *)v35;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v51, &v36);
      v6 = 0LL;
      v35 = 0LL;
    }
    if ( *(_DWORD *)v5 )
    {
      if ( *(_DWORD *)v5 == 1 )
      {
        v36 = 0LL;
        v20 = *((_QWORD *)a4 + 2);
        if ( !v20 )
          ATL::AtlThrowImpl(-2147467259);
        v44 = *(_QWORD *)(v20 + 16);
        v21 = (*(__int64 (__fastcall **)(__int64, CAudioMediaType **))(*(_QWORD *)v44 + 8LL))(v44, &v36);
        if ( v21 < 0 )
        {
          v41 = v21;
          throw (long *)&v41;
        }
        v22 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v36 + 40LL))(v36);
        v23 = CProcessNode::CreateDummyProcessNode(v7, v22, &v37);
        if ( v23 < 0 )
        {
          v46 = v23;
          throw (long *)&v46;
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v51, &v37);
        if ( v36 )
        {
          v24 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v36 + 16LL);
          if ( v24 == CAudioMediaType::Release )
            CAudioMediaType::Release(v36);
          else
            v24(v36);
        }
      }
    }
    else
    {
      v37 = 0LL;
      *(GUID *)v50 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v15 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
              v7,
              1,
              0,
              (__int128 *)v50,
              &v35);
      if ( v15 < 0 )
      {
        v48 = v15;
        throw (long *)&v48;
      }
      v16 = *((_QWORD *)a4 + 2);
      if ( !v16 )
        ATL::AtlThrowImpl(-2147467259);
      v44 = *(_QWORD *)(v16 + 16);
      v17 = (*(__int64 (__fastcall **)(__int64, CAudioMediaType **))(*(_QWORD *)v44 + 8LL))(v44, &v37);
      if ( v17 < 0 )
      {
        v45 = v17;
        throw (long *)&v45;
      }
      v18 = (CAudioMediaType *)v35;
      (*(void (__fastcall **)(unsigned __int64, CAudioMediaType *))(*(_QWORD *)v35 + 24LL))(v35, v37);
      (*(void (__fastcall **)(CAudioMediaType *, CAudioMediaType *))(*(_QWORD *)v18 + 32LL))(v18, v37);
      v36 = v18;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v51, &v36);
      v6 = 0LL;
      v35 = 0LL;
      if ( v37 )
      {
        v19 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v37 + 16LL);
        if ( v19 == CAudioMediaType::Release )
          CAudioMediaType::Release(v37);
        else
          v19(v37);
      }
      v5 = a3;
    }
    v25 = operator new(0x120uLL);
    if ( v25 )
      v26 = CPipeInstance::CPipeInstance((__int64)v25, 3);
    else
      v26 = 0LL;
    v42 = v26;
    if ( !v26 )
    {
      v43 = -2147024882;
      throw (long *)&v43;
    }
    v27 = (unsigned __int16 *)*((_QWORD *)v5 + 3);
    v50[0] = v27;
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    *(_QWORD *)(v26 + 184) = 0LL;
    v29 = v28 + 1;
    if ( v28 + 1 < v28 )
    {
      v31 = -2147024362;
    }
    else
    {
      *(_QWORD *)(v26 + 184) = 0LL;
      if ( is_mul_ok(v29, 2uLL) )
      {
        v32 = (char *)CoTaskMemAlloc(2 * v29);
        *(_QWORD *)(v26 + 184) = v32;
        if ( !v32 )
        {
          v31 = -2147024882;
          goto LABEL_60;
        }
        v30 = 0;
        v31 = 0;
        StringCchCopyNExW(v32, v28 + 1, v50[0], v28);
      }
      else
      {
        v30 = -2147024362;
        v31 = -2147024362;
      }
      if ( v30 >= 0 )
      {
        *(_DWORD *)(v26 + 120) = *(_DWORD *)a3 == 2;
        *(_DWORD *)(v26 + 12) = v38;
        *(_DWORD *)(v26 + 124) = *((_DWORD *)a3 + 8) != 0;
        if ( *(struct IUnknown **)(v26 + 144) != a1 )
          ATL::AtlComPtrAssign((struct IUnknown **)(v26 + 144), a1);
        if ( *(struct IUnknown **)(v26 + 232) != a2 )
          ATL::AtlComPtrAssign((struct IUnknown **)(v26 + 232), a2);
        *(_QWORD *)v26 = a4;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(
          (__int64 **)(v26 + 16),
          (__int64)&v51);
        *(_DWORD *)(v26 + 136) = *((_DWORD *)a4 + 33);
        *(_DWORD *)(v26 + 128) = 0;
        *(_DWORD *)(v26 + 204) = 0;
        *(_OWORD *)(v26 + 208) = *(_OWORD *)((char *)a3 + 36);
        goto LABEL_84;
      }
    }
LABEL_60:
    v47 = v31;
    throw (long *)&v47;
  }
  catch ( long *v55 )
  {
    v6 = (void (__fastcall ***)(_QWORD, __int64))v35;
    v26 = v42;
    v30 = *(_DWORD *)v55;
  }
  catch ( ATL::CAtlException *v56 )
  {
    v6 = (void (__fastcall ***)(_QWORD, __int64))v35;
    v26 = v42;
    v30 = *(_DWORD *)v56[0];
  }
LABEL_84:
  if ( v30 < 0 )
  {
    if ( v39 )
      (**v39)(v39, 1LL);
    if ( v6 )
      (**v6)(v6, 1LL);
    if ( v44 )
      (**(void (__fastcall ***)(__int64, __int64))v44)(v44, 1LL);
    if ( v26 )
      CPipeInstance::`scalar deleting destructor'((CPipeInstance *)v26);
    else
      CleanupProcessNodeList((__int64)&v51);
  }
  else
  {
    *a5 = (struct CPipeInstance *)v26;
  }
  v33 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xFu,
      (__int64)&WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      v30);
    v33 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( v30 < 0
    && (unsigned int *)v33 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v33 + 28) & 0x20000) != 0
    && *(_BYTE *)(v33 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v33 + 16), 0x10u, (__int64)&WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids, v30);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v51);
  return (unsigned int)v30;
}
