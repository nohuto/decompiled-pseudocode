/*
 * XREFs of ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180010340
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x18000EA40 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180013A50 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180076FF0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x18000B484 (-GetNextValue@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrait.c)
 *     ?GetEndpointId@CAudioSession@@UEAAPEBGXZ @ 0x180010D00 (-GetEndpointId@CAudioSession@@UEAAPEBGXZ.c)
 *     ?IsMuted@CProcess@@UEAAHXZ @ 0x180010ED0 (-IsMuted@CProcess@@UEAAHXZ.c)
 *     ?GetLayoutPolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x180010EF0 (-GetLayoutPolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x180010F00 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x180010FB0 (-GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ.c)
 *     ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x180011040 (-GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S_guid_ @ 0x18007C0DC (WPP_SF_S_guid_.c)
 *     WPP_SF_S_guid_g @ 0x18007C17C (WPP_SF_S_guid_g.c)
 *     WPP_SF_Sq @ 0x18007C2E0 (WPP_SF_Sq.c)
 */

__int64 __fastcall CAudioSession::GetCurrentPolicyGain(
        CAudioSession *this,
        __int64 *a2,
        bool *a3,
        struct SessionPolicyGains *a4,
        __int64 *a5)
{
  float ScreenReaderPolicyVolume; // xmm0_4
  __int64 *v8; // r14
  float v10; // xmm6_4
  __int64 (__fastcall *v11)(CProcess *__hidden); // rbp
  int IsMuted; // eax
  float (__fastcall *v13)(CProcess *__hidden); // rbp
  float (__fastcall *v14)(CProcess *__hidden); // rbp
  const unsigned __int16 *(__fastcall *v15)(CAudioSession *__hidden); // rbx
  const unsigned __int16 *EndpointId; // rax
  float (__fastcall *v17)(CProcess *__hidden, const unsigned __int16 *); // r14
  const unsigned __int16 *(__fastcall *v18)(CAudioSession *__hidden); // rbx
  const unsigned __int16 *v19; // rax
  CProcess *v20; // rbx
  float (__fastcall *v21)(CProcess *__hidden, const unsigned __int16 *); // rdi
  __int64 result; // rax
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 NextValue; // rax
  __int64 v28; // r13
  __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // [rsp+80h] [rbp+8h] BYREF
  __int64 v34; // [rsp+88h] [rbp+10h]

  v8 = a5;
  if ( a2 )
    *a5 = *a2;
  else
    *a5 = 0LL;
  *a3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
  if ( *((_QWORD *)this + 49)
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    ScreenReaderPolicyVolume = *(float *)&DOUBLE_1_0;
    WPP_SF_Sq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      60,
      (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      *((_QWORD *)this + 88),
      SLOBYTE(DOUBLE_1_0));
  }
  v10 = FLOAT_1_0;
  if ( *((_QWORD *)this + 49) )
  {
    v23 = *((_DWORD *)this + 100);
    v24 = 0LL;
    if ( v23 )
    {
      v25 = *((_QWORD *)this + 48);
      while ( !*(_QWORD *)(v25 + 8 * v24) )
      {
        v24 = (unsigned int)(v24 + 1);
        if ( (unsigned int)v24 >= v23 )
          goto LABEL_43;
      }
      v26 = *(_QWORD *)(v25 + 8 * v24);
    }
    else
    {
LABEL_43:
      v26 = 0LL;
    }
    v33 = v26;
    while ( v33 )
    {
      NextValue = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
                    (__int64)this + 384,
                    &v33);
      v28 = *(_QWORD *)NextValue;
      v29 = *(_QWORD *)(*(_QWORD *)NextValue + 16LL) - MutePolicyGuid;
      v34 = v28 + 16;
      if ( !v29 )
        v29 = *(_QWORD *)(v28 + 24) - *((_QWORD *)&MutePolicyGuid + 1);
      if ( v29 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 24LL))(v28) )
        {
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_S_guid_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              62,
              v31,
              *((_QWORD *)this + 88),
              v34);
          }
          *a3 = 1;
        }
        else
        {
          ScreenReaderPolicyVolume = *(float *)(v28 + 48);
          if ( v10 > ScreenReaderPolicyVolume )
          {
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
            {
              WPP_SF_S_guid_g(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                v30,
                v31,
                *((_QWORD *)this + 88),
                v28 + 16,
                SLOBYTE(ScreenReaderPolicyVolume));
            }
            v32 = *(_QWORD *)(v28 + 40);
            v10 = *(float *)(v28 + 48);
            if ( v32 > *v8 )
              *v8 = v32;
          }
        }
      }
      else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
             && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_S_guid_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          61,
          v28 + 16,
          *((_QWORD *)this + 88),
          v28 + 16);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
  *(float *)a4 = v10;
  *((_DWORD *)a4 + 1) = 1065353216;
  v11 = *(__int64 (__fastcall **)(CProcess *__hidden))(**((_QWORD **)this + 89) + 112LL);
  if ( v11 == CProcess::IsMuted )
    IsMuted = CProcess::IsMuted(*((CProcess **)this + 89));
  else
    IsMuted = v11(*((CProcess **)this + 89));
  if ( IsMuted )
    *((_DWORD *)a4 + 1) = 0;
  v13 = *(float (__fastcall **)(CProcess *__hidden))(**((_QWORD **)this + 89) + 184LL);
  if ( v13 == CProcess::GetScreenReaderPolicyVolume )
    ScreenReaderPolicyVolume = CProcess::GetScreenReaderPolicyVolume(*((CProcess **)this + 89));
  else
    v13(*((CProcess **)this + 89));
  *((float *)a4 + 2) = ScreenReaderPolicyVolume;
  v14 = *(float (__fastcall **)(CProcess *__hidden))(**((_QWORD **)this + 89) + 192LL);
  if ( v14 == CProcess::GetSessionDisplayPolicyVolume )
    ScreenReaderPolicyVolume = CProcess::GetSessionDisplayPolicyVolume(*((CProcess **)this + 89));
  else
    v14(*((CProcess **)this + 89));
  *((float *)a4 + 3) = ScreenReaderPolicyVolume;
  v15 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)this + 72LL);
  if ( v15 == CAudioSession::GetEndpointId )
    EndpointId = CAudioSession::GetEndpointId(this);
  else
    EndpointId = v15(this);
  v17 = *(float (__fastcall **)(CProcess *__hidden, const unsigned __int16 *))(**((_QWORD **)this + 89) + 200LL);
  if ( v17 == CProcess::GetEndpointVolumeOverridePolicyVolume )
    ScreenReaderPolicyVolume = CProcess::GetEndpointVolumeOverridePolicyVolume(*((CProcess **)this + 89), EndpointId);
  else
    v17(*((CProcess **)this + 89), EndpointId);
  *((float *)a4 + 4) = ScreenReaderPolicyVolume;
  v18 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)this + 72LL);
  if ( v18 == CAudioSession::GetEndpointId )
    v19 = CAudioSession::GetEndpointId(this);
  else
    v19 = v18(this);
  v20 = (CProcess *)*((_QWORD *)this + 89);
  v21 = *(float (__fastcall **)(CProcess *__hidden, const unsigned __int16 *))(*(_QWORD *)v20 + 208LL);
  if ( v21 == CProcess::GetLayoutPolicyVolume )
    ScreenReaderPolicyVolume = CProcess::GetLayoutPolicyVolume(v20, v19);
  else
    v21(v20, v19);
  result = 0LL;
  *((float *)a4 + 5) = ScreenReaderPolicyVolume;
  return result;
}
