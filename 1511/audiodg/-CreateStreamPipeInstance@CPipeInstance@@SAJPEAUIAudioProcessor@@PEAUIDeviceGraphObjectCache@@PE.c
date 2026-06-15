/*
 * XREFs of ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003034C
 * Callers:
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031560 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
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
 *     ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x140013978 (-CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140014C98 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140015C20 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x140019A9C (_CxxThrowException_0.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140026234 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14002F6A4 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::CreateStreamPipeInstance(
        struct IUnknown *a1,
        struct IUnknown *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct CPipeInstance *a4,
        struct SYSTEM_AUDIO_STREAM *a5,
        struct CPipeInstance **a6)
{
  void (__fastcall ***v7)(_QWORD, __int64); // r13
  int v8; // eax
  int v9; // eax
  void *v10; // r12
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  const struct tWAVEFORMATEX *v17; // rax
  int v18; // eax
  _DWORD *v19; // rbx
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 (__fastcall *v23)(CAudioMediaType *); // rdi
  unsigned int v24; // ebx
  __int64 v25; // r15
  int v26; // eax
  int v27; // r9d
  GUID *v28; // rax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdi
  int v32; // eax
  void (__fastcall ***v33)(_QWORD, __int64); // rdi
  CAudioMediaType *v34; // rbx
  __int64 v35; // rdi
  int v36; // eax
  const struct tWAVEFORMATEX *v37; // rax
  int v38; // eax
  __int64 (__fastcall *v39)(CAudioMediaType *); // rdi
  void *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdi
  char *v44; // r8
  unsigned __int64 v45; // r9
  int v46; // eax
  int v47; // r14d
  struct CPipeInstance *v48; // rbx
  int v49; // eax
  _UNKNOWN **v50; // rcx
  int v52; // [rsp+20h] [rbp-1A8h]
  BOOL v53; // [rsp+30h] [rbp-198h]
  void (__fastcall ***v54)(_QWORD, __int64); // [rsp+38h] [rbp-190h] BYREF
  CAudioMediaType *v55; // [rsp+40h] [rbp-188h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-180h] BYREF
  GUID v57; // [rsp+50h] [rbp-178h] BYREF
  CAudioMediaType *v58; // [rsp+60h] [rbp-168h] BYREF
  struct CPipeInstance *v59; // [rsp+68h] [rbp-160h]
  struct CStreamProcessNode *v60; // [rsp+70h] [rbp-158h] BYREF
  int v61; // [rsp+78h] [rbp-150h] BYREF
  int v62; // [rsp+7Ch] [rbp-14Ch] BYREF
  int v63; // [rsp+80h] [rbp-148h] BYREF
  __int64 v64; // [rsp+88h] [rbp-140h]
  int v65; // [rsp+90h] [rbp-138h] BYREF
  int v66; // [rsp+94h] [rbp-134h] BYREF
  int pExceptionObject; // [rsp+98h] [rbp-130h] BYREF
  int v68; // [rsp+9Ch] [rbp-12Ch] BYREF
  int v69; // [rsp+A0h] [rbp-128h] BYREF
  int v70; // [rsp+A4h] [rbp-124h] BYREF
  int v71; // [rsp+A8h] [rbp-120h] BYREF
  int v72; // [rsp+ACh] [rbp-11Ch] BYREF
  int v73; // [rsp+B0h] [rbp-118h] BYREF
  int v74; // [rsp+B4h] [rbp-114h] BYREF
  int v75; // [rsp+B8h] [rbp-110h] BYREF
  int v76; // [rsp+BCh] [rbp-10Ch] BYREF
  GUID v77; // [rsp+C0h] [rbp-108h] BYREF
  __int128 v78; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v79; // [rsp+E0h] [rbp-E8h]
  __int128 v80; // [rsp+E8h] [rbp-E0h]
  int v81; // [rsp+F8h] [rbp-D0h]
  struct IUnknown *v82; // [rsp+100h] [rbp-C8h]
  struct CPipeInstance **v83; // [rsp+108h] [rbp-C0h]
  struct IUnknown *v84; // [rsp+110h] [rbp-B8h]
  long *v85[2]; // [rsp+118h] [rbp-B0h] BYREF
  ATL::CAtlException *v86; // [rsp+128h] [rbp-A0h] BYREF
  struct WAVEFORMATEXTENSIBLE v87; // [rsp+130h] [rbp-98h] BYREF
  struct WAVEFORMATEXTENSIBLE v88; // [rsp+158h] [rbp-70h] BYREF

  v85[1] = (long *)-2LL;
  v59 = a4;
  *(_QWORD *)&v57.Data1 = a3;
  v82 = a2;
  v84 = a1;
  v83 = a6;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 10;
  v64 = 0LL;
  v60 = 0LL;
  v7 = 0LL;
  v54 = 0LL;
  *(_QWORD *)&v77.Data1 = 0LL;
  pv = 0LL;
  LODWORD(v58) = *((_DWORD *)a3 + 3) != 1;
  v53 = *(_DWORD *)a3 != 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, (__int64)&WPP_b52afc5823799b3c24512fb75c28f887_Traceguids);
  }
  try
  {
    v8 = CStreamProcessNode::CreateStreamProcessNode((const struct tWAVEFORMATEX **)a3, &v60);
    if ( v8 < 0 )
    {
      pExceptionObject = v8;
      throw (long *)&pExceptionObject;
    }
    v55 = v60;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v78, (__int64 *)&v55);
    v60 = 0LL;
    v9 = CloneWaveFormat(*((const struct tWAVEFORMATEX **)a3 + 10), (struct tWAVEFORMATEX **)&pv);
    if ( v9 < 0 )
    {
      v73 = v9;
      throw (long *)&v73;
    }
    v10 = pv;
    if ( !(unsigned int)CopyToWaveFormatExtensible(&v88, (const struct tWAVEFORMATEX *)pv) )
    {
      v71 = -2005139404;
      throw (long *)&v71;
    }
    if ( v10 )
    {
      CoTaskMemFree(v10);
      v10 = 0LL;
      pv = 0LL;
    }
    v11 = *(_QWORD *)&v88.SubFormat.Data1;
    v12 = *(_QWORD *)v88.SubFormat.Data4;
    v13 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v88.SubFormat.Data1;
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v88.SubFormat.Data1 )
      v13 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)v88.SubFormat.Data4;
    if ( !v13 )
      goto LABEL_19;
    v14 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v88.SubFormat.Data1;
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v88.SubFormat.Data1 )
      v14 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)v88.SubFormat.Data4;
    if ( !v14 )
    {
LABEL_19:
      v55 = 0LL;
      v15 = *((_QWORD *)v59 + 2);
      if ( !v15 )
        ATL::AtlThrowImpl(-2147467259);
      v16 = (*(__int64 (__fastcall **)(_QWORD, CAudioMediaType **))(**(_QWORD **)(v15 + 16) + 8LL))(
              *(_QWORD *)(v15 + 16),
              &v55);
      if ( v16 < 0 )
      {
        v66 = v16;
        throw (long *)&v66;
      }
      v17 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v55 + 40LL))(v55);
      v18 = CloneWaveFormat(v17, (struct tWAVEFORMATEX **)&pv);
      if ( v18 < 0 )
      {
        v68 = v18;
        throw (long *)&v68;
      }
      v10 = pv;
      if ( !(unsigned int)CopyToWaveFormatExtensible(&v87, (const struct tWAVEFORMATEX *)pv) )
      {
        v70 = -2005139404;
        throw (long *)&v70;
      }
      if ( v10 )
      {
        CoTaskMemFree(v10);
        v10 = 0LL;
        pv = 0LL;
      }
      v19 = *(_DWORD **)&v57.Data1;
      if ( *(_DWORD *)(*(_QWORD *)&v57.Data1 + 112LL) && v87.Format.nChannels != v88.Format.nChannels )
      {
        v87.Format.nChannels = v88.Format.nChannels;
        v87.dwChannelMask = v88.dwChannelMask;
        v87.Format.nBlockAlign = v88.Format.nChannels * (v87.Format.wBitsPerSample >> 3);
        v87.Format.nAvgBytesPerSec = v87.Format.nSamplesPerSec * v87.Format.nBlockAlign;
      }
      v20 = CProcessNode::CreateDummyProcessNode(v53, &v87.Format, &v77);
      if ( v20 < 0 )
      {
        v62 = v20;
        throw (long *)&v62;
      }
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v78, (__int64 *)&v77);
      if ( (_DWORD)v58 )
      {
        v21 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - v11;
        if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == v11 )
          v21 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - v12;
        if ( !v21 && *v19 != 1 )
        {
          v77 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v22 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                  v53,
                  1,
                  0,
                  (__int128 *)&v77,
                  &v54);
          if ( v22 < 0 )
          {
            v63 = v22;
            throw (long *)&v63;
          }
          *(_QWORD *)&v77.Data1 = v54;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v78, (__int64 *)&v77);
          v7 = 0LL;
          v54 = 0LL;
        }
      }
      if ( v55 )
      {
        v23 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v55 + 16LL);
        if ( v23 == CAudioMediaType::Release )
          CAudioMediaType::Release(v55);
        else
          v23(v55);
      }
    }
    v24 = 0;
    v25 = *(_QWORD *)&v57.Data1;
    while ( v24 < *(_DWORD *)(v25 + 132) )
    {
      v26 = *(_DWORD *)(v25 + 112);
      if ( _bittest(&v26, v24) )
      {
        v27 = 1;
        v28 = (GUID *)(v25 + 116);
      }
      else
      {
        v27 = 0;
        v28 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
      v57 = *v28;
      v29 = CAPOProcessNode::CreateAPOProcessNode(
              (const struct _GUID *)(16LL * v24 + v25 + 136),
              v53,
              0,
              v27,
              (__int128 *)&v57,
              &v54);
      if ( v29 < 0 )
      {
        v72 = v29;
        throw (long *)&v72;
      }
      *(_QWORD *)&v57.Data1 = v54;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v78, (__int64 *)&v57);
      v7 = 0LL;
      v54 = 0LL;
      ++v24;
    }
    if ( *(_DWORD *)v25 )
    {
      if ( *(_DWORD *)v25 != 1 )
      {
LABEL_74:
        v40 = operator new(0x120uLL);
        if ( v40 )
          v43 = CPipeInstance::CPipeInstance((__int64)v40, 2);
        else
          v43 = 0LL;
        v64 = v43;
        if ( !v43 )
        {
          v69 = -2147024882;
          throw (long *)&v69;
        }
        v44 = *(char **)(v25 + 104);
        v45 = -1LL;
        do
          ++v45;
        while ( *(_WORD *)&v44[2 * v45] );
        v46 = _AllocStringWorker<CTCoAllocPolicy>(v42, v41, v44, v45, v52, (char **)(v43 + 184));
        v47 = v46;
        if ( v46 < 0 )
        {
          v61 = v46;
          throw (long *)&v61;
        }
        *(_DWORD *)(v43 + 120) = *(_DWORD *)v25 == 2;
        *(_DWORD *)(v43 + 12) = v53;
        *(_DWORD *)(v43 + 128) = *(_DWORD *)(v25 + 112) != 0;
        if ( *(struct IUnknown **)(v43 + 144) != v84 )
          ATL::AtlComPtrAssign((struct IUnknown **)(v43 + 144), v84);
        if ( *(struct IUnknown **)(v43 + 232) != v82 )
          ATL::AtlComPtrAssign((struct IUnknown **)(v43 + 232), v82);
        v48 = v59;
        *(_QWORD *)v43 = v59;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(
          (__int64 **)(v43 + 16),
          (__int64)&v78);
        *(_DWORD *)(v43 + 140) = *((_DWORD *)v48 + 34);
        v49 = 7;
        if ( !*(_DWORD *)(v25 + 4) )
          v49 = 1;
        *(_DWORD *)(v43 + 132) = v49;
        *(_DWORD *)(v43 + 204) = 0;
        if ( (*(_DWORD *)(v25 + 88) & 0x100000) != 0 )
        {
          *(_DWORD *)(v43 + 132) = v49 | 0xA;
          *(_DWORD *)(v43 + 192) = 1056964608;
          *(_DWORD *)(v43 + 196) = 1065353216;
        }
        if ( (*(_DWORD *)(v25 + 88) & 0x8000000) != 0 )
          *(_DWORD *)(v43 + 200) = 3;
        goto LABEL_115;
      }
      v55 = 0LL;
      v35 = *((_QWORD *)v59 + 2);
      if ( !v35 )
        ATL::AtlThrowImpl(-2147467259);
      v36 = (*(__int64 (__fastcall **)(_QWORD, CAudioMediaType **))(**(_QWORD **)(v35 + 16) + 8LL))(
              *(_QWORD *)(v35 + 16),
              &v55);
      if ( v36 < 0 )
      {
        v76 = v36;
        throw (long *)&v76;
      }
      v37 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v55 + 40LL))(v55);
      v38 = CProcessNode::CreateDummyProcessNode(v53, v37, &v57);
      if ( v38 < 0 )
      {
        v75 = v38;
        throw (long *)&v75;
      }
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v78, (__int64 *)&v57);
      v34 = v55;
    }
    else
    {
      v58 = 0LL;
      v57 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v30 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
              v53,
              1,
              0,
              (__int128 *)&v57,
              &v54);
      if ( v30 < 0 )
      {
        v65 = v30;
        throw (long *)&v65;
      }
      v31 = *((_QWORD *)v59 + 2);
      if ( !v31 )
        ATL::AtlThrowImpl(-2147467259);
      v32 = (*(__int64 (__fastcall **)(_QWORD, CAudioMediaType **))(**(_QWORD **)(v31 + 16) + 8LL))(
              *(_QWORD *)(v31 + 16),
              &v58);
      if ( v32 < 0 )
      {
        v74 = v32;
        throw (long *)&v74;
      }
      v33 = v54;
      (*v54)[3](v54, (__int64)v58);
      (*v33)[4](v33, (__int64)v58);
      *(_QWORD *)&v57.Data1 = v33;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v78, (__int64 *)&v57);
      v7 = 0LL;
      v54 = 0LL;
      v34 = v58;
    }
    if ( v34 )
    {
      v39 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v34 + 16LL);
      if ( v39 == CAudioMediaType::Release )
        CAudioMediaType::Release(v34);
      else
        v39(v34);
    }
    goto LABEL_74;
  }
  catch ( long *v85 )
  {
    v47 = *(_DWORD *)v85[0];
    v10 = pv;
    v7 = v54;
    v43 = v64;
  }
  catch ( ATL::CAtlException *v86 )
  {
    v47 = *(_DWORD *)v86;
    v10 = pv;
    v7 = v54;
    v43 = v64;
  }
LABEL_115:
  if ( v47 < 0 )
  {
    if ( v7 )
      (**v7)(v7, 1LL);
    if ( v60 )
      (**(void (__fastcall ***)(struct CStreamProcessNode *, __int64))v60)(v60, 1LL);
    if ( v43 )
      CPipeInstance::`scalar deleting destructor'((LPVOID *)v43);
    CleanupProcessNodeList((__int64)&v78);
    if ( v10 )
      CoTaskMemFree(v10);
  }
  else
  {
    *v83 = (struct CPipeInstance *)v43;
  }
  v50 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, (__int64)&WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, v47);
    v50 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v47 < 0 && v50 != &WPP_GLOBAL_Control && (*((_DWORD *)v50 + 7) & 0x20000) != 0 && *((_BYTE *)v50 + 25) >= 2u )
    WPP_SF_D((__int64)v50[2], 0x19u, (__int64)&WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, v47);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v78);
  return (unsigned int)v47;
}
