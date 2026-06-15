/*
 * XREFs of ?ResetEndpoint@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x14002B220
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400079C0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::ResetEndpoint(CSystemAudioDeviceSharedBase *this)
{
  int v2; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 176));
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 38) + 104LL))(*((_QWORD *)this + 38));
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x19u,
        (__int64)&WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids,
        v2);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::ResetEndpoint", 514, v2);
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v2;
}
