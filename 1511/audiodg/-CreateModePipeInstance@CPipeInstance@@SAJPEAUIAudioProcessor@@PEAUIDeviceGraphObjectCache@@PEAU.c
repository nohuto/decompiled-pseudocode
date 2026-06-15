/*
 * XREFs of ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAV1@PEAPEAV1@@Z @ 0x14002FC94
 * Callers:
 *     ?CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z @ 0x1400311D8 (-CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x140002500 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B990 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000BC58 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000BC90 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x14000FEC0 (--0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400103E0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140011770 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140012E70 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140019A9C (_CxxThrowException_0.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140026234 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14002F6A4 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::CreateModePipeInstance(
        struct IUnknown *a1,
        struct IUnknown *a2,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a3,
        struct CPipeInstance *a4,
        struct CPipeInstance **a5)
{
  __int64 v6; // r13
  void (__fastcall ***v7)(_QWORD, __int64); // r15
  BOOL v8; // r10d
  const struct tWAVEFORMATEX *v9; // rdx
  int v10; // eax
  unsigned int i; // ebx
  int v12; // eax
  int v13; // r9d
  GUID *v14; // rax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  void (__fastcall ***v19)(_QWORD, __int64); // rdi
  CAudioMediaType *v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  const struct tWAVEFORMATEX *v23; // rax
  int v24; // eax
  __int64 (__fastcall *v25)(CAudioMediaType *); // rdi
  void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  char *v30; // r8
  unsigned __int64 v31; // r9
  int v32; // eax
  int v33; // r14d
  _UNKNOWN **v34; // rcx
  int v36; // [rsp+20h] [rbp-F8h]
  int v37; // [rsp+30h] [rbp-E8h]
  void (__fastcall ***v38)(_QWORD, __int64); // [rsp+38h] [rbp-E0h] BYREF
  CAudioMediaType *v39; // [rsp+40h] [rbp-D8h] BYREF
  void (__fastcall ***v40)(_QWORD, __int64); // [rsp+48h] [rbp-D0h] BYREF
  GUID v41; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+60h] [rbp-B8h]
  __int64 v43; // [rsp+68h] [rbp-B0h]
  int v44; // [rsp+70h] [rbp-A8h] BYREF
  int v45; // [rsp+74h] [rbp-A4h] BYREF
  int v46; // [rsp+78h] [rbp-A0h] BYREF
  int v47; // [rsp+7Ch] [rbp-9Ch] BYREF
  int v48; // [rsp+80h] [rbp-98h] BYREF
  int pExceptionObject; // [rsp+84h] [rbp-94h] BYREF
  int v50; // [rsp+88h] [rbp-90h] BYREF
  int v51; // [rsp+8Ch] [rbp-8Ch] BYREF
  __int128 v52; // [rsp+90h] [rbp-88h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-78h]
  __int128 v54; // [rsp+A8h] [rbp-70h]
  int v55; // [rsp+B8h] [rbp-60h]
  __int64 v56; // [rsp+C0h] [rbp-58h]
  ATL::CAtlException *v57; // [rsp+C8h] [rbp-50h] BYREF
  long *v58; // [rsp+D0h] [rbp-48h] BYREF

  v56 = -2LL;
  v6 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v7 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 10;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_b52afc5823799b3c24512fb75c28f887_Traceguids);
  }
  try
  {
    v8 = *(_DWORD *)a3 != 0;
    v37 = v8;
    v9 = (const struct tWAVEFORMATEX *)*((_QWORD *)a3 + 2);
    if ( v9 )
    {
      v10 = CProcessNode::CreateDummyProcessNode(v8, v9, &v40);
      if ( v10 < 0 )
      {
        pExceptionObject = v10;
        throw (long *)&pExceptionObject;
      }
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v52, (__int64 *)&v40);
      v40 = 0LL;
      v8 = v37;
    }
    for ( i = 0; i < *((_DWORD *)a3 + 13); ++i )
    {
      v12 = *((_DWORD *)a3 + 8);
      if ( _bittest(&v12, i) )
      {
        v13 = 1;
        v14 = (GUID *)((char *)a3 + 36);
      }
      else
      {
        v13 = 0;
        v14 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
      v41 = *v14;
      v15 = CAPOProcessNode::CreateAPOProcessNode(
              (const struct _GUID *)((char *)a3 + 16 * i + 56),
              v8,
              0,
              v13,
              (__int128 *)&v41,
              &v38);
      if ( v15 < 0 )
      {
        v48 = v15;
        throw (long *)&v48;
      }
      *(_QWORD *)&v41.Data1 = v38;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v52, (__int64 *)&v41);
      v7 = 0LL;
      v38 = 0LL;
      v8 = v37;
    }
    if ( *(_DWORD *)a3 )
    {
      if ( *(_DWORD *)a3 != 1 )
      {
LABEL_37:
        v26 = operator new(0x120uLL);
        if ( v26 )
          v29 = CPipeInstance::CPipeInstance((__int64)v26, 3);
        else
          v29 = 0LL;
        v43 = v29;
        if ( !v29 )
        {
          v47 = -2147024882;
          throw (long *)&v47;
        }
        v30 = (char *)*((_QWORD *)a3 + 3);
        v31 = -1LL;
        do
          ++v31;
        while ( *(_WORD *)&v30[2 * v31] );
        v32 = _AllocStringWorker<CTCoAllocPolicy>(v28, v27, v30, v31, v36, (char **)(v29 + 184));
        v33 = v32;
        if ( v32 < 0 )
        {
          v46 = v32;
          throw (long *)&v46;
        }
        *(_DWORD *)(v29 + 120) = *(_DWORD *)a3 == 2;
        *(_DWORD *)(v29 + 12) = v37;
        *(_DWORD *)(v29 + 128) = *((_DWORD *)a3 + 8) != 0;
        if ( *(struct IUnknown **)(v29 + 144) != a1 )
          ATL::AtlComPtrAssign((struct IUnknown **)(v29 + 144), a1);
        if ( *(struct IUnknown **)(v29 + 232) != a2 )
          ATL::AtlComPtrAssign((struct IUnknown **)(v29 + 232), a2);
        *(_QWORD *)v29 = a4;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(
          (__int64 **)(v29 + 16),
          (__int64)&v52);
        *(_DWORD *)(v29 + 140) = *((_DWORD *)a4 + 34);
        *(_DWORD *)(v29 + 132) = 0;
        *(_DWORD *)(v29 + 204) = 0;
        *(_OWORD *)(v29 + 208) = *(_OWORD *)((char *)a3 + 36);
        goto LABEL_74;
      }
      *(_QWORD *)&v41.Data1 = 0LL;
      v21 = *((_QWORD *)a4 + 2);
      if ( !v21 )
        ATL::AtlThrowImpl(-2147467259);
      v6 = *(_QWORD *)(v21 + 16);
      v42 = v6;
      v22 = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v6 + 8LL))(v6, &v41);
      if ( v22 < 0 )
      {
        v51 = v22;
        throw (long *)&v51;
      }
      v23 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v41.Data1 + 40LL))(*(_QWORD *)&v41.Data1);
      v24 = CProcessNode::CreateDummyProcessNode(v37, v23, &v39);
      if ( v24 < 0 )
      {
        v45 = v24;
        throw (long *)&v45;
      }
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v52, (__int64 *)&v39);
      v20 = *(CAudioMediaType **)&v41.Data1;
    }
    else
    {
      v39 = 0LL;
      v41 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v16 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
              v8,
              1,
              0,
              (__int128 *)&v41,
              &v38);
      if ( v16 < 0 )
      {
        v44 = v16;
        throw (long *)&v44;
      }
      v17 = *((_QWORD *)a4 + 2);
      if ( !v17 )
        ATL::AtlThrowImpl(-2147467259);
      v6 = *(_QWORD *)(v17 + 16);
      v42 = v6;
      v18 = (*(__int64 (__fastcall **)(__int64, CAudioMediaType **))(*(_QWORD *)v6 + 8LL))(v6, &v39);
      if ( v18 < 0 )
      {
        v50 = v18;
        throw (long *)&v50;
      }
      v19 = v38;
      (*v38)[3](v38, (__int64)v39);
      (*v19)[4](v19, (__int64)v39);
      *(_QWORD *)&v41.Data1 = v19;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v52, (__int64 *)&v41);
      v7 = 0LL;
      v38 = 0LL;
      v20 = v39;
    }
    if ( v20 )
    {
      v25 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v20 + 16LL);
      if ( v25 == CAudioMediaType::Release )
        CAudioMediaType::Release(v20);
      else
        v25(v20);
    }
    goto LABEL_37;
  }
  catch ( long *v58 )
  {
    v7 = v38;
    v29 = v43;
    v6 = v42;
    v33 = *(_DWORD *)v58;
  }
  catch ( ATL::CAtlException *v57 )
  {
    v7 = v38;
    v29 = v43;
    v6 = v42;
    v33 = *(_DWORD *)v57;
  }
LABEL_74:
  if ( v33 < 0 )
  {
    if ( v40 )
      (**v40)(v40, 1LL);
    if ( v7 )
      (**v7)(v7, 1LL);
    if ( v6 )
      (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
    if ( v29 )
      CPipeInstance::`scalar deleting destructor'((LPVOID *)v29);
    else
      CleanupProcessNodeList((__int64)&v52);
  }
  else
  {
    *a5 = (struct CPipeInstance *)v29;
  }
  v34 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, (__int64)&WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, v33);
    v34 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v33 < 0 && v34 != &WPP_GLOBAL_Control && (*((_DWORD *)v34 + 7) & 0x20000) != 0 && *((_BYTE *)v34 + 25) >= 2u )
    WPP_SF_D((__int64)v34[2], 0x10u, (__int64)&WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, v33);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v52);
  return (unsigned int)v33;
}
