/*
 * XREFs of ?GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z @ 0x14002AF00
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400079C0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?EnableMMCSS@CSystemAudioDeviceSharedBase@@IEAAJXZ @ 0x14002A8E8 (-EnableMMCSS@CSystemAudioDeviceSharedBase@@IEAAJXZ.c)
 *     WPP_SF_ii @ 0x14002B318 (WPP_SF_ii.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetPositionForOffload(
        CSystemAudioDeviceSharedBase *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 176));
  CSystemAudioDeviceSharedBase::EnableMMCSS(this);
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 38) + 48LL))(
         *((_QWORD *)this + 38),
         a2,
         a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x15u,
        (__int64)&WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids,
        v6);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetPositionForOffload", 393, v7);
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ii(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids, *a2, *a3);
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
