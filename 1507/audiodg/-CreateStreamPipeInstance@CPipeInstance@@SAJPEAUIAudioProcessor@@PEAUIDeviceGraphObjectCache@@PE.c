/*
 * XREFs of ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14002FC0C
 * Callers:
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031A20 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
 * Callees:
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003938 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14000866C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x140008790 (--0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140009C80 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B4E0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000B7A0 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000B820 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000B9A0 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x14000DBE0 (-CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140012FB0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x140019B5C (_CxxThrowException_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x14002E6EC (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14002EE28 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
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
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v7; // rdi
  BOOL v8; // r12d
  int v9; // eax
  int v10; // eax
  void *v11; // r13
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // eax
  const struct tWAVEFORMATEX *v18; // rax
  int v19; // eax
  int DummyProcessNode; // eax
  __int64 v21; // rax
  int APOProcessNode; // eax
  __int64 (__fastcall *v23)(CAudioMediaType *); // rdi
  unsigned int i; // ebx
  int v25; // eax
  int v26; // r9d
  GUID *v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdi
  int v31; // eax
  unsigned __int16 *v32; // rdi
  __int64 v33; // rdi
  int v34; // eax
  const struct tWAVEFORMATEX *v35; // rax
  int v36; // eax
  __int64 (__fastcall *v37)(CAudioMediaType *); // rdi
  void *v38; // rax
  __int64 v39; // rdi
  unsigned __int16 *v40; // rax
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // rcx
  int v43; // r14d
  int v44; // ebx
  char *v45; // rax
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v46; // rbx
  struct CPipeInstance *v47; // r15
  int v48; // eax
  __int64 v49; // rcx
  CAudioMediaType *v51; // [rsp+48h] [rbp-190h] BYREF
  _QWORD v52[2]; // [rsp+50h] [rbp-188h] BYREF
  unsigned __int16 *v53[2]; // [rsp+60h] [rbp-178h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-168h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v55; // [rsp+78h] [rbp-160h]
  struct CStreamProcessNode *v56; // [rsp+80h] [rbp-158h] BYREF
  int v57; // [rsp+88h] [rbp-150h] BYREF
  int v58; // [rsp+8Ch] [rbp-14Ch] BYREF
  int v59; // [rsp+90h] [rbp-148h] BYREF
  struct CPipeInstance *v60; // [rsp+98h] [rbp-140h]
  int v61; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-130h]
  int v63; // [rsp+B0h] [rbp-128h] BYREF
  int v64; // [rsp+B4h] [rbp-124h] BYREF
  int v65; // [rsp+B8h] [rbp-120h] BYREF
  int v66; // [rsp+BCh] [rbp-11Ch] BYREF
  int v67; // [rsp+C0h] [rbp-118h] BYREF
  int pExceptionObject; // [rsp+C4h] [rbp-114h] BYREF
  int v69; // [rsp+C8h] [rbp-110h] BYREF
  int v70; // [rsp+CCh] [rbp-10Ch] BYREF
  int v71; // [rsp+D0h] [rbp-108h] BYREF
  int v72; // [rsp+D4h] [rbp-104h] BYREF
  int v73; // [rsp+D8h] [rbp-100h] BYREF
  __int128 v74; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v75; // [rsp+F0h] [rbp-E8h]
  __int128 v76; // [rsp+F8h] [rbp-E0h]
  int v77; // [rsp+108h] [rbp-D0h]
  struct IUnknown *v78; // [rsp+110h] [rbp-C8h]
  struct IUnknown *v79; // [rsp+118h] [rbp-C0h]
  struct CPipeInstance **v80; // [rsp+120h] [rbp-B8h]
  ATL::CAtlException *v81; // [rsp+128h] [rbp-B0h] BYREF
  long *v82[2]; // [rsp+130h] [rbp-A8h] BYREF
  struct WAVEFORMATEXTENSIBLE v83; // [rsp+140h] [rbp-98h] BYREF
  struct WAVEFORMATEXTENSIBLE v84; // [rsp+168h] [rbp-70h] BYREF

  v82[1] = (long *)-2LL;
  v60 = a4;
  v7 = a3;
  v55 = a3;
  v79 = a2;
  v78 = a1;
  v80 = a6;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 10;
  v62 = 0LL;
  v56 = 0LL;
  v52[0] = 0LL;
  v53[0] = 0LL;
  pv = 0LL;
  v8 = *(_DWORD *)a3 != 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x17u,
      (__int64)&WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids);
  }
  try
  {
    v9 = CStreamProcessNode::CreateStreamProcessNode((const struct tWAVEFORMATEX **)v7, &v56);
    if ( v9 < 0 )
    {
      pExceptionObject = v9;
      throw (long *)&pExceptionObject;
    }
    v51 = v56;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v74, &v51);
    v56 = 0LL;
    v10 = CloneWaveFormat(*((const struct tWAVEFORMATEX **)v7 + 9), (struct tWAVEFORMATEX **)&pv);
    if ( v10 < 0 )
    {
      v57 = v10;
      throw (long *)&v57;
    }
    v11 = pv;
    if ( !(unsigned int)CopyToWaveFormatExtensible(&v84, (const struct tWAVEFORMATEX *)pv) )
    {
      v67 = -2005139404;
      throw (long *)&v67;
    }
    if ( v11 )
    {
      CoTaskMemFree(v11);
      v11 = 0LL;
      pv = 0LL;
    }
    v12 = *(_QWORD *)&v84.SubFormat.Data1;
    v13 = *(_QWORD *)v84.SubFormat.Data4;
    v14 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v84.SubFormat.Data1;
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v84.SubFormat.Data1 )
      v14 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)v84.SubFormat.Data4;
    if ( !v14 )
      goto LABEL_19;
    v15 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v84.SubFormat.Data1;
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v84.SubFormat.Data1 )
      v15 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)v84.SubFormat.Data4;
    if ( !v15 )
    {
LABEL_19:
      v51 = 0LL;
      v16 = *((_QWORD *)a4 + 2);
      if ( !v16 )
        ATL::AtlThrowImpl(-2147467259);
      v17 = (*(__int64 (__fastcall **)(_QWORD, CAudioMediaType **))(**(_QWORD **)(v16 + 16) + 8LL))(
              *(_QWORD *)(v16 + 16),
              &v51);
      if ( v17 < 0 )
      {
        v64 = v17;
        throw (long *)&v64;
      }
      v18 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v51 + 40LL))(v51);
      v19 = CloneWaveFormat(v18, (struct tWAVEFORMATEX **)&pv);
      if ( v19 < 0 )
      {
        v72 = v19;
        throw (long *)&v72;
      }
      v11 = pv;
      if ( !(unsigned int)CopyToWaveFormatExtensible(&v83, (const struct tWAVEFORMATEX *)pv) )
      {
        v70 = -2005139404;
        throw (long *)&v70;
      }
      if ( v11 )
      {
        CoTaskMemFree(v11);
        v11 = 0LL;
        pv = 0LL;
      }
      v7 = v55;
      if ( *((_DWORD *)v55 + 26) && v83.Format.nChannels != v84.Format.nChannels )
      {
        v83.Format.nChannels = v84.Format.nChannels;
        v83.dwChannelMask = v84.dwChannelMask;
        v83.Format.nBlockAlign = v84.Format.nChannels * (v83.Format.wBitsPerSample >> 3);
        v83.Format.nAvgBytesPerSec = v83.Format.nSamplesPerSec * v83.Format.nBlockAlign;
      }
      DummyProcessNode = CProcessNode::CreateDummyProcessNode(v8, &v83.Format, v53);
      if ( DummyProcessNode < 0 )
      {
        v58 = DummyProcessNode;
        throw (long *)&v58;
      }
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v74, v53);
      v21 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - v12;
      if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == v12 )
        v21 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - v13;
      if ( !v21 && *(_DWORD *)v7 != 1 )
      {
        *(GUID *)v53 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                           &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                           v8,
                           1,
                           0,
                           (__int128 *)v53,
                           v52);
        if ( APOProcessNode < 0 )
        {
          v59 = APOProcessNode;
          throw (long *)&v59;
        }
        v53[0] = (unsigned __int16 *)v52[0];
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v74, v53);
        v52[0] = 0LL;
      }
      if ( v51 )
      {
        v23 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v51 + 16LL);
        if ( v23 == CAudioMediaType::Release )
          CAudioMediaType::Release(v51);
        else
          v23(v51);
        v7 = v55;
      }
    }
    for ( i = 0; i < *((_DWORD *)v7 + 31); ++i )
    {
      v25 = *((_DWORD *)v7 + 26);
      if ( _bittest(&v25, i) )
      {
        v26 = 1;
        v27 = (GUID *)((char *)v7 + 108);
      }
      else
      {
        v26 = 0;
        v27 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
      *(GUID *)v53 = *v27;
      v28 = CAPOProcessNode::CreateAPOProcessNode((const struct _GUID *)v7 + i + 8, v8, 0, v26, (__int128 *)v53, v52);
      if ( v28 < 0 )
      {
        v66 = v28;
        throw (long *)&v66;
      }
      v53[0] = (unsigned __int16 *)v52[0];
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v74, v53);
      v52[0] = 0LL;
    }
    if ( *(_DWORD *)v7 )
    {
      if ( *(_DWORD *)v7 != 1 )
        goto LABEL_74;
      v51 = 0LL;
      v33 = *((_QWORD *)v60 + 2);
      if ( !v33 )
        ATL::AtlThrowImpl(-2147467259);
      v34 = (*(__int64 (__fastcall **)(_QWORD, CAudioMediaType **))(**(_QWORD **)(v33 + 16) + 8LL))(
              *(_QWORD *)(v33 + 16),
              &v51);
      if ( v34 < 0 )
      {
        v63 = v34;
        throw (long *)&v63;
      }
      v35 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v51 + 40LL))(v51);
      v36 = CProcessNode::CreateDummyProcessNode(v8, v35, v53);
      if ( v36 < 0 )
      {
        v71 = v36;
        throw (long *)&v71;
      }
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v74, v53);
    }
    else
    {
      v51 = 0LL;
      *(GUID *)v53 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v29 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
              v8,
              1,
              0,
              (__int128 *)v53,
              v52);
      if ( v29 < 0 )
      {
        v61 = v29;
        throw (long *)&v61;
      }
      v30 = *((_QWORD *)v60 + 2);
      if ( !v30 )
        ATL::AtlThrowImpl(-2147467259);
      v31 = (*(__int64 (__fastcall **)(_QWORD, CAudioMediaType **))(**(_QWORD **)(v30 + 16) + 8LL))(
              *(_QWORD *)(v30 + 16),
              &v51);
      if ( v31 < 0 )
      {
        v69 = v31;
        throw (long *)&v69;
      }
      v32 = (unsigned __int16 *)v52[0];
      (*(void (__fastcall **)(_QWORD, CAudioMediaType *))(*(_QWORD *)v52[0] + 24LL))(v52[0], v51);
      (*(void (__fastcall **)(unsigned __int16 *, CAudioMediaType *))(*(_QWORD *)v32 + 32LL))(v32, v51);
      v53[0] = v32;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v74, v53);
      v52[0] = 0LL;
    }
    if ( v51 )
    {
      v37 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v51 + 16LL);
      if ( v37 == CAudioMediaType::Release )
        CAudioMediaType::Release(v51);
      else
        v37(v51);
    }
LABEL_74:
    v38 = operator new(0x120uLL);
    if ( v38 )
      v39 = CPipeInstance::CPipeInstance((__int64)v38, 2);
    else
      v39 = 0LL;
    v62 = v39;
    if ( !v39 )
    {
      v65 = -2147024882;
      throw (long *)&v65;
    }
    v40 = (unsigned __int16 *)*((_QWORD *)v55 + 12);
    v53[0] = v40;
    v41 = -1LL;
    do
      ++v41;
    while ( v40[v41] );
    *(_QWORD *)(v39 + 184) = 0LL;
    v42 = v41 + 1;
    if ( v41 + 1 < v41 )
    {
      v44 = -2147024362;
    }
    else
    {
      *(_QWORD *)(v39 + 184) = 0LL;
      if ( is_mul_ok(v42, 2uLL) )
      {
        v45 = (char *)CoTaskMemAlloc(2 * v42);
        *(_QWORD *)(v39 + 184) = v45;
        if ( !v45 )
        {
          v44 = -2147024882;
          goto LABEL_99;
        }
        v43 = 0;
        v44 = 0;
        StringCchCopyNExW(v45, v41 + 1, v53[0], v41);
      }
      else
      {
        v43 = -2147024362;
        v44 = -2147024362;
      }
      if ( v43 >= 0 )
      {
        v46 = v55;
        *(_DWORD *)(v39 + 120) = *(_DWORD *)v55 == 2;
        *(_DWORD *)(v39 + 12) = v8;
        *(_DWORD *)(v39 + 124) = *((_DWORD *)v46 + 26) != 0;
        if ( *(struct IUnknown **)(v39 + 144) != v78 )
          ATL::AtlComPtrAssign((struct IUnknown **)(v39 + 144), v78);
        if ( *(struct IUnknown **)(v39 + 232) != v79 )
          ATL::AtlComPtrAssign((struct IUnknown **)(v39 + 232), v79);
        v47 = v60;
        *(_QWORD *)v39 = v60;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(
          (__int64 **)(v39 + 16),
          (__int64)&v74);
        *(_DWORD *)(v39 + 136) = *((_DWORD *)v47 + 33);
        v48 = 7;
        if ( !*((_DWORD *)v46 + 1) )
          v48 = 1;
        *(_DWORD *)(v39 + 128) = v48;
        *(_DWORD *)(v39 + 204) = 0;
        if ( (*((_DWORD *)v46 + 20) & 0x100000) != 0 )
        {
          *(_DWORD *)(v39 + 128) = v48 | 0xA;
          *(_DWORD *)(v39 + 192) = 1056964608;
          *(_DWORD *)(v39 + 196) = 1065353216;
        }
        if ( (*((_DWORD *)v46 + 20) & 0x8000000) != 0 )
          *(_DWORD *)(v39 + 200) = 3;
        goto LABEL_122;
      }
    }
LABEL_99:
    v73 = v44;
    throw (long *)&v73;
  }
  catch ( long *v82 )
  {
    v43 = *(_DWORD *)v82[0];
    v11 = pv;
    v39 = v62;
  }
  catch ( ATL::CAtlException *v81 )
  {
    v43 = *(_DWORD *)v81;
    v11 = pv;
    v39 = v62;
  }
LABEL_122:
  if ( v43 < 0 )
  {
    if ( v52[0] )
      (**(void (__fastcall ***)(_QWORD, __int64))v52[0])(v52[0], 1LL);
    if ( v56 )
      (**(void (__fastcall ***)(struct CStreamProcessNode *, __int64))v56)(v56, 1LL);
    if ( v39 )
      CPipeInstance::`scalar deleting destructor'((CPipeInstance *)v39);
    CleanupProcessNodeList((__int64)&v74);
    if ( v11 )
      CoTaskMemFree(v11);
  }
  else
  {
    *v80 = (struct CPipeInstance *)v39;
  }
  v49 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x18u,
      (__int64)&WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      v43);
    v49 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( v43 < 0
    && (unsigned int *)v49 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v49 + 28) & 0x20000) != 0
    && *(_BYTE *)(v49 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v49 + 16), 0x19u, (__int64)&WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids, v43);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v74);
  return (unsigned int)v43;
}
