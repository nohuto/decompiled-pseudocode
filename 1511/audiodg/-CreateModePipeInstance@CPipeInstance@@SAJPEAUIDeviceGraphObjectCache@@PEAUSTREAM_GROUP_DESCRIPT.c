/*
 * XREFs of ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000AE90
 * Callers:
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140004310 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x140002500 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B990 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000BA30 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000BC58 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000BC90 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x14000FEC0 (--0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140010520 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x1400105E0 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x140011480 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140011770 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140012E70 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140018A14 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140019A9C (_CxxThrowException_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CPipeInstance::CreateModePipeInstance(
        struct IUnknown *a1,
        struct STREAM_GROUP_DESCRIPTOR *a2,
        struct CPipeInstance **a3)
{
  BOOL v5; // r13d
  int v6; // eax
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  void (__fastcall ***v10)(_QWORD, __int64); // rsi
  unsigned int i; // ebx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  CAPOProcessNode *v15; // rbx
  void (__fastcall *v16)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // r15
  void *v17; // rdi
  void (__fastcall *v18)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // r15
  __int64 v19; // r15
  _QWORD *v20; // rax
  __int64 v21; // rcx
  void *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  char *v26; // r8
  unsigned __int64 v27; // r9
  int v28; // eax
  unsigned int v29; // r15d
  __int64 v30; // rcx
  unsigned int (__fastcall *v31)(CAudioMediaType *__hidden); // rbx
  _QWORD *v32; // rcx
  int v34; // eax
  GUID *v35; // rax
  int APOProcessNode; // eax
  __int64 v37; // rdi
  _QWORD *v38; // rcx
  __int64 v39; // rdx
  void **v40; // rbx
  __int64 v41; // rax
  int v42; // eax
  GUID *v43; // [rsp+20h] [rbp-1B8h]
  unsigned int v44; // [rsp+30h] [rbp-1A8h]
  void *Block; // [rsp+38h] [rbp-1A0h] BYREF
  void (__fastcall ***v46)(_QWORD, __int64); // [rsp+40h] [rbp-198h] BYREF
  __int128 v47; // [rsp+48h] [rbp-190h] BYREF
  __int64 v48; // [rsp+58h] [rbp-180h]
  __int128 v49; // [rsp+60h] [rbp-178h]
  int v50; // [rsp+70h] [rbp-168h]
  __int64 v51; // [rsp+78h] [rbp-160h]
  __int64 v52; // [rsp+80h] [rbp-158h] BYREF
  CAPOProcessNode *v53; // [rsp+88h] [rbp-150h]
  int v54; // [rsp+90h] [rbp-148h] BYREF
  int v55; // [rsp+94h] [rbp-144h] BYREF
  int v56; // [rsp+98h] [rbp-140h] BYREF
  int v57; // [rsp+9Ch] [rbp-13Ch] BYREF
  int v58; // [rsp+A0h] [rbp-138h] BYREF
  int v59; // [rsp+A4h] [rbp-134h] BYREF
  _DWORD pExceptionObject[2]; // [rsp+A8h] [rbp-130h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-128h]
  float v62; // [rsp+B8h] [rbp-120h]
  __int64 v63; // [rsp+C0h] [rbp-118h]
  __int64 v64; // [rsp+C8h] [rbp-110h] BYREF
  float v65; // [rsp+D0h] [rbp-108h]
  __int64 v66; // [rsp+D8h] [rbp-100h]
  __int64 v67; // [rsp+E0h] [rbp-F8h]
  __int64 v68; // [rsp+E8h] [rbp-F0h]
  __int64 v69; // [rsp+F0h] [rbp-E8h]
  __int64 v70; // [rsp+F8h] [rbp-E0h]
  void *v71; // [rsp+100h] [rbp-D8h]
  __int64 v72; // [rsp+108h] [rbp-D0h]
  char *v73; // [rsp+110h] [rbp-C8h]
  __int64 v74; // [rsp+118h] [rbp-C0h]
  __int64 v75; // [rsp+120h] [rbp-B8h]
  __int64 v76; // [rsp+128h] [rbp-B0h]
  __int64 v77; // [rsp+130h] [rbp-A8h]
  __int64 v78; // [rsp+138h] [rbp-A0h]
  long *v79[2]; // [rsp+140h] [rbp-98h] BYREF
  ATL::CAtlException *v80[2]; // [rsp+150h] [rbp-88h] BYREF
  GUID v81; // [rsp+160h] [rbp-78h] BYREF
  const struct tWAVEFORMATEX *v82; // [rsp+170h] [rbp-68h]
  GUID v83; // [rsp+180h] [rbp-58h] BYREF
  __int64 v84; // [rsp+190h] [rbp-48h]
  __int64 v85; // [rsp+198h] [rbp-40h]

  v85 = -2LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 10;
  v5 = *(_DWORD *)a2 != 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids);
  }
  *a3 = 0LL;
  try
  {
    v46 = 0LL;
    v6 = CProcessNode::CreateDummyProcessNode(v5, *((_QWORD *)a2 + 2), &v46);
    if ( v6 < 0 )
    {
      pExceptionObject[0] = v6;
      throw (long *)pExceptionObject;
    }
    v7 = *((_QWORD *)&v47 + 1);
    v66 = *((_QWORD *)&v47 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v47);
    v8 = (_QWORD *)*((_QWORD *)&v49 + 1);
    v68 = *((_QWORD *)&v49 + 1);
    v9 = **((_QWORD **)&v49 + 1);
    v78 = **((_QWORD **)&v49 + 1);
    v70 = *((_QWORD *)&v49 + 1);
    if ( *((_QWORD *)&v49 + 1) )
      *(_QWORD *)(*((_QWORD *)&v49 + 1) + 16LL) = v46;
    *((_QWORD *)&v49 + 1) = v9;
    v8[1] = v7;
    *v8 = 0LL;
    ++v48;
    if ( *((_QWORD *)&v47 + 1) )
      **((_QWORD **)&v47 + 1) = v8;
    else
      *(_QWORD *)&v47 = v8;
    *((_QWORD *)&v47 + 1) = v8;
    v10 = 0LL;
    v46 = 0LL;
    for ( i = 0; ; ++i )
    {
      pExceptionObject[1] = i;
      if ( i >= *((_DWORD *)a2 + 19) )
        break;
      v51 = 0LL;
      v34 = *((_DWORD *)a2 + 14);
      if ( _bittest(&v34, i) )
        v35 = (GUID *)((char *)a2 + 60);
      else
        v35 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v81 = *v35;
      v43 = &v81;
      APOProcessNode = CAPOProcessNode::CreateAPOProcessNode((char *)a2 + 16 * i + 80, v5, 0LL);
      if ( APOProcessNode < 0 )
      {
        v57 = APOProcessNode;
        throw (long *)&v57;
      }
      v37 = *((_QWORD *)&v47 + 1);
      v84 = *((_QWORD *)&v47 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v47);
      v38 = (_QWORD *)*((_QWORD *)&v49 + 1);
      v72 = *((_QWORD *)&v49 + 1);
      v39 = **((_QWORD **)&v49 + 1);
      v79[1] = **((long ***)&v49 + 1);
      v74 = *((_QWORD *)&v49 + 1);
      if ( *((_QWORD *)&v49 + 1) )
        *(_QWORD *)(*((_QWORD *)&v49 + 1) + 16LL) = v51;
      *((_QWORD *)&v49 + 1) = v39;
      v38[1] = v37;
      *v38 = 0LL;
      ++v48;
      if ( *((_QWORD *)&v47 + 1) )
        **((_QWORD **)&v47 + 1) = v38;
      else
        *(_QWORD *)&v47 = v38;
      *((_QWORD *)&v47 + 1) = v38;
      v51 = 0LL;
    }
    Block = 0LL;
    v12 = *((_DWORD *)a2 + 9);
    v82 = (const struct tWAVEFORMATEX *)*((_QWORD *)a2 + 5);
    v13 = CAudioMediaType::Create(v82, v12, (struct IAudioMediaType **)&Block, 0.0);
    if ( v13 < 0 )
    {
      v55 = v13;
      throw (long *)&v55;
    }
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        v52 = 0LL;
        v17 = Block;
        v41 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)Block + 40LL))(Block);
        v42 = CProcessNode::CreateDummyProcessNode(v5, v41, &v52);
        if ( v42 < 0 )
        {
          v58 = v42;
          throw (long *)&v58;
        }
        v64 = v52;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v47, &v64);
        v52 = 0LL;
      }
      else
      {
        v17 = Block;
      }
    }
    else
    {
      v53 = 0LL;
      v83 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v43 = &v83;
      v14 = CAPOProcessNode::CreateAPOProcessNode(&GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a, v5, 1LL);
      if ( v14 < 0 )
      {
        v56 = v14;
        throw (long *)&v56;
      }
      v15 = v53;
      v16 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v53 + 24LL);
      v17 = Block;
      if ( v16 == CAPOProcessNode::SetLeftFormat )
        CAPOProcessNode::SetLeftFormat(v53, (struct IAudioMediaType *)Block);
      else
        v16(v53, (struct IAudioMediaType *)Block);
      v18 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v15 + 32LL);
      if ( v18 == CAPOProcessNode::SetRightFormat )
        CAPOProcessNode::SetRightFormat(v15, (struct IAudioMediaType *)v17);
      else
        v18(v15, (struct IAudioMediaType *)v17);
      v19 = *((_QWORD *)&v47 + 1);
      v76 = *((_QWORD *)&v47 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v47);
      v20 = (_QWORD *)*((_QWORD *)&v49 + 1);
      v80[1] = *((ATL::CAtlException **)&v49 + 1);
      v21 = **((_QWORD **)&v49 + 1);
      v67 = **((_QWORD **)&v49 + 1);
      v69 = *((_QWORD *)&v49 + 1);
      if ( *((_QWORD *)&v49 + 1) )
        *(_QWORD *)(*((_QWORD *)&v49 + 1) + 16LL) = v15;
      *((_QWORD *)&v49 + 1) = v21;
      v20[1] = v19;
      *v20 = 0LL;
      ++v48;
      if ( *((_QWORD *)&v47 + 1) )
        **((_QWORD **)&v47 + 1) = v20;
      else
        *(_QWORD *)&v47 = v20;
      *((_QWORD *)&v47 + 1) = v20;
      v53 = 0LL;
    }
    v22 = operator new(0x120uLL);
    v71 = v22;
    if ( v22 )
    {
      v25 = CPipeInstance::CPipeInstance(v22, 3LL);
      v63 = v25;
    }
    else
    {
      v25 = 0LL;
      v63 = 0LL;
    }
    v61 = v25;
    if ( !v25 )
    {
      v54 = -2147024882;
      throw (long *)&v54;
    }
    v26 = (char *)*((_QWORD *)a2 + 3);
    v73 = v26;
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)&v26[2 * v27] );
    v28 = _AllocStringWorker<CTCoAllocPolicy>(v24, v23, v26, v27, (int)v43, (char **)(v25 + 184));
    v29 = v28;
    v44 = v28;
    if ( v28 < 0 )
    {
      v59 = v28;
      throw (long *)&v59;
    }
    *(_DWORD *)(v25 + 120) = *(_DWORD *)a2 == 2;
    *(_DWORD *)(v25 + 12) = v5;
    *(_DWORD *)(v25 + 128) = *((_DWORD *)a2 + 14) != 0;
    v75 = v25 + 144;
    if ( *(_QWORD *)(v25 + 144) )
      ATL::AtlComPtrAssign((struct IUnknown **)(v25 + 144), 0LL);
    v77 = v25 + 232;
    if ( *(struct IUnknown **)(v25 + 232) != a1 )
      ATL::AtlComPtrAssign((struct IUnknown **)(v25 + 232), a1);
    *(_QWORD *)v25 = 0LL;
    *(_DWORD *)(v25 + 8) = 1;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(v25 + 16, &v47);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v47);
    v30 = *((_QWORD *)a2 + 5);
    v62 = (float)*(int *)(v30 + 8);
    v65 = (float)*(unsigned __int16 *)(v30 + 12);
    *(_DWORD *)(v25 + 140) = (int)(float)((float)(int)((float)(v62 / v65)
                                                     * (double)(int)*((_QWORD *)a2 + 6)
                                                     / 10000000.0
                                                     + 0.5)
                                        * 1.1);
    *(_DWORD *)(v25 + 132) = 0;
    *(_DWORD *)(v25 + 204) = 0;
    *(_OWORD *)(v25 + 208) = *(_OWORD *)((char *)a2 + 60);
    *a3 = (struct CPipeInstance *)v25;
    v61 = 0LL;
    if ( v17 )
    {
      v31 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v17 + 16LL);
      if ( v31 == CAudioMediaType::Release )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)v17 + 2) )
        {
          v40 = (void **)Block;
          *(_QWORD *)Block = &CAudioMediaType::`vftable';
          operator delete[](v40[2]);
          v40[2] = 0LL;
          operator delete(v40);
        }
        v29 = v44;
        v10 = v46;
      }
      else
      {
        v31((CAudioMediaType *)v17);
      }
    }
    if ( v10 )
      (**v10)(v10, 1LL);
    v46 = 0LL;
  }
  catch ( long *v79 )
  {
    v29 = *(_DWORD *)v79[0];
  }
  catch ( ATL::CAtlException *v80 )
  {
    v29 = *(_DWORD *)v80[0];
  }
  v32 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, v29);
    v32 = WPP_GLOBAL_Control;
  }
  if ( (v29 & 0x80000000) != 0
    && v32 != &WPP_GLOBAL_Control
    && (*((_DWORD *)v32 + 7) & 0x20000) != 0
    && *((_BYTE *)v32 + 25) >= 2u )
  {
    WPP_SF_D(v32[2], 19LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, v29);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v47);
  return v29;
}
