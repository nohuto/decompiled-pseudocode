/*
 * XREFs of ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000E110
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002700 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140001D10 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x14000B500 (--0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000BA70 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000C1B0 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000C240 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x14000C850 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000CB50 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x14000CF40 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D4A0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000D540 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000D774 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000D7B0 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000EF10 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x140011CA0 (-CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1400126C0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140014F78 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     _wcsicmp_0 @ 0x140018538 (_wcsicmp_0.c)
 *     _CxxThrowException_0 @ 0x140019552 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF__guid_ @ 0x14002E76C (WPP_SF__guid_.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CPipeInstance::CreateStreamPipeInstance(
        struct IUnknown *a1,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct CPipeInstance *a3,
        struct tWAVEFORMATEX *a4,
        struct SYSTEM_AUDIO_STREAM *a5,
        struct CPipeInstance **a6)
{
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v7; // r14
  unsigned int v8; // r15d
  float v9; // xmm7_4
  int v10; // eax
  __int64 v11; // rdi
  struct ATL::CAtlPlex *v12; // rcx
  struct ATL::CAtlPlex *v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r14
  struct ATL::CAtlPlex *v20; // rcx
  struct ATL::CAtlPlex *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  struct ATL::CAtlPlex *v24; // rdx
  int v25; // eax
  GUID *v26; // rax
  GUID v27; // xmm6
  const struct _GUID *v28; // r12
  struct ATL::CAtlPlex *v29; // r13
  _QWORD *v30; // rcx
  int Common; // edi
  int v32; // r15d
  LSTATUS v33; // eax
  DWORD v34; // r14d
  HKEY v35; // rsi
  LSTATUS v36; // eax
  LSTATUS v37; // eax
  LSTATUS v38; // eax
  CLSID *v39; // rcx
  struct APO_REG_PROPERTIES *v40; // rax
  __int64 v41; // rdx
  struct ATL::CAtlPlex *v42; // rax
  char *v43; // rax
  __int128 v44; // xmm0
  __int64 v45; // rdi
  struct ATL::CAtlPlex *v46; // rax
  struct ATL::CAtlPlex *v47; // rcx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  CAPOProcessNode *v51; // rdi
  void (__fastcall *v52)(CAPOProcessNode *, struct IAudioMediaType *); // rax
  struct IAudioMediaType *v53; // rsi
  void (__fastcall *v54)(CAPOProcessNode *, struct IAudioMediaType *); // rax
  __int64 v55; // r14
  struct ATL::CAtlPlex *v56; // rax
  struct ATL::CAtlPlex *v57; // rcx
  void *v58; // rax
  HKEY v59; // rdi
  const unsigned __int16 *v60; // r12
  unsigned __int64 v61; // r14
  unsigned __int64 v62; // r13
  unsigned __int16 *v63; // rax
  int v64; // r15d
  int v65; // eax
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v66; // r14
  struct CPipeInstance *v67; // r13
  __int64 v68; // rdx
  int v69; // eax
  int v70; // eax
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  int v73; // eax
  struct ATL::CAtlPlex *v74; // rax
  __int64 v75; // r8
  struct ATL::CAtlPlex *v76; // r9
  __int64 v77; // rax
  int v78; // eax
  __int64 v79; // rax
  int v80; // eax
  __int64 v81; // rax
  int v82; // eax
  __int64 v83; // [rsp+0h] [rbp-F48h] BYREF
  PHKEY phkResult; // [rsp+20h] [rbp-F28h]
  LPWSTR lpClass; // [rsp+28h] [rbp-F20h]
  LPDWORD lpcchClass; // [rsp+30h] [rbp-F18h]
  int v87; // [rsp+40h] [rbp-F08h]
  unsigned int v88; // [rsp+44h] [rbp-F04h]
  int v89; // [rsp+48h] [rbp-F00h]
  int v90; // [rsp+4Ch] [rbp-EFCh]
  int v91; // [rsp+50h] [rbp-EF8h]
  int v92; // [rsp+54h] [rbp-EF4h]
  int v93; // [rsp+58h] [rbp-EF0h]
  __int64 v94; // [rsp+60h] [rbp-EE8h] BYREF
  struct ATL::CAtlPlex *v95; // [rsp+68h] [rbp-EE0h]
  __int128 v96; // [rsp+70h] [rbp-ED8h] BYREF
  __int64 v97; // [rsp+80h] [rbp-EC8h]
  struct ATL::CAtlPlex *v98[2]; // [rsp+88h] [rbp-EC0h] BYREF
  unsigned __int64 v99; // [rsp+98h] [rbp-EB0h]
  DWORD cchName; // [rsp+A0h] [rbp-EA8h] BYREF
  struct IAudioMediaType *v101; // [rsp+A8h] [rbp-EA0h] BYREF
  int v102; // [rsp+B0h] [rbp-E98h]
  struct ATL::CAtlPlex *v103; // [rsp+B8h] [rbp-E90h] BYREF
  HKEY hKey; // [rsp+C0h] [rbp-E88h] BYREF
  struct ATL::CAtlPlex *v105; // [rsp+C8h] [rbp-E80h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v106; // [rsp+D0h] [rbp-E78h]
  struct CStreamProcessNode *v107; // [rsp+D8h] [rbp-E70h] BYREF
  struct ATL::CAtlPlex *v108; // [rsp+E0h] [rbp-E68h] BYREF
  __int64 v109; // [rsp+E8h] [rbp-E60h] BYREF
  LPOLESTR lpsz; // [rsp+F0h] [rbp-E58h] BYREF
  __int64 v111; // [rsp+F8h] [rbp-E50h] BYREF
  CAPOProcessNode *v112; // [rsp+100h] [rbp-E48h] BYREF
  struct ATL::CAtlPlex *v113; // [rsp+108h] [rbp-E40h] BYREF
  int pExceptionObject; // [rsp+110h] [rbp-E38h] BYREF
  int v115; // [rsp+114h] [rbp-E34h] BYREF
  int v116; // [rsp+118h] [rbp-E30h] BYREF
  int v117; // [rsp+11Ch] [rbp-E2Ch] BYREF
  int v118; // [rsp+120h] [rbp-E28h] BYREF
  DWORD i; // [rsp+124h] [rbp-E24h]
  int v120; // [rsp+128h] [rbp-E20h] BYREF
  int v121; // [rsp+12Ch] [rbp-E1Ch]
  int v122; // [rsp+130h] [rbp-E18h] BYREF
  int v123; // [rsp+134h] [rbp-E14h] BYREF
  int v124; // [rsp+138h] [rbp-E10h] BYREF
  int v125; // [rsp+13Ch] [rbp-E0Ch] BYREF
  int v126; // [rsp+140h] [rbp-E08h] BYREF
  int v127; // [rsp+144h] [rbp-E04h] BYREF
  HKEY v128; // [rsp+148h] [rbp-E00h] BYREF
  int v129; // [rsp+150h] [rbp-DF8h] BYREF
  struct CPipeInstance *v130; // [rsp+158h] [rbp-DF0h]
  struct tWAVEFORMATEX *v131; // [rsp+160h] [rbp-DE8h]
  __int64 v132; // [rsp+168h] [rbp-DE0h] BYREF
  __int64 v133; // [rsp+170h] [rbp-DD8h] BYREF
  struct ATL::CAtlPlex *v134; // [rsp+178h] [rbp-DD0h]
  struct _FILETIME ftLastWriteTime; // [rsp+180h] [rbp-DC8h] BYREF
  struct ATL::CAtlPlex *v136; // [rsp+188h] [rbp-DC0h]
  struct CPipeInstance **v137; // [rsp+190h] [rbp-DB8h]
  DWORD Type; // [rsp+198h] [rbp-DB0h] BYREF
  struct IUnknown *v139; // [rsp+1A0h] [rbp-DA8h]
  __int64 v140; // [rsp+1A8h] [rbp-DA0h]
  long *v141; // [rsp+1B0h] [rbp-D98h] BYREF
  ATL::CAtlException *v142; // [rsp+1B8h] [rbp-D90h] BYREF
  GUID v143; // [rsp+1C0h] [rbp-D88h] BYREF
  unsigned __int16 *v144[2]; // [rsp+1D0h] [rbp-D78h] BYREF
  __int128 v145; // [rsp+1E0h] [rbp-D68h] BYREF
  int v146; // [rsp+1F0h] [rbp-D58h]
  int v147; // [rsp+600h] [rbp-948h]
  int v148; // [rsp+608h] [rbp-940h]
  struct WAVEFORMATEXTENSIBLE v149; // [rsp+630h] [rbp-918h] BYREF
  WAVEFORMATEXTENSIBLE v150; // [rsp+658h] [rbp-8F0h] BYREF
  GUID pclsid; // [rsp+680h] [rbp-8C8h] BYREF
  struct APO_REG_PROPERTIES v152; // [rsp+690h] [rbp-8B8h] BYREF
  WCHAR Name[512]; // [rsp+AE0h] [rbp-468h] BYREF

  v140 = -2LL;
  v131 = a4;
  v130 = a3;
  v7 = a2;
  v106 = a2;
  v139 = a1;
  v137 = a6;
  if ( *(_DWORD *)a2 )
  {
    v8 = 1;
    v90 = 1;
  }
  else
  {
    v8 = 0;
    v90 = 0;
  }
  v96 = 0LL;
  v97 = 0LL;
  *(_OWORD *)v98 = 0LL;
  LODWORD(v99) = 10;
  if ( *((_DWORD *)a2 + 2) == 1 )
    v9 = FLOAT_1_0;
  else
    v9 = FLOAT_1_1;
  *a6 = 0LL;
  try
  {
    v107 = 0LL;
    v10 = CStreamProcessNode::CreateStreamProcessNode(a2, &v107);
    v87 = v10;
    if ( v10 < 0 )
    {
      pExceptionObject = v10;
      throw (long *)&pExceptionObject;
    }
    v11 = *((_QWORD *)&v96 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v96);
    v12 = v98[1];
    v103 = v98[1];
    v13 = *(struct ATL::CAtlPlex **)v98[1];
    v108 = v98[1];
    if ( v98[1] )
      *((_QWORD *)v98[1] + 2) = v107;
    v98[1] = v13;
    *((_QWORD *)v12 + 1) = v11;
    *(_QWORD *)v12 = 0LL;
    ++v97;
    if ( *((_QWORD *)&v96 + 1) )
      **((_QWORD **)&v96 + 1) = v12;
    else
      *(_QWORD *)&v96 = v12;
    *((_QWORD *)&v96 + 1) = v12;
    v107 = 0LL;
    if ( !(unsigned int)CopyToWaveFormatExtensible(&v150, *((const struct tWAVEFORMATEX **)v7 + 9)) )
    {
      v115 = -2005139404;
      throw (long *)&v115;
    }
    v14 = *(_QWORD *)&v150.SubFormat.Data1;
    v15 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v150.SubFormat.Data1;
    v16 = *(_QWORD *)v150.SubFormat.Data4;
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v150.SubFormat.Data1 )
      v15 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)v150.SubFormat.Data4;
    if ( !v15 )
      goto LABEL_18;
    v17 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v150.SubFormat.Data1;
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v150.SubFormat.Data1 )
      v17 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)v150.SubFormat.Data4;
    if ( !v17 )
    {
LABEL_18:
      if ( !(unsigned int)CopyToWaveFormatExtensible(&v149, a4) )
      {
        v116 = -2005139404;
        throw (long *)&v116;
      }
      if ( *((_DWORD *)v7 + 26) && v149.Format.nChannels != v150.Format.nChannels )
      {
        v149.Format.nChannels = v150.Format.nChannels;
        v149.dwChannelMask = v150.dwChannelMask;
        v149.Format.nBlockAlign = v150.Format.nChannels * (v149.Format.wBitsPerSample >> 3);
        v149.Format.nAvgBytesPerSec = v149.Format.nSamplesPerSec * v149.Format.nBlockAlign;
      }
      v109 = 0LL;
      v18 = CProcessNode::CreateDummyProcessNode(v8, &v149, &v109);
      v87 = v18;
      if ( v18 < 0 )
      {
        v117 = v18;
        throw (long *)&v117;
      }
      v19 = *((_QWORD *)&v96 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v96);
      v20 = v98[1];
      v103 = v98[1];
      v21 = *(struct ATL::CAtlPlex **)v98[1];
      v108 = v98[1];
      if ( v98[1] )
        *((_QWORD *)v98[1] + 2) = v109;
      v98[1] = v21;
      *((_QWORD *)v20 + 1) = v19;
      *(_QWORD *)v20 = 0LL;
      ++v97;
      if ( *((_QWORD *)&v96 + 1) )
        **((_QWORD **)&v96 + 1) = v20;
      else
        *(_QWORD *)&v96 = v20;
      *((_QWORD *)&v96 + 1) = v20;
      v109 = 0LL;
      v22 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - v14;
      if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == v14 )
        v22 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - v16;
      if ( !v22 )
      {
        v94 = 0LL;
        v143 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v73 = CAPOProcessNode::CreateAPOProcessNode(
                &GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec,
                v8,
                1,
                0,
                (__int128 *)&v143,
                &v94);
        v87 = v73;
        if ( v73 < 0 )
        {
          v118 = v73;
          throw (long *)&v118;
        }
        v132 = v94;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v96, &v132);
        v94 = 0LL;
      }
      v109 = 0LL;
      v7 = v106;
    }
    v23 = 0LL;
    v88 = 0;
    while ( (unsigned int)v23 < *((_DWORD *)v7 + 31) )
    {
      v24 = 0LL;
      v95 = 0LL;
      v25 = *((_DWORD *)v7 + 26);
      if ( _bittest(&v25, v23) )
      {
        v26 = (GUID *)((char *)v7 + 108);
        LODWORD(v94) = 1;
      }
      else
      {
        v26 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        LODWORD(v94) = 0;
      }
      v27 = *v26;
      v28 = (const struct _GUID *)((char *)v7 + 16 * (unsigned int)v23 + 128);
      v29 = 0LL;
      v134 = 0LL;
      v30 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          18LL,
          &WPP_00124d7d191530a40c6a65552c411b8b_Traceguids,
          (char *)v7 + 16 * (unsigned int)v23 + 128);
        v30 = WPP_GLOBAL_Control;
        v24 = v95;
        v23 = v88;
      }
      Common = -2005139397;
      v91 = -2005139397;
      v32 = 0;
      v102 = 0;
      if ( &v83 == (__int64 *)-480LL )
      {
        v91 = -2147467261;
        Common = -2147467261;
        v92 = -2147467261;
        goto LABEL_152;
      }
      v33 = RegOpenKeyExW(HKEY_CLASSES_ROOT, L"AudioEngine\\AudioProcessingObjects", 0, 0x20019u, &hKey);
      if ( v33 )
      {
        if ( v33 > 0 )
          Common = (unsigned __int16)v33 | 0x80070000;
        else
          Common = v33;
        v91 = Common;
      }
      else
      {
        v34 = 0;
        for ( i = 0; !v32; i = v34 )
        {
          v35 = hKey;
          v89 = 0;
          lpsz = 0LL;
          v32 = 0;
          v102 = 0;
          cchName = 512;
          v36 = RegEnumKeyExW(hKey, v34, Name, &cchName, 0LL, 0LL, 0LL, &ftLastWriteTime);
          if ( !v36 || v36 == 234 )
          {
            Common = StringFromCLSID(v28, &lpsz);
            v89 = Common;
            if ( Common >= 0 && !wcsicmp_0(Name, lpsz) )
            {
              v37 = RegOpenKeyExW(v35, Name, 0, 0x20019u, &v128);
              Common = v37;
              if ( v37 )
              {
                if ( v37 > 0 )
                  Common = (unsigned __int16)v37 | 0x80070000;
                v89 = Common;
              }
              else
              {
                Common = InnerGetCommon(v128, v28, &v152);
                v89 = Common;
                if ( Common >= 0 )
                {
                  v152.u32NumAPOInterfaces = 1;
                  cchName = 1024;
                  v38 = RegQueryValueExW(v128, L"APOInterface0", 0LL, &Type, (LPBYTE)Name, &cchName);
                  Common = v38;
                  if ( v38 )
                  {
                    if ( v38 > 0 )
                      Common = (unsigned __int16)v38 | 0x80070000;
                    v89 = Common;
                  }
                  else
                  {
                    Common = CLSIDFromString(Name, &pclsid);
                    v89 = Common;
                    if ( Common >= 0 )
                    {
                      v152.iidAPOInterfaceList[0] = pclsid;
                      v39 = (CLSID *)&v145;
                      v40 = &v152;
                      v41 = 8LL;
                      do
                      {
                        *v39 = v40->clsid;
                        v39[1] = *(CLSID *)&v40->Flags;
                        v39[2] = *(CLSID *)&v40->szFriendlyName[6];
                        v39[3] = *(CLSID *)&v40->szFriendlyName[14];
                        v39[4] = *(CLSID *)&v40->szFriendlyName[22];
                        v39[5] = *(CLSID *)&v40->szFriendlyName[30];
                        v39[6] = *(CLSID *)&v40->szFriendlyName[38];
                        v39 += 8;
                        v39[-1] = *(CLSID *)&v40->szFriendlyName[46];
                        v40 = (struct APO_REG_PROPERTIES *)((char *)v40 + 128);
                        --v41;
                      }
                      while ( v41 );
                      *v39 = v40->clsid;
                      v39[1] = *(CLSID *)&v40->Flags;
                      v39[2] = *(CLSID *)&v40->szFriendlyName[6];
                      v39[3] = *(CLSID *)&v40->szFriendlyName[14];
                      v39[4].Data1 = *(_DWORD *)&v40->szFriendlyName[22];
                      v32 = 1;
                      v102 = 1;
                    }
                  }
                }
                RegCloseKey(v128);
              }
            }
          }
          else
          {
            Common = -2005139398;
            v89 = -2005139398;
          }
          if ( lpsz )
          {
            CoTaskMemFree(lpsz);
            lpsz = 0LL;
          }
          v91 = Common;
          if ( Common < 0 )
            break;
          ++v34;
        }
        RegCloseKey(hKey);
        v7 = v106;
      }
      if ( Common >= 0 && !v32 )
      {
        Common = -2005139430;
        v91 = -2005139430;
      }
      v92 = Common;
      if ( Common < 0 )
      {
        v30 = WPP_GLOBAL_Control;
        v24 = v95;
        v23 = v88;
        goto LABEL_152;
      }
      if ( v148 != 1 || v147 != 1 )
      {
        Common = -2005139401;
        v92 = -2005139401;
        v30 = WPP_GLOBAL_Control;
        v24 = v95;
        v23 = v88;
LABEL_152:
        v8 = v90;
LABEL_72:
        if ( Common >= 0 )
          goto LABEL_73;
        goto LABEL_153;
      }
      v42 = (struct ATL::CAtlPlex *)operator new(0x38uLL);
      v29 = v42;
      v103 = v42;
      if ( v42 )
      {
        *(_QWORD *)v42 = &CProcessNode::`vftable';
        *((_QWORD *)v42 + 1) = 0LL;
        *((_QWORD *)v42 + 2) = 0LL;
        v8 = v90;
        *((_DWORD *)v42 + 6) = v90;
        *((_QWORD *)v42 + 4) = 0LL;
        *((_DWORD *)v42 + 10) = 2;
        *(_QWORD *)v42 = &CAPOProcessNode::`vftable';
        *((_DWORD *)v42 + 12) = v146;
      }
      else
      {
        v29 = 0LL;
        v8 = v90;
      }
      v134 = v29;
      if ( v29 )
      {
        v43 = (char *)operator new(0x30uLL);
        v108 = (struct ATL::CAtlPlex *)v43;
        if ( v43 )
        {
          v44 = v145;
          *((_QWORD *)v43 + 5) = 0LL;
          *(_DWORD *)v43 = 0;
          *((_DWORD *)v43 + 1) = v94;
          *(_OWORD *)(v43 + 8) = v44;
          *(GUID *)(v43 + 24) = v27;
        }
        else
        {
          v43 = 0LL;
        }
        if ( v43 )
        {
          v24 = v29;
          v95 = v29;
          *((_QWORD *)v29 + 4) = v43;
          v30 = WPP_GLOBAL_Control;
          v23 = v88;
          goto LABEL_72;
        }
      }
      Common = -2147024882;
      v92 = -2147024882;
      v30 = WPP_GLOBAL_Control;
LABEL_153:
      if ( v29 )
      {
        (**(void (__fastcall ***)(struct ATL::CAtlPlex *, __int64, __int64, _UNKNOWN **))v29)(
          v29,
          1LL,
          v23,
          &WPP_GLOBAL_Control);
        v30 = WPP_GLOBAL_Control;
      }
      v134 = 0LL;
      if ( v30 != &WPP_GLOBAL_Control && (*((_DWORD *)v30 + 7) & 0x20000) != 0 && *((_BYTE *)v30 + 25) >= 2u )
        WPP_SF_D(v30[2], 19LL, &WPP_00124d7d191530a40c6a65552c411b8b_Traceguids, (unsigned int)Common);
      AudDGTraceLoggingErrorHelper("CAPOProcessNode::CreateAPOProcessNode", 0x212u, Common);
      v24 = v95;
      LODWORD(v23) = v88;
LABEL_73:
      v87 = Common;
      if ( Common < 0 )
      {
        v120 = Common;
        throw (long *)&v120;
      }
      v45 = *((_QWORD *)&v96 + 1);
      v46 = v98[1];
      if ( !v98[1] )
      {
        v74 = ATL::CAtlPlex::Create(v98, (unsigned int)v99, 0x18uLL);
        if ( !v74 )
          ATL::AtlThrowImpl(-2147024882);
        v75 = (unsigned int)(v99 - 1);
        v76 = (struct ATL::CAtlPlex *)((char *)v74 + 24 * v75 + 8);
        v136 = v76;
        v121 = v99 - 1;
        v46 = v98[1];
        while ( (int)v75 >= 0 )
        {
          *(_QWORD *)v76 = v46;
          v46 = v76;
          v98[1] = v76;
          v76 = (struct ATL::CAtlPlex *)((char *)v76 - 24);
          v136 = v76;
          LODWORD(v75) = v75 - 1;
          v121 = v75;
        }
        v24 = v95;
        LODWORD(v23) = v88;
      }
      v133 = (__int64)v46;
      v47 = *(struct ATL::CAtlPlex **)v46;
      v132 = (__int64)v46;
      if ( v46 )
        *((_QWORD *)v46 + 2) = v24;
      v98[1] = v47;
      *((_QWORD *)v46 + 1) = v45;
      *(_QWORD *)v46 = 0LL;
      ++v97;
      if ( *((_QWORD *)&v96 + 1) )
        **((_QWORD **)&v96 + 1) = v46;
      else
        *(_QWORD *)&v96 = v46;
      *((_QWORD *)&v96 + 1) = v46;
      v95 = 0LL;
      v23 = (unsigned int)(v23 + 1);
      v88 = v23;
    }
    v101 = 0LL;
    v48 = CAudioMediaType::Create(v131, (unsigned int)v131->cbSize + 18, &v101, 0.0);
    v87 = v48;
    if ( v48 < 0 )
    {
      v122 = v48;
      throw (long *)&v122;
    }
    v49 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      if ( v49 == 1 )
      {
        v113 = 0LL;
        v53 = v101;
        v79 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v101->lpVtbl->GetAudioFormat)(v101);
        v80 = CProcessNode::CreateDummyProcessNode(v8, v79, &v113);
        v87 = v80;
        if ( v80 < 0 )
        {
          v125 = v80;
          throw (long *)&v125;
        }
        v108 = v113;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v96, (__int64 *)&v108);
        v113 = 0LL;
      }
      else if ( v49 == 2 )
      {
        v105 = 0LL;
        v53 = v101;
        v81 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v101->lpVtbl->GetAudioFormat)(v101);
        v82 = CProcessNode::CreateDummyProcessNode(v8, v81, &v105);
        v87 = v82;
        if ( v82 < 0 )
        {
          v126 = v82;
          throw (long *)&v126;
        }
        v103 = v105;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v96, (__int64 *)&v103);
        v105 = 0LL;
      }
      else
      {
        v53 = v101;
      }
    }
    else
    {
      v112 = 0LL;
      *(GUID *)v144 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v50 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
              v8,
              1,
              0,
              (__int128 *)v144,
              &v112);
      v87 = v50;
      if ( v50 < 0 )
      {
        v123 = v50;
        throw (long *)&v123;
      }
      v51 = v112;
      v52 = *(void (__fastcall **)(CAPOProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v112 + 24LL);
      v53 = v101;
      if ( v52 == CAPOProcessNode::SetLeftFormat )
        CAPOProcessNode::SetLeftFormat(v112, v101);
      else
        v52(v112, v101);
      v54 = *(void (__fastcall **)(CAPOProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v51 + 32LL);
      if ( v54 == CAPOProcessNode::SetRightFormat )
        CAPOProcessNode::SetRightFormat(v51, v53);
      else
        v54(v51, v53);
      v55 = *((_QWORD *)&v96 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v96);
      v56 = v98[1];
      ftLastWriteTime = (struct _FILETIME)v98[1];
      v57 = *(struct ATL::CAtlPlex **)v98[1];
      v103 = v98[1];
      if ( v98[1] )
        *((_QWORD *)v98[1] + 2) = v51;
      v98[1] = v57;
      *((_QWORD *)v56 + 1) = v55;
      *(_QWORD *)v56 = 0LL;
      ++v97;
      if ( *((_QWORD *)&v96 + 1) )
        **((_QWORD **)&v96 + 1) = v56;
      else
        *(_QWORD *)&v96 = v56;
      *((_QWORD *)&v96 + 1) = v56;
      v112 = 0LL;
      if ( !v130 )
      {
        v111 = 0LL;
        v77 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v53->lpVtbl->GetAudioFormat)(v53);
        v78 = CProcessNode::CreateDummyProcessNode(v8, v77, &v111);
        v87 = v78;
        if ( v78 < 0 )
        {
          v124 = v78;
          throw (long *)&v124;
        }
        v133 = v111;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v96, &v133);
        v111 = 0LL;
      }
      v112 = 0LL;
      v7 = v106;
    }
    v58 = operator new(0x130uLL);
    ftLastWriteTime = (struct _FILETIME)v58;
    if ( v58 )
      v59 = (HKEY)CPipeInstance::CPipeInstance((__int64)v58, 2);
    else
      v59 = 0LL;
    hKey = v59;
    if ( !v59 )
    {
      v127 = -2147024882;
      throw (long *)&v127;
    }
    v60 = (const unsigned __int16 *)*((_QWORD *)v7 + 12);
    v61 = -1LL;
    do
      ++v61;
    while ( v60[v61] );
    *((_QWORD *)v59 + 23) = 0LL;
    v62 = v61 + 1;
    if ( v61 + 1 < v61 )
    {
      v65 = -2147024362;
      goto LABEL_192;
    }
    v93 = 0;
    *((_QWORD *)v59 + 23) = 0LL;
    if ( is_mul_ok(v62, 2uLL) )
    {
      v63 = (unsigned __int16 *)CoTaskMemAlloc(2 * v62);
      *((_QWORD *)v59 + 23) = v63;
      if ( v63 )
      {
        v64 = 0;
        LODWORD(v94) = 0;
        v93 = 0;
        StringCchCopyNExW(
          v63,
          v61 + 1,
          v60,
          v61,
          (unsigned __int16 **)phkResult,
          (unsigned __int64 *)lpClass,
          (unsigned int)lpcchClass);
        v65 = 0;
        goto LABEL_102;
      }
      v65 = -2147024882;
LABEL_192:
      v93 = v65;
      v87 = v65;
LABEL_193:
      v129 = v65;
      throw (long *)&v129;
    }
    v64 = -2147024362;
    v65 = -2147024362;
    v93 = -2147024362;
LABEL_102:
    v87 = v64;
    if ( v64 < 0 )
      goto LABEL_193;
    v66 = v106;
    *((_DWORD *)v59 + 30) = *(_DWORD *)v106 == 2;
    *((_DWORD *)v59 + 3) = v90;
    *((_DWORD *)v59 + 32) = *((_DWORD *)v66 + 26) != 0;
    *((_DWORD *)v59 + 31) = *((_DWORD *)v66 + 2) == 1;
    if ( *((_QWORD *)v59 + 18) )
      ATL::AtlComPtrAssign((struct IUnknown **)v59 + 18, 0LL);
    if ( *((struct IUnknown **)v59 + 29) != v139 )
      ATL::AtlComPtrAssign((struct IUnknown **)v59 + 29, v139);
    v67 = v130;
    *(_QWORD *)v59 = v130;
    *((_DWORD *)v59 + 2) = v67 == 0LL;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((__int64 **)v59 + 2, (__int64)&v96);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v96);
    if ( v67 )
    {
      v69 = *((_DWORD *)v67 + 34);
    }
    else
    {
      v68 = v131->nAvgBytesPerSec % v131->nBlockAlign;
      v69 = (int)(float)((float)(int)((double)(int)(v131->nAvgBytesPerSec / v131->nBlockAlign)
                                    * (double)(int)*((_QWORD *)v66 + 5)
                                    / 10000000.0
                                    + 0.5)
                       * v9);
    }
    *((_DWORD *)v59 + 35) = v69;
    if ( *((_DWORD *)v66 + 1) )
      v70 = 7;
    else
      v70 = 1;
    *((_DWORD *)v59 + 33) = v70;
    *((_DWORD *)v59 + 51) = 0;
    if ( (*((_DWORD *)v66 + 20) & 0x100000) != 0 )
    {
      *((_DWORD *)v59 + 33) |= 0xAu;
      *((_DWORD *)v59 + 48) = 1056964608;
      *((_DWORD *)v59 + 49) = 1065353216;
    }
    if ( (*((_DWORD *)v66 + 20) & 0x8000000) != 0 )
      *((_DWORD *)v59 + 50) = 3;
    *v137 = (struct CPipeInstance *)v59;
    hKey = 0LL;
    if ( v53 )
    {
      Release = v53->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v53);
      else
        ((void (__fastcall *)(struct IAudioMediaType *, __int64))Release)(v53, v68);
    }
    v107 = 0LL;
  }
  catch ( long *v141 )
  {
    v87 = *(_DWORD *)v141;
    v64 = v87;
  }
  catch ( ATL::CAtlException *v142 )
  {
    v87 = *(_DWORD *)v142;
    v64 = v87;
  }
  if ( v64 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20LL,
        &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
        (unsigned int)v64);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateStreamPipeInstance", 0x338u, v64);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v96);
  return (unsigned int)v64;
}
