/*
 * XREFs of ?GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEA_K0@Z @ 0x14002A9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400079C0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetClientReleaseEvent(
        CSystemAudioDeviceSharedBase *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  int v8; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 176));
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 38)
                                                                                         + 32LL))(
         *((_QWORD *)this + 38),
         a2,
         a3,
         a4);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        (__int64)&WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids,
        v8);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetClientReleaseEvent", 215, v8);
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
