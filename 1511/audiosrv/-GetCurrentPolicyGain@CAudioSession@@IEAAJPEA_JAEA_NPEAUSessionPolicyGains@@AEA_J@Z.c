/*
 * XREFs of ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180027FF0
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180025C90 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035A40 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180071AA0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x1800128B4 (-GetNextValue@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrait.c)
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x180037490 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointV.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18003E748 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??A?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAAAEAPEAVCEndpointVolumeState@@PEBG@Z @ 0x180048B34 (--A-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeS.c)
 *     WPP_SF_S_guid_ @ 0x1800773CC (WPP_SF_S_guid_.c)
 *     WPP_SF_S_guid_g @ 0x18007746C (WPP_SF_S_guid_g.c)
 *     WPP_SF_Sq @ 0x1800775D0 (WPP_SF_Sq.c)
 */

__int64 __fastcall CAudioSession::GetCurrentPolicyGain(
        CAudioSession *this,
        __int64 *a2,
        bool *a3,
        struct SessionPolicyGains *a4,
        __int64 *a5)
{
  double v5; // xmm0_8
  __int64 *v6; // r14
  float v10; // xmm6_4
  _QWORD *v11; // rbx
  __int64 (__fastcall *v12)(CProcess *__hidden); // rbp
  _DWORD *v13; // rbx
  int v14; // r14d
  float (__fastcall *v15)(CProcess *__hidden); // rbp
  int v16; // r15d
  DWORD v17; // ebp
  int v18; // ebx
  _QWORD *v19; // rax
  struct TSSession *v20; // rcx
  __int64 *v21; // rax
  float v22; // xmm6_4
  _DWORD *v23; // rbx
  float (__fastcall *v24)(CProcess *__hidden); // rbp
  float v25; // xmm6_4
  int v26; // ebx
  _QWORD *v27; // rax
  _DWORD *v28; // rcx
  const unsigned __int16 *(__fastcall *v29)(CAudioSession *__hidden); // rbx
  __int64 v30; // r14
  _DWORD *v31; // rbx
  float (__fastcall *v32)(CProcess *__hidden, const unsigned __int16 *); // rbp
  DWORD v33; // ebx
  float v34; // xmm6_4
  _QWORD *v35; // rax
  struct TSSession *v36; // rcx
  char *v37; // rbx
  const unsigned __int16 *(__fastcall *v38)(CAudioSession *__hidden); // rbx
  __int64 v39; // rbp
  CProcess *v40; // rdi
  float (__fastcall *v41)(CProcess *__hidden, const unsigned __int16 *); // rbx
  __int64 result; // rax
  unsigned int v43; // edx
  unsigned int v44; // ecx
  __int64 v45; // r8
  struct TSSession *v46; // rcx
  __int64 NextValue; // rax
  __int64 v48; // r13
  __int64 v49; // rax
  int v50; // edx
  int v51; // r8d
  __int64 v52; // rax
  __int64 v53; // rax
  struct TSSession *v54; // [rsp+80h] [rbp+8h] BYREF
  __int64 v55; // [rsp+88h] [rbp+10h] BYREF
  char v56; // [rsp+90h] [rbp+18h] BYREF

  v6 = a5;
  if ( a2 )
    *a5 = *a2;
  else
    *a5 = 0LL;
  *a3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  if ( *((_QWORD *)this + 68)
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v5) = LODWORD(DOUBLE_1_0);
    WPP_SF_Sq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      60,
      (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((_QWORD *)this + 107),
      SLOBYTE(DOUBLE_1_0));
  }
  v10 = FLOAT_1_0;
  if ( *((_QWORD *)this + 68) )
  {
    v43 = *((_DWORD *)this + 138);
    v44 = 0;
    if ( v43 )
    {
      v45 = *((_QWORD *)this + 67);
      while ( !*(_QWORD *)(v45 + 8LL * v44) )
      {
        if ( ++v44 >= v43 )
          goto LABEL_59;
      }
      v46 = *(struct TSSession **)(v45 + 8LL * v44);
    }
    else
    {
LABEL_59:
      v46 = 0LL;
    }
    v54 = v46;
    while ( v54 )
    {
      NextValue = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
                    (__int64)this + 536,
                    (__int64 *)&v54);
      v48 = *(_QWORD *)NextValue;
      v49 = *(_QWORD *)(*(_QWORD *)NextValue + 16LL) - MutePolicyGuid;
      v55 = v48 + 16;
      if ( !v49 )
        v49 = *(_QWORD *)(v48 + 24) - *((_QWORD *)&MutePolicyGuid + 1);
      if ( v49 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v48 + 24LL))(v48) )
        {
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 62, v51, *((_QWORD *)this + 107), v55);
          }
          *a3 = 1;
        }
        else
        {
          LODWORD(v5) = *(_DWORD *)(v48 + 48);
          if ( v10 > *(float *)&v5 )
          {
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_S_guid_g(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                v50,
                v51,
                *((_QWORD *)this + 107),
                v48 + 16,
                SLOBYTE(v5));
            }
            v52 = *(_QWORD *)(v48 + 40);
            v10 = *(float *)(v48 + 48);
            if ( v52 > *v6 )
              *v6 = v52;
          }
        }
      }
      else if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
             && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 61, v48 + 16, *((_QWORD *)this + 107), v48 + 16);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  *(float *)a4 = v10;
  *((_DWORD *)a4 + 1) = 1065353216;
  v11 = (_QWORD *)*((_QWORD *)this + 108);
  v12 = *(__int64 (__fastcall **)(CProcess *__hidden))(*v11 + 112LL);
  if ( v12 == CProcess::IsMuted )
  {
    if ( *(_DWORD *)(v11[26] + 120LL) )
      goto LABEL_7;
  }
  else if ( !(unsigned int)v12(*((CProcess **)this + 108)) )
  {
    goto LABEL_7;
  }
  *((_DWORD *)a4 + 1) = 0;
LABEL_7:
  v13 = (_DWORD *)*((_QWORD *)this + 108);
  v14 = 1;
  v15 = *(float (__fastcall **)(CProcess *__hidden))(*(_QWORD *)v13 + 184LL);
  if ( v15 == CProcess::GetScreenReaderPolicyVolume )
  {
    v16 = v13[38];
    v17 = v13[39];
    v18 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    v19 = qword_1800E68A0;
    v54 = 0LL;
    while ( v19 )
    {
      v20 = (struct TSSession *)v19[2];
      v19 = (_QWORD *)*v19;
      if ( v17 == *(_DWORD *)v20 )
        goto LABEL_11;
    }
    if ( (unsigned int)TsSessionCreate(v17, 0LL, &v54) )
    {
      v22 = *(float *)&v54;
      goto LABEL_13;
    }
    v20 = v54;
LABEL_11:
    v21 = (__int64 *)*((_QWORD *)v20 + 22);
    if ( v21 )
    {
      while ( *((_DWORD *)v21 + 4) != v16 )
      {
        v21 = (__int64 *)*v21;
        if ( !v21 )
          goto LABEL_12;
      }
      v18 = 1;
    }
LABEL_12:
    v22 = *((float *)v20 + 56);
LABEL_13:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    if ( v18 )
      v22 = FLOAT_1_0;
  }
  else
  {
    v5 = ((double (__fastcall *)(_QWORD))v15)(*((_QWORD *)this + 108));
    v22 = *(float *)&v5;
  }
  *((float *)a4 + 2) = v22;
  v23 = (_DWORD *)*((_QWORD *)this + 108);
  v24 = *(float (__fastcall **)(CProcess *__hidden))(*(_QWORD *)v23 + 192LL);
  if ( v24 == CProcess::GetSessionDisplayPolicyVolume )
  {
    v25 = FLOAT_1_0;
    if ( !v23[101] )
    {
      v26 = v23[39];
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
      v27 = qword_1800E68A0;
      while ( v27 )
      {
        v28 = (_DWORD *)v27[2];
        v27 = (_QWORD *)*v27;
        if ( v26 == *v28 )
        {
          v14 = v28[57];
          break;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
      if ( !v14 )
        v25 = 0.0;
    }
  }
  else
  {
    v5 = ((double (__fastcall *)(_QWORD))v24)(*((_QWORD *)this + 108));
    v25 = *(float *)&v5;
  }
  *((float *)a4 + 3) = v25;
  v29 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)this + 72LL);
  if ( v29 == CAudioSession::GetEndpointId )
    v30 = *((_QWORD *)this + 98);
  else
    v30 = (__int64)v29(this);
  v31 = (_DWORD *)*((_QWORD *)this + 108);
  v32 = *(float (__fastcall **)(CProcess *__hidden, const unsigned __int16 *))(*(_QWORD *)v31 + 200LL);
  if ( v32 == CProcess::GetEndpointVolumeOverridePolicyVolume )
  {
    v33 = v31[39];
    v34 = FLOAT_1_0;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    v35 = qword_1800E68A0;
    v54 = 0LL;
    while ( v35 )
    {
      v36 = (struct TSSession *)v35[2];
      v35 = (_QWORD *)*v35;
      if ( v33 == *(_DWORD *)v36 )
        goto LABEL_29;
    }
    if ( (unsigned int)TsSessionCreate(v33, 0LL, &v54) )
      goto LABEL_30;
    v36 = v54;
LABEL_29:
    v37 = (char *)v36 + 240;
    if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
           (int)v36 + 240,
           v30,
           (unsigned int)&v55,
           (unsigned int)&v54,
           (__int64)&v56) )
    {
      v53 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::operator[](
              v37,
              v30);
      if ( *(_DWORD *)(*(_QWORD *)v53 + 20LL) )
        v34 = 0.0;
      else
        v34 = *(float *)(*(_QWORD *)v53 + 16LL);
    }
LABEL_30:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  }
  else
  {
    v5 = ((double (__fastcall *)(_QWORD, __int64))v32)(*((_QWORD *)this + 108), v30);
    v34 = *(float *)&v5;
  }
  *((float *)a4 + 4) = v34;
  v38 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)this + 72LL);
  if ( v38 == CAudioSession::GetEndpointId )
    v39 = *((_QWORD *)this + 98);
  else
    v39 = (__int64)v38(this);
  v40 = (CProcess *)*((_QWORD *)this + 108);
  v41 = *(float (__fastcall **)(CProcess *__hidden, const unsigned __int16 *))(*(_QWORD *)v40 + 208LL);
  if ( v41 == CProcess::GetLayoutPolicyVolume )
    *(float *)&v5 = FLOAT_1_0;
  else
    v41(v40, (const unsigned __int16 *)v39);
  result = 0LL;
  *((_DWORD *)a4 + 5) = LODWORD(v5);
  return result;
}
