/*
 * XREFs of ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x18000E860
 * Callers:
 *     ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18000D930 (-Invoke@CAudioSessionVolumeChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     WPP_SF_Sgd @ 0x18006176C (WPP_SF_Sgd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnVolumeChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        float a3,
        char a4,
        struct _GUID *a5)
{
  int v5; // r8d
  int MediaEvent; // r14d
  CAudioSession *v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // esi
  HANDLE ProcessHeap; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // rbx
  GUID *v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  _WORD *v20; // rcx
  GUID v21; // xmm0
  __int64 v22; // r9
  __int16 v23; // ax
  HANDLE v24; // rax
  double v26; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v28; // [rsp+38h] [rbp-30h]

  MediaEvent = 0;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_02a005b273c630b7ddf937521d6439fa_Traceguids, 0LL);
      v9 = WPP_GLOBAL_Control;
    }
    if ( v9 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v9 + 28) & 0x40) != 0 && *((_BYTE *)v9 + 25) >= 4u )
    {
      v26 = a3;
      WPP_SF_Sgd(*((_QWORD *)v9 + 2), (_DWORD)a2, v5, 0, SLOBYTE(v26), a4);
    }
  }
  v28 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(v10 + 856) - 16LL);
    v12 = 2 * v11 + 2;
    v13 = 2 * v11 + 66;
    ProcessHeap = GetProcessHeap();
    v15 = HeapAlloc(ProcessHeap, 0, v13);
    v16 = v15;
    if ( v15 )
    {
      *v15 = v13;
      v17 = a5;
      v18 = 2147483646LL;
      if ( !a5 )
        v17 = &GUID_00000000_0000_0000_0000_000000000000;
      v19 = (unsigned __int64)v12 >> 1;
      v20 = v16 + 16;
      v21 = *v17;
      v16[1] = 1;
      *((float *)v16 + 12) = a3;
      *(GUID *)(v16 + 7) = v21;
      v16[6] = v12;
      *((_BYTE *)v16 + 52) = a4;
      v22 = *(_QWORD *)(*((_QWORD *)this + 9) + 856LL);
      if ( v19 - 1 > 0x7FFFFFFE )
      {
        if ( !v19 )
        {
LABEL_21:
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              30LL,
              &WPP_02a005b273c630b7ddf937521d6439fa_Traceguids,
              v16,
              *((_DWORD *)this + 20));
          }
          MediaEvent = GenerateMediaEvent(v16, *((unsigned int *)this + 20), v18, v22);
          v24 = GetProcessHeap();
          HeapFree(v24, 0, v16);
          if ( MediaEvent < 0 )
            AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnVolumeChanged", 0x45Fu, MediaEvent);
          goto LABEL_27;
        }
      }
      else
      {
        v18 = 2147483646 - v19;
        v22 -= (__int64)v20;
        while ( v18 + v19 )
        {
          v23 = *(_WORD *)((char *)v20 + v22);
          if ( !v23 )
            break;
          *v20++ = v23;
          if ( !--v19 )
            goto LABEL_30;
        }
        if ( v19 )
          goto LABEL_20;
LABEL_30:
        --v20;
      }
LABEL_20:
      *v20 = 0;
      goto LABEL_21;
    }
  }
LABEL_27:
  if ( v28 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)MediaEvent;
}
