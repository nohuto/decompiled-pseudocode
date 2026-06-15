/*
 * XREFs of ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x1800153B0
 * Callers:
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800027B0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180008CA0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180013280 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 * Callees:
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180015E90 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x18002C56C (-GetNextValue@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrait.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S_guid_ @ 0x18005FA18 (WPP_SF_S_guid_.c)
 *     WPP_SF_S_guid_g @ 0x18005FA9C (WPP_SF_S_guid_g.c)
 *     WPP_SF_Sg @ 0x18005FBC8 (WPP_SF_Sg.c)
 */

__int64 __fastcall CAudioSession::GetCurrentPolicyGain(
        CAudioSession *this,
        __int64 *a2,
        bool *a3,
        struct SessionPolicyGains *a4,
        __int64 *a5)
{
  struct SessionPolicyGains *v5; // r15
  float v6; // xmm6_4
  int v9; // r8d
  const unsigned __int16 *(__fastcall *v10)(CAudioSession *__hidden); // rax
  __int64 v11; // rdx
  const unsigned __int16 *(__fastcall *v12)(CAudioSession *__hidden); // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  const unsigned __int16 *(__fastcall *v15)(CAudioSession *__hidden); // rax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(CAudioSession *__hidden, unsigned int *); // rax
  int ProcessId; // eax
  const WCHAR *v19; // r14
  const WCHAR *v20; // rcx
  __int64 v21; // rax
  const WCHAR *v22; // rcx
  __int64 v23; // rax
  const unsigned __int16 *(__fastcall *v24)(CAudioSession *__hidden); // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 NextValue; // rax
  int v33; // r8d
  __int64 v34; // r13
  __int64 v35; // rax
  int v36; // edx
  int v37; // r8d
  __m128 v38; // xmm0
  __int64 v39; // rax
  unsigned int v40[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+38h] [rbp-C8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-C0h] BYREF
  char v43; // [rsp+48h] [rbp-B8h]
  _DWORD v44[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h]
  void *v46; // [rsp+60h] [rbp-A0h] BYREF
  int v47; // [rsp+68h] [rbp-98h]
  int v48; // [rsp+6Ch] [rbp-94h]
  void *v49; // [rsp+70h] [rbp-90h]
  int v50; // [rsp+78h] [rbp-88h]
  int v51; // [rsp+7Ch] [rbp-84h]
  const WCHAR *v52; // [rsp+80h] [rbp-80h]
  int v53; // [rsp+88h] [rbp-78h]
  int v54; // [rsp+8Ch] [rbp-74h]
  const WCHAR *v55; // [rsp+90h] [rbp-70h]
  int v56; // [rsp+98h] [rbp-68h]
  int v57; // [rsp+9Ch] [rbp-64h]
  struct SessionPolicyGains *v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  char *v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  char *v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  char *v64; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+D8h] [rbp-28h]
  char *v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  char *v68; // [rsp+F0h] [rbp-10h]
  __int64 v69; // [rsp+F8h] [rbp-8h]
  const WCHAR *v70; // [rsp+100h] [rbp+0h]
  int v71; // [rsp+108h] [rbp+8h]
  int v72; // [rsp+10Ch] [rbp+Ch]
  unsigned int *v73; // [rsp+110h] [rbp+10h]
  __int64 v74; // [rsp+118h] [rbp+18h]

  v5 = a4;
  v6 = FLOAT_1_0;
  *(_QWORD *)v40 = a4;
  if ( a2 )
    *a5 = *a2;
  else
    *a5 = 0LL;
  *a3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 496);
  v43 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_QWORD *)this + 68) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), 37, v9, *((_QWORD *)this + 107), SLOBYTE(DOUBLE_1_0));
    }
    if ( *((_QWORD *)this + 68) )
    {
      v28 = *((_DWORD *)this + 138);
      v29 = 0LL;
      if ( v28 )
      {
        v30 = *((_QWORD *)this + 67);
        while ( !*(_QWORD *)(v30 + 8 * v29) )
        {
          v29 = (unsigned int)(v29 + 1);
          if ( (unsigned int)v29 >= v28 )
            goto LABEL_53;
        }
        v31 = *(_QWORD *)(v30 + 8 * v29);
      }
      else
      {
LABEL_53:
        v31 = 0LL;
      }
      v41 = v31;
      if ( v31 )
      {
        do
        {
          NextValue = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
                        (char *)this + 536,
                        &v41);
          v34 = *(_QWORD *)NextValue;
          v35 = *(_QWORD *)(*(_QWORD *)NextValue + 16LL) - MutePolicyGuid;
          if ( !v35 )
            v35 = *(_QWORD *)(v34 + 24) - *((_QWORD *)&MutePolicyGuid + 1);
          if ( v35 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 24LL))(v34) )
            {
              if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 39, v37, *((_QWORD *)this + 107), v34 + 16);
              }
              *a3 = 1;
            }
            else
            {
              v38 = (__m128)*(unsigned int *)(v34 + 48);
              if ( v6 > v38.m128_f32[0] )
              {
                if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_S_guid_g(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    v36,
                    v37,
                    *((_QWORD *)this + 107),
                    v34 + 16,
                    *(_OWORD *)&_mm_cvtps_pd(v38));
                }
                v39 = *(_QWORD *)(v34 + 40);
                v6 = *(float *)(v34 + 48);
                if ( v39 > *a5 )
                  *a5 = v39;
              }
            }
          }
          else if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                 && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 38, v33, *((_QWORD *)this + 107), v34 + 16);
          }
        }
        while ( v41 );
        v5 = *(struct SessionPolicyGains **)v40;
      }
    }
  }
  if ( v43 )
    LeaveCriticalSection(lpCriticalSection);
  *((_DWORD *)v5 + 1) = 1065353216;
  *(float *)v5 = v6;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 108) + 120LL))(*((_QWORD *)this + 108)) )
    *((_DWORD *)v5 + 1) = 0;
  *((float *)v5 + 2) = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 108) + 192LL))(*((_QWORD *)this + 108));
  *((float *)v5 + 3) = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 108) + 200LL))(*((_QWORD *)this + 108));
  v10 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)this + 72LL);
  if ( v10 == CAudioSession::GetEndpointId )
    v11 = *((_QWORD *)this + 98);
  else
    v11 = (__int64)v10(this);
  *((float *)v5 + 4) = (*(float (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 108) + 208LL))(
                         *((_QWORD *)this + 108),
                         v11);
  v12 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)this + 72LL);
  if ( v12 == CAudioSession::GetEndpointId )
    v13 = *((_QWORD *)this + 98);
  else
    v13 = (__int64)v12(this);
  *((float *)v5 + 5) = (*(float (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 108) + 216LL))(
                         *((_QWORD *)this + 108),
                         v13);
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 108) + 72LL))(*((_QWORD *)this + 108));
  v15 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)this + 72LL);
  if ( v15 == CAudioSession::GetEndpointId )
    v16 = *((_QWORD *)this + 98);
  else
    v16 = (__int64)v15(this);
  v17 = *(__int64 (__fastcall **)(CAudioSession *__hidden, unsigned int *))(*(_QWORD *)this + 120LL);
  if ( v17 == CAudioSession::GetProcessId )
    ProcessId = CAudioSession::GetProcessId(this, v40);
  else
    ProcessId = v17(this, v40);
  if ( ProcessId >= 0 && dword_1800CA040 > 5u )
  {
    v19 = &pwsz;
    v20 = &pwsz;
    LODWORD(v21) = 0;
    if ( v14 )
    {
      v20 = (const WCHAR *)v14;
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)(v14 + 2 * v21) );
    }
    v52 = v20;
    v53 = 2 * v21 + 2;
    LODWORD(v21) = 0;
    v54 = 0;
    v22 = &pwsz;
    if ( v16 )
    {
      v22 = (const WCHAR *)v16;
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)(v16 + 2 * v21) );
    }
    v55 = v22;
    v56 = 2 * v21 + 2;
    v57 = 0;
    v62 = (char *)v5 + 8;
    v64 = (char *)v5 + 12;
    v68 = (char *)v5 + 20;
    v23 = *(_QWORD *)this;
    v58 = v5;
    v59 = 4LL;
    v60 = (char *)v5 + 4;
    v24 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(v23 + 64);
    v61 = 4LL;
    v63 = 4LL;
    v65 = 4LL;
    v66 = (char *)v5 + 16;
    v67 = 4LL;
    v69 = 4LL;
    if ( v24 == CAudioSession::GetIdentifier )
      v25 = *((_QWORD *)this + 107);
    else
      v25 = (__int64)v24(this);
    LODWORD(v26) = 0;
    if ( v25 )
    {
      v19 = (const WCHAR *)v25;
      v26 = -1LL;
      do
        ++v26;
      while ( *(_WORD *)(v25 + 2 * v26) );
    }
    v70 = v19;
    v71 = 2 * v26 + 2;
    v73 = v40;
    v72 = 0;
    v74 = 4LL;
    v44[1] = 5;
    v46 = off_1800CA048;
    v44[0] = ((unsigned int)&unk_1800A7DED - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v45 = 0LL;
    v47 = *(unsigned __int16 *)off_1800CA048;
    v49 = &unk_1800A7DF8;
    v48 = 2;
    v50 = 214;
    v51 = 1;
    EtwEventWriteTransfer(qword_1800CA060, v44, 0LL, 0LL, 12, &v46);
  }
  return 0LL;
}
