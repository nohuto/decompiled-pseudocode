/*
 * XREFs of ?StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x1400055F0
 * Callers:
 *     ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x140002410 (-StartStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140005348 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::StartStreamGroup(
        CSystemAudioDeviceSharedBase *this,
        struct IStreamGroupInternal *a2)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 104);
  v3 = 0;
  v8 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  ++*((_DWORD *)this + 11);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      30LL,
      &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids,
      *((unsigned int *)this + 11));
  }
  if ( *((_DWORD *)this + 11) == 1 )
  {
    v4 = 3;
    if ( *((_DWORD *)this + 8) )
      v4 = 2;
    v5 = CSystemAudioDeviceSharedBase::SetGraphState((__int64)this - 280, v4);
    v3 = v5;
    if ( v5 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          31LL,
          &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids,
          (unsigned int)v5);
      }
      AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::StartStreamGroup", 0x2CAu, v3);
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
