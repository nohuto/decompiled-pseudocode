/*
 * XREFs of ?CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000A820
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003938 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x140008790 (--0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x140008A00 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140009400 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x1400094C0 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140009C80 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z.c)
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x14000A070 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B4E0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000B580 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000B7A0 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000B820 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000B9A0 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x14000DBE0 (-CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140012F30 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140012FB0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x1400189E0 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     _wcsicmp_0 @ 0x14001907A (_wcsicmp_0.c)
 *     _CxxThrowException_0 @ 0x140019B5C (_CxxThrowException_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF__guid_ @ 0x140030B28 (WPP_SF__guid_.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CPipeInstance::CreateStreamPipeInstanceNew(
        struct IUnknown *a1,
        const struct tWAVEFORMATEX **a2,
        struct CPipeInstance *a3,
        struct tWAVEFORMATEX *a4,
        struct SYSTEM_AUDIO_STREAM *a5,
        struct CPipeInstance **a6)
{
  const struct tWAVEFORMATEX **v7; // r15
  unsigned int v8; // r14d
  int v9; // eax
  __int64 v10; // rdi
  struct ATL::CAtlPlex *v11; // rcx
  struct ATL::CAtlPlex *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdi
  struct ATL::CAtlPlex *v17; // rcx
  struct ATL::CAtlPlex *v18; // rdx
  unsigned int v19; // edx
  struct ATL::CAtlPlex *v20; // r8
  int v21; // eax
  GUID *v22; // rax
  GUID v23; // xmm6
  const struct _GUID *v24; // r12
  struct ATL::CAtlPlex *v25; // r13
  __int64 v26; // rcx
  int Common; // esi
  int v28; // r15d
  LSTATUS v29; // eax
  DWORD v30; // r14d
  HKEY v31; // rdi
  LSTATUS v32; // eax
  LSTATUS v33; // eax
  LSTATUS v34; // eax
  CLSID *v35; // rcx
  struct APO_REG_PROPERTIES *v36; // rax
  __int64 v37; // rdx
  struct ATL::CAtlPlex *v38; // rax
  char *v39; // rax
  __int128 v40; // xmm0
  __int64 v41; // rdi
  struct ATL::CAtlPlex *v42; // rax
  struct ATL::CAtlPlex *v43; // rcx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  CAPOProcessNode *v47; // rdi
  void (__fastcall *v48)(CAPOProcessNode *, struct IAudioMediaType *); // r14
  struct IAudioMediaType *v49; // rsi
  void (__fastcall *v50)(CAPOProcessNode *, struct IAudioMediaType *); // r14
  __int64 v51; // r14
  struct ATL::CAtlPlex *v52; // rax
  struct ATL::CAtlPlex *v53; // rcx
  const WAVEFORMATEX *(__stdcall *GetAudioFormat)(IAudioMediaType *); // rdi
  const struct tWAVEFORMATEX *AudioFormat; // rax
  int v56; // eax
  __int64 v57; // rdi
  struct ATL::CAtlPlex *v58; // rcx
  struct ATL::CAtlPlex *v59; // rdx
  void *v60; // rax
  HKEY v61; // r14
  const unsigned __int16 *v62; // r15
  unsigned __int64 v63; // rdi
  unsigned __int64 v64; // r13
  unsigned __int16 *v65; // rax
  int v66; // r12d
  int v67; // eax
  const struct tWAVEFORMATEX **v68; // rdi
  struct CPipeInstance *v69; // r15
  __int64 v70; // rdx
  unsigned int nBlockAlign; // ecx
  DWORD nAvgBytesPerSec; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  ULONG (__stdcall *Release)(IAudioMediaType *); // rdi
  struct ATL::CAtlPlex *v78; // rax
  __int64 v79; // r8
  struct ATL::CAtlPlex *v80; // r9
  __int64 v81; // rax
  int v82; // eax
  __int64 v83; // rax
  int v84; // eax
  __int64 v85; // [rsp+0h] [rbp-F18h] BYREF
  PHKEY phkResult; // [rsp+20h] [rbp-EF8h]
  LPWSTR lpClass; // [rsp+28h] [rbp-EF0h]
  LPDWORD lpcchClass; // [rsp+30h] [rbp-EE8h]
  int v89; // [rsp+40h] [rbp-ED8h]
  unsigned int v90; // [rsp+44h] [rbp-ED4h]
  int v91; // [rsp+48h] [rbp-ED0h]
  struct ATL::CAtlPlex *v92; // [rsp+50h] [rbp-EC8h]
  int v93; // [rsp+58h] [rbp-EC0h]
  unsigned int v94; // [rsp+5Ch] [rbp-EBCh]
  __int64 v95; // [rsp+60h] [rbp-EB8h] BYREF
  int v96; // [rsp+68h] [rbp-EB0h]
  int v97; // [rsp+6Ch] [rbp-EACh]
  __int128 v98; // [rsp+70h] [rbp-EA8h] BYREF
  __int64 v99; // [rsp+80h] [rbp-E98h]
  struct ATL::CAtlPlex *v100[2]; // [rsp+88h] [rbp-E90h] BYREF
  unsigned __int64 v101; // [rsp+98h] [rbp-E80h]
  DWORD cchName; // [rsp+A0h] [rbp-E78h] BYREF
  struct IAudioMediaType *v103; // [rsp+A8h] [rbp-E70h] BYREF
  struct ATL::CAtlPlex *v104; // [rsp+B0h] [rbp-E68h] BYREF
  int v105; // [rsp+B8h] [rbp-E60h]
  HKEY hKey; // [rsp+C0h] [rbp-E58h] BYREF
  struct ATL::CAtlPlex *v107; // [rsp+C8h] [rbp-E50h] BYREF
  struct ATL::CAtlPlex *v108; // [rsp+D0h] [rbp-E48h] BYREF
  LPOLESTR lpsz; // [rsp+D8h] [rbp-E40h] BYREF
  __int64 v110; // [rsp+E0h] [rbp-E38h] BYREF
  CAPOProcessNode *v111; // [rsp+E8h] [rbp-E30h] BYREF
  struct ATL::CAtlPlex *v112; // [rsp+F0h] [rbp-E28h] BYREF
  struct CStreamProcessNode *v113; // [rsp+F8h] [rbp-E20h] BYREF
  int v114; // [rsp+100h] [rbp-E18h] BYREF
  DWORD i; // [rsp+104h] [rbp-E14h]
  int v116; // [rsp+108h] [rbp-E10h] BYREF
  int v117; // [rsp+10Ch] [rbp-E0Ch] BYREF
  int v118; // [rsp+110h] [rbp-E08h] BYREF
  HKEY v119; // [rsp+118h] [rbp-E00h] BYREF
  int v120; // [rsp+120h] [rbp-DF8h] BYREF
  int v121; // [rsp+124h] [rbp-DF4h] BYREF
  int v122; // [rsp+128h] [rbp-DF0h] BYREF
  int v123; // [rsp+12Ch] [rbp-DECh] BYREF
  int v124; // [rsp+130h] [rbp-DE8h] BYREF
  int v125; // [rsp+134h] [rbp-DE4h] BYREF
  int pExceptionObject; // [rsp+138h] [rbp-DE0h] BYREF
  int v127; // [rsp+13Ch] [rbp-DDCh]
  int v128; // [rsp+140h] [rbp-DD8h] BYREF
  struct _FILETIME ftLastWriteTime; // [rsp+148h] [rbp-DD0h] BYREF
  struct ATL::CAtlPlex *v130; // [rsp+150h] [rbp-DC8h]
  struct ATL::CAtlPlex *v131; // [rsp+158h] [rbp-DC0h]
  struct CPipeInstance *v132; // [rsp+160h] [rbp-DB8h]
  struct tWAVEFORMATEX *v133; // [rsp+168h] [rbp-DB0h]
  const struct tWAVEFORMATEX **v134; // [rsp+170h] [rbp-DA8h]
  struct IUnknown *v135; // [rsp+178h] [rbp-DA0h]
  DWORD Type; // [rsp+180h] [rbp-D98h] BYREF
  struct CPipeInstance **v137; // [rsp+188h] [rbp-D90h]
  ATL::CAtlException *v138; // [rsp+190h] [rbp-D88h] BYREF
  unsigned __int16 *v139[2]; // [rsp+1A0h] [rbp-D78h] BYREF
  __int64 v140; // [rsp+1B0h] [rbp-D68h]
  long *v141; // [rsp+1B8h] [rbp-D60h] BYREF
  __int128 v142; // [rsp+1C0h] [rbp-D58h] BYREF
  int v143; // [rsp+1D0h] [rbp-D48h]
  int v144; // [rsp+5E0h] [rbp-938h]
  int v145; // [rsp+5E8h] [rbp-930h]
  struct WAVEFORMATEXTENSIBLE v146; // [rsp+610h] [rbp-908h] BYREF
  WAVEFORMATEXTENSIBLE v147; // [rsp+638h] [rbp-8E0h] BYREF
  GUID pclsid; // [rsp+660h] [rbp-8B8h] BYREF
  struct APO_REG_PROPERTIES v149; // [rsp+670h] [rbp-8A8h] BYREF
  WCHAR Name[512]; // [rsp+AC0h] [rbp-458h] BYREF

  v140 = -2LL;
  v133 = a4;
  v132 = a3;
  v7 = a2;
  v134 = a2;
  v135 = a1;
  v137 = a6;
  if ( *(_DWORD *)a2 )
  {
    v8 = 1;
    v94 = 1;
  }
  else
  {
    v8 = 0;
    v94 = 0;
  }
  v98 = 0LL;
  v99 = 0LL;
  *(_OWORD *)v100 = 0LL;
  LODWORD(v101) = 10;
  *a6 = 0LL;
  try
  {
    v113 = 0LL;
    v9 = CStreamProcessNode::CreateStreamProcessNode(a2, &v113);
    v89 = v9;
    if ( v9 < 0 )
    {
      pExceptionObject = v9;
      throw (long *)&pExceptionObject;
    }
    v10 = *((_QWORD *)&v98 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v98);
    v11 = v100[1];
    v104 = v100[1];
    v12 = *(struct ATL::CAtlPlex **)v100[1];
    v112 = v100[1];
    if ( v100[1] )
      *((_QWORD *)v100[1] + 2) = v113;
    v100[1] = v12;
    *((_QWORD *)v11 + 1) = v10;
    *(_QWORD *)v11 = 0LL;
    ++v99;
    if ( *((_QWORD *)&v98 + 1) )
      **((_QWORD **)&v98 + 1) = v11;
    else
      *(_QWORD *)&v98 = v11;
    *((_QWORD *)&v98 + 1) = v11;
    v113 = 0LL;
    if ( !(unsigned int)CopyToWaveFormatExtensible(&v147, v7[9]) )
    {
      v118 = -2005139404;
      throw (long *)&v118;
    }
    v13 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v147.SubFormat.Data1;
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v147.SubFormat.Data1 )
      v13 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)v147.SubFormat.Data4;
    if ( !v13 )
      goto LABEL_16;
    v14 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v147.SubFormat.Data1;
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v147.SubFormat.Data1 )
      v14 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)v147.SubFormat.Data4;
    if ( !v14 )
    {
LABEL_16:
      if ( !(unsigned int)CopyToWaveFormatExtensible(&v146, a4) )
      {
        v124 = -2005139404;
        throw (long *)&v124;
      }
      if ( *((_DWORD *)v7 + 26) && v146.Format.nChannels != v147.Format.nChannels )
      {
        v146.Format.nChannels = v147.Format.nChannels;
        v146.dwChannelMask = v147.dwChannelMask;
        v146.Format.nBlockAlign = v147.Format.nChannels * (v146.Format.wBitsPerSample >> 3);
        v146.Format.nAvgBytesPerSec = v146.Format.nSamplesPerSec * v146.Format.nBlockAlign;
      }
      v95 = 0LL;
      v15 = CProcessNode::CreateDummyProcessNode(v8, &v146, &v95);
      v89 = v15;
      if ( v15 < 0 )
      {
        v122 = v15;
        throw (long *)&v122;
      }
      v16 = *((_QWORD *)&v98 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v98);
      v17 = v100[1];
      v104 = v100[1];
      v18 = *(struct ATL::CAtlPlex **)v100[1];
      v112 = v100[1];
      if ( v100[1] )
        *((_QWORD *)v100[1] + 2) = v95;
      v100[1] = v18;
      *((_QWORD *)v17 + 1) = v16;
      *(_QWORD *)v17 = 0LL;
      ++v99;
      if ( *((_QWORD *)&v98 + 1) )
        **((_QWORD **)&v98 + 1) = v17;
      else
        *(_QWORD *)&v98 = v17;
      *((_QWORD *)&v98 + 1) = v17;
      v95 = 0LL;
    }
    v19 = 0;
    v90 = 0;
    while ( v19 < *((_DWORD *)v7 + 31) )
    {
      v20 = 0LL;
      v92 = 0LL;
      v21 = *((_DWORD *)v7 + 26);
      if ( _bittest(&v21, v19) )
      {
        LODWORD(v95) = 1;
        v22 = (GUID *)((char *)v7 + 108);
      }
      else
      {
        LODWORD(v95) = 0;
        v22 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
      v23 = *v22;
      v24 = (const struct _GUID *)&v7[2 * v19 + 16];
      v25 = 0LL;
      v131 = 0LL;
      v26 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF__guid_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          18LL,
          &WPP_a99c0ea68331a2f1b88ee9cd60aee7de_Traceguids,
          v24);
        v26 = *(_QWORD *)&WPP_GLOBAL_Control;
        v19 = v90;
        v20 = v92;
      }
      Common = -2005139397;
      v97 = -2005139397;
      v28 = 0;
      v105 = 0;
      if ( &v85 == (__int64 *)-448LL )
      {
        v97 = -2147467261;
        Common = -2147467261;
        v96 = -2147467261;
        goto LABEL_66;
      }
      v29 = RegOpenKeyExW(HKEY_CLASSES_ROOT, L"AudioEngine\\AudioProcessingObjects", 0, 0x20019u, &hKey);
      if ( v29 )
      {
        if ( v29 > 0 )
          Common = (unsigned __int16)v29 | 0x80070000;
        else
          Common = v29;
        v97 = Common;
      }
      else
      {
        v30 = 0;
        for ( i = 0; !v28; i = v30 )
        {
          v31 = hKey;
          v91 = 0;
          lpsz = 0LL;
          v28 = 0;
          v105 = 0;
          cchName = 512;
          v32 = RegEnumKeyExW(hKey, v30, Name, &cchName, 0LL, 0LL, 0LL, &ftLastWriteTime);
          if ( !v32 || v32 == 234 )
          {
            Common = StringFromCLSID(v24, &lpsz);
            v91 = Common;
            if ( Common >= 0 && !wcsicmp_0(Name, lpsz) )
            {
              v33 = RegOpenKeyExW(v31, Name, 0, 0x20019u, &v119);
              Common = v33;
              if ( v33 )
              {
                if ( v33 > 0 )
                  Common = (unsigned __int16)v33 | 0x80070000;
                v91 = Common;
              }
              else
              {
                Common = InnerGetCommon(v119, v24, &v149);
                v91 = Common;
                if ( Common >= 0 )
                {
                  v149.u32NumAPOInterfaces = 1;
                  cchName = 1024;
                  v34 = RegQueryValueExW(v119, L"APOInterface0", 0LL, &Type, (LPBYTE)Name, &cchName);
                  Common = v34;
                  if ( v34 )
                  {
                    if ( v34 > 0 )
                      Common = (unsigned __int16)v34 | 0x80070000;
                    v91 = Common;
                  }
                  else
                  {
                    Common = CLSIDFromString(Name, &pclsid);
                    v91 = Common;
                    if ( Common >= 0 )
                    {
                      v149.iidAPOInterfaceList[0] = pclsid;
                      v35 = (CLSID *)&v142;
                      v36 = &v149;
                      v37 = 8LL;
                      do
                      {
                        *v35 = v36->clsid;
                        v35[1] = *(CLSID *)&v36->Flags;
                        v35[2] = *(CLSID *)&v36->szFriendlyName[6];
                        v35[3] = *(CLSID *)&v36->szFriendlyName[14];
                        v35[4] = *(CLSID *)&v36->szFriendlyName[22];
                        v35[5] = *(CLSID *)&v36->szFriendlyName[30];
                        v35[6] = *(CLSID *)&v36->szFriendlyName[38];
                        v35 += 8;
                        v35[-1] = *(CLSID *)&v36->szFriendlyName[46];
                        v36 = (struct APO_REG_PROPERTIES *)((char *)v36 + 128);
                        --v37;
                      }
                      while ( v37 );
                      *v35 = v36->clsid;
                      v35[1] = *(CLSID *)&v36->Flags;
                      v35[2] = *(CLSID *)&v36->szFriendlyName[6];
                      v35[3] = *(CLSID *)&v36->szFriendlyName[14];
                      v35[4].Data1 = *(_DWORD *)&v36->szFriendlyName[22];
                      v28 = 1;
                      v105 = 1;
                    }
                  }
                }
                RegCloseKey(v119);
              }
            }
          }
          else
          {
            Common = -2005139398;
            v91 = -2005139398;
          }
          if ( lpsz )
          {
            CoTaskMemFree(lpsz);
            lpsz = 0LL;
          }
          v97 = Common;
          if ( Common < 0 )
            break;
          ++v30;
        }
        RegCloseKey(hKey);
        v8 = v94;
      }
      if ( Common >= 0 && !v28 )
      {
        Common = -2005139430;
        v97 = -2005139430;
      }
      v96 = Common;
      if ( Common < 0 )
      {
        v26 = *(_QWORD *)&WPP_GLOBAL_Control;
        v19 = v90;
        v20 = v92;
LABEL_66:
        if ( Common >= 0 )
          goto LABEL_67;
        goto LABEL_155;
      }
      if ( v145 != 1 || v144 != 1 )
      {
        Common = -2005139401;
        v96 = -2005139401;
        v20 = v92;
        goto LABEL_65;
      }
      v38 = (struct ATL::CAtlPlex *)operator new(0x38uLL);
      v25 = v38;
      v104 = v38;
      if ( v38 )
      {
        *(_QWORD *)v38 = &CProcessNode::`vftable';
        *((_QWORD *)v38 + 1) = 0LL;
        *((_QWORD *)v38 + 2) = 0LL;
        *((_DWORD *)v38 + 6) = v8;
        *((_QWORD *)v38 + 4) = 0LL;
        *((_DWORD *)v38 + 10) = 2;
        *(_QWORD *)v38 = &CAPOProcessNode::`vftable';
        *((_DWORD *)v38 + 12) = v143;
      }
      else
      {
        v25 = 0LL;
      }
      v131 = v25;
      if ( v25 )
      {
        v39 = (char *)operator new(0x30uLL);
        v112 = (struct ATL::CAtlPlex *)v39;
        if ( v39 )
        {
          v40 = v142;
          *((_QWORD *)v39 + 5) = 0LL;
          *(_DWORD *)v39 = 0;
          *((_DWORD *)v39 + 1) = v95;
          *(_OWORD *)(v39 + 8) = v40;
          *(GUID *)(v39 + 24) = v23;
        }
        else
        {
          v39 = 0LL;
        }
        if ( v39 )
        {
          v20 = v25;
          v92 = v25;
          *((_QWORD *)v25 + 4) = v39;
LABEL_65:
          v19 = v90;
          v26 = *(_QWORD *)&WPP_GLOBAL_Control;
          goto LABEL_66;
        }
      }
      Common = -2147024882;
      v96 = -2147024882;
      v26 = *(_QWORD *)&WPP_GLOBAL_Control;
      v19 = v90;
      v20 = v92;
LABEL_155:
      if ( v25 )
      {
        (**(void (__fastcall ***)(struct ATL::CAtlPlex *, __int64, struct ATL::CAtlPlex *, unsigned int *))v25)(
          v25,
          1LL,
          v20,
          &WPP_GLOBAL_Control);
        v26 = *(_QWORD *)&WPP_GLOBAL_Control;
        v19 = v90;
        v20 = v92;
      }
      v131 = 0LL;
      if ( (unsigned int *)v26 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v26 + 28) & 0x20000) != 0
        && *(_BYTE *)(v26 + 25) >= 2u )
      {
        WPP_SF_D(*(_QWORD *)(v26 + 16), 19LL, &WPP_a99c0ea68331a2f1b88ee9cd60aee7de_Traceguids, (unsigned int)Common);
        v19 = v90;
        v20 = v92;
      }
LABEL_67:
      v89 = Common;
      if ( Common < 0 )
      {
        v121 = Common;
        throw (long *)&v121;
      }
      v41 = *((_QWORD *)&v98 + 1);
      v42 = v100[1];
      if ( !v100[1] )
      {
        v78 = ATL::CAtlPlex::Create(v100, (unsigned int)v101, 0x18uLL);
        if ( !v78 )
          ATL::AtlThrowImpl(-2147024882);
        v79 = (unsigned int)(v101 - 1);
        v80 = (struct ATL::CAtlPlex *)((char *)v78 + 24 * v79 + 8);
        v130 = v80;
        v127 = v101 - 1;
        v42 = v100[1];
        while ( (int)v79 >= 0 )
        {
          *(_QWORD *)v80 = v42;
          v42 = v80;
          v100[1] = v80;
          v80 = (struct ATL::CAtlPlex *)((char *)v80 - 24);
          v130 = v80;
          LODWORD(v79) = v79 - 1;
          v127 = v79;
        }
        v19 = v90;
        v20 = v92;
      }
      v107 = v42;
      v43 = *(struct ATL::CAtlPlex **)v42;
      v108 = v42;
      if ( v42 )
        *((_QWORD *)v42 + 2) = v20;
      v100[1] = v43;
      *((_QWORD *)v42 + 1) = v41;
      *(_QWORD *)v42 = 0LL;
      ++v99;
      if ( *((_QWORD *)&v98 + 1) )
        **((_QWORD **)&v98 + 1) = v42;
      else
        *(_QWORD *)&v98 = v42;
      *((_QWORD *)&v98 + 1) = v42;
      v92 = 0LL;
      v90 = ++v19;
      v7 = v134;
    }
    v103 = 0LL;
    v44 = CAudioMediaType::Create(v133, (unsigned int)v133->cbSize + 18, &v103, 0.0);
    v89 = v44;
    if ( v44 < 0 )
    {
      v120 = v44;
      throw (long *)&v120;
    }
    v45 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      if ( v45 == 1 )
      {
        v108 = 0LL;
        v49 = v103;
        v81 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v103->lpVtbl->GetAudioFormat)(v103);
        v82 = CProcessNode::CreateDummyProcessNode(v8, v81, &v108);
        v89 = v82;
        if ( v82 < 0 )
        {
          v128 = v82;
          throw (long *)&v128;
        }
        v112 = v108;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v98, &v112);
        v108 = 0LL;
      }
      else if ( v45 == 2 )
      {
        v107 = 0LL;
        v49 = v103;
        v83 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v103->lpVtbl->GetAudioFormat)(v103);
        v84 = CProcessNode::CreateDummyProcessNode(v8, v83, &v107);
        v89 = v84;
        if ( v84 < 0 )
        {
          v117 = v84;
          throw (long *)&v117;
        }
        v104 = v107;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v98, &v104);
        v107 = 0LL;
      }
      else
      {
        v49 = v103;
      }
    }
    else
    {
      v111 = 0LL;
      *(GUID *)v139 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v46 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
              v8,
              1,
              0,
              (__int128 *)v139,
              &v111);
      v89 = v46;
      if ( v46 < 0 )
      {
        v123 = v46;
        throw (long *)&v123;
      }
      v47 = v111;
      v48 = *(void (__fastcall **)(CAPOProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v111 + 24LL);
      v49 = v103;
      if ( v48 == CAPOProcessNode::SetLeftFormat )
        CAPOProcessNode::SetLeftFormat(v111, v103);
      else
        v48(v111, v103);
      v50 = *(void (__fastcall **)(CAPOProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v47 + 32LL);
      if ( v50 == CAPOProcessNode::SetRightFormat )
        CAPOProcessNode::SetRightFormat(v47, v49);
      else
        v50(v47, v49);
      v51 = *((_QWORD *)&v98 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v98);
      v52 = v100[1];
      ftLastWriteTime = (struct _FILETIME)v100[1];
      v53 = *(struct ATL::CAtlPlex **)v100[1];
      v104 = v100[1];
      if ( v100[1] )
        *((_QWORD *)v100[1] + 2) = v47;
      v100[1] = v53;
      *((_QWORD *)v52 + 1) = v51;
      *(_QWORD *)v52 = 0LL;
      ++v99;
      if ( *((_QWORD *)&v98 + 1) )
        **((_QWORD **)&v98 + 1) = v52;
      else
        *(_QWORD *)&v98 = v52;
      *((_QWORD *)&v98 + 1) = v52;
      v111 = 0LL;
      if ( !v132 )
      {
        v110 = 0LL;
        GetAudioFormat = v49->lpVtbl->GetAudioFormat;
        if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
          AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v49);
        else
          AudioFormat = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))GetAudioFormat)(v49);
        v56 = CProcessNode::CreateDummyProcessNode(v94, AudioFormat, &v110);
        v89 = v56;
        if ( v56 < 0 )
        {
          v114 = v56;
          throw (long *)&v114;
        }
        v57 = *((_QWORD *)&v98 + 1);
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v98);
        v58 = v100[1];
        ftLastWriteTime = (struct _FILETIME)v100[1];
        v59 = *(struct ATL::CAtlPlex **)v100[1];
        v104 = v100[1];
        if ( v100[1] )
          *((_QWORD *)v100[1] + 2) = v110;
        v100[1] = v59;
        *((_QWORD *)v58 + 1) = v57;
        *(_QWORD *)v58 = 0LL;
        ++v99;
        if ( *((_QWORD *)&v98 + 1) )
          **((_QWORD **)&v98 + 1) = v58;
        else
          *(_QWORD *)&v98 = v58;
        *((_QWORD *)&v98 + 1) = v58;
        v110 = 0LL;
      }
      v111 = 0LL;
    }
    v60 = operator new(0x120uLL);
    ftLastWriteTime = (struct _FILETIME)v60;
    if ( v60 )
      v61 = (HKEY)CPipeInstance::CPipeInstance((__int64)v60, 2);
    else
      v61 = 0LL;
    hKey = v61;
    if ( !v61 )
    {
      v125 = -2147024882;
      throw (long *)&v125;
    }
    v62 = (const unsigned __int16 *)v7[12];
    v63 = -1LL;
    do
      ++v63;
    while ( v62[v63] );
    *((_QWORD *)v61 + 23) = 0LL;
    v64 = v63 + 1;
    if ( v63 + 1 < v63 )
    {
      v67 = -2147024362;
      goto LABEL_192;
    }
    v93 = 0;
    *((_QWORD *)v61 + 23) = 0LL;
    if ( is_mul_ok(v64, 2uLL) )
    {
      v65 = (unsigned __int16 *)CoTaskMemAlloc(2 * v64);
      *((_QWORD *)v61 + 23) = v65;
      if ( v65 )
      {
        v66 = 0;
        LODWORD(v95) = 0;
        v93 = 0;
        StringCchCopyNExW(
          v65,
          v63 + 1,
          v62,
          v63,
          (unsigned __int16 **)phkResult,
          (unsigned __int64 *)lpClass,
          (unsigned int)lpcchClass);
        v67 = 0;
        goto LABEL_104;
      }
      v67 = -2147024882;
LABEL_192:
      v93 = v67;
      v89 = v67;
LABEL_193:
      v116 = v67;
      throw (long *)&v116;
    }
    v66 = -2147024362;
    v67 = -2147024362;
    v93 = -2147024362;
LABEL_104:
    v89 = v66;
    if ( v66 < 0 )
      goto LABEL_193;
    v68 = v134;
    *((_DWORD *)v61 + 30) = *(_DWORD *)v134 == 2;
    *((_DWORD *)v61 + 3) = v94;
    *((_DWORD *)v61 + 31) = *((_DWORD *)v68 + 26) != 0;
    if ( *((_QWORD *)v61 + 18) )
      ATL::AtlComPtrAssign((struct IUnknown **)v61 + 18, 0LL);
    if ( *((struct IUnknown **)v61 + 29) != v135 )
      ATL::AtlComPtrAssign((struct IUnknown **)v61 + 29, v135);
    v69 = v132;
    *(_QWORD *)v61 = v132;
    *((_DWORD *)v61 + 2) = v69 == 0LL;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(v61 + 4, &v98);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v98);
    if ( v69 )
    {
      v74 = *((_DWORD *)v69 + 33);
    }
    else
    {
      nBlockAlign = v133->nBlockAlign;
      nAvgBytesPerSec = v133->nAvgBytesPerSec;
      if ( nBlockAlign == 8 )
      {
        v73 = nAvgBytesPerSec >> 3;
      }
      else
      {
        v70 = nAvgBytesPerSec % nBlockAlign;
        v73 = nAvgBytesPerSec / nBlockAlign;
      }
      v74 = (int)(float)((float)(int)((double)v73 * (double)(int)v68[5] / 10000000.0 + 0.5) * 1.1);
    }
    *((_DWORD *)v61 + 34) = v74;
    v75 = 7;
    if ( !*((_DWORD *)v68 + 1) )
      v75 = 1;
    *((_DWORD *)v61 + 32) = v75;
    *((_DWORD *)v61 + 51) = 0;
    if ( ((_DWORD)v68[10] & 0x100000) != 0 )
    {
      *((_DWORD *)v61 + 32) |= 0xAu;
      *((_DWORD *)v61 + 48) = 1056964608;
      *((_DWORD *)v61 + 49) = 1065353216;
    }
    if ( ((_DWORD)v68[10] & 0x8000000) != 0 )
      *((_DWORD *)v61 + 50) = 3;
    *v137 = (struct CPipeInstance *)v61;
    hKey = 0LL;
    if ( v49 )
    {
      Release = v49->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v49);
      else
        ((void (__fastcall *)(struct IAudioMediaType *, __int64))Release)(v49, v70);
    }
    v113 = 0LL;
  }
  catch ( long *v141 )
  {
    v89 = *(_DWORD *)v141;
    v66 = v89;
  }
  catch ( ATL::CAtlException *v138 )
  {
    v89 = *(_DWORD *)v138;
    v66 = v89;
  }
  if ( v66 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      26LL,
      &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      (unsigned int)v66);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v98);
  return (unsigned int)v66;
}
