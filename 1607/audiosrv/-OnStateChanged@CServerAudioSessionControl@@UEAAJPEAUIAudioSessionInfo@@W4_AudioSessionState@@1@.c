/*
 * XREFs of ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000EBF0
 * Callers:
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180010FE0 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnStateChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  int MediaEvent; // r14d
  __int64 v7; // rax
  int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // esi
  HANDLE ProcessHeap; // rax
  _DWORD *v12; // rax
  void *v13; // rbx
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  _WORD *v17; // rax
  __int16 v18; // cx
  HANDLE v19; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v22; // [rsp+38h] [rbp-20h]

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_02a005b273c630b7ddf937521d6439fa_Traceguids, 0LL);
  }
  v22 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(v7 + 856) - 16LL);
    v9 = 2 * v8 + 2;
    v10 = 2 * v8 + 66;
    ProcessHeap = GetProcessHeap();
    v12 = HeapAlloc(ProcessHeap, 0, v10);
    v13 = v12;
    if ( !v12 )
    {
      MediaEvent = -2147024882;
      goto LABEL_24;
    }
    *v12 = v10;
    v14 = 2147483646LL;
    v12[1] = 8;
    v12[6] = v9;
    v12[12] = a4;
    v15 = (unsigned __int64)v9 >> 1;
    v16 = *(_QWORD *)(*((_QWORD *)this + 9) + 856LL);
    v17 = v12 + 16;
    if ( v15 - 1 > 0x7FFFFFFE )
    {
      if ( !v15 )
        goto LABEL_15;
    }
    else
    {
      v14 = 2147483646 - v15;
      v16 -= (__int64)v17;
      while ( v14 + v15 )
      {
        v18 = *(_WORD *)((char *)v17 + v16);
        if ( !v18 )
          break;
        *v17++ = v18;
        if ( !--v15 )
          goto LABEL_25;
      }
      if ( v15 )
        goto LABEL_14;
LABEL_25:
      --v17;
    }
LABEL_14:
    *v17 = 0;
LABEL_15:
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        25LL,
        &WPP_02a005b273c630b7ddf937521d6439fa_Traceguids,
        v13,
        *((_DWORD *)this + 20));
    }
    MediaEvent = GenerateMediaEvent(v13, *((unsigned int *)this + 20), v14, v16);
    v19 = GetProcessHeap();
    HeapFree(v19, 0, v13);
    if ( MediaEvent >= 0 )
      goto LABEL_20;
LABEL_24:
    AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnStateChanged", 0x305u, MediaEvent);
  }
LABEL_20:
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)MediaEvent;
}
