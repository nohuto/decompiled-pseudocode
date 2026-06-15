/*
 * XREFs of ?DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x140005470
 * Callers:
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140002000 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     ?IsActive@CStreamGroup@@UEAA_NXZ @ 0x140003130 (-IsActive@CStreamGroup@@UEAA_NXZ.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140005348 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::DisconnectStreamGroup(
        CSystemAudioDeviceSharedBase *this,
        struct IStreamGroupInternal *a2)
{
  _BOOL8 (__fastcall *v4)(CStreamGroup *); // rax
  bool IsActive; // al
  _QWORD *v6; // rcx
  int v7; // eax
  int v8; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 104);
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = *(_BOOL8 (__fastcall **)(CStreamGroup *))(*(_QWORD *)a2 + 24LL);
  if ( v4 == CStreamGroup::IsActive )
    IsActive = CStreamGroup::IsActive(a2);
  else
    IsActive = v4(a2);
  if ( IsActive )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *, struct IStreamGroupInternal *))(*(_QWORD *)this + 80LL))(
      this,
      a2);
  --*((_DWORD *)this + 10);
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      34LL,
      &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids,
      *((unsigned int *)this + 10));
    v6 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 10) || !*((_DWORD *)this + 8) )
  {
    v8 = 0;
  }
  else
  {
    v7 = CSystemAudioDeviceSharedBase::SetGraphState((__int64)this - 280, 0);
    v6 = WPP_GLOBAL_Control;
    v8 = v7;
  }
  if ( v8 < 0 )
  {
    if ( v6 != &WPP_GLOBAL_Control && (*((_DWORD *)v6 + 7) & 0x200) != 0 && *((_BYTE *)v6 + 25) >= 2u )
      WPP_SF_D(v6[2], 35LL, &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids, (unsigned int)v8);
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::DisconnectStreamGroup", 0x305u, v8);
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
