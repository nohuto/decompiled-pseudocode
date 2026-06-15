/*
 * XREFs of ?StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x140005550
 * Callers:
 *     ?StopStream@CStreamGroup@@UEAAJ_K@Z @ 0x140002310 (-StopStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140005348 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::StopStreamGroup(
        CSystemAudioDeviceSharedBase *this,
        struct IStreamGroupInternal *a2)
{
  _QWORD *v3; // rcx
  int v4; // eax
  int v5; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 104);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  --*((_DWORD *)this + 11);
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      32LL,
      &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids,
      *((unsigned int *)this + 11));
    v3 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 11) )
  {
    v5 = 0;
  }
  else
  {
    v4 = CSystemAudioDeviceSharedBase::SetGraphState((__int64)this - 280, 1);
    v3 = WPP_GLOBAL_Control;
    v5 = v4;
  }
  if ( v5 < 0 )
  {
    if ( v3 != &WPP_GLOBAL_Control && (*((_DWORD *)v3 + 7) & 0x200) != 0 && *((_BYTE *)v3 + 25) >= 2u )
      WPP_SF_D(v3[2], 33LL, &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids, (unsigned int)v5);
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::StopStreamGroup", 0x2E7u, v5);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v5;
}
