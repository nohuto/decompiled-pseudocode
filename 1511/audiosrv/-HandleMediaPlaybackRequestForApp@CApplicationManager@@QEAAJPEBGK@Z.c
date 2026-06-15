/*
 * XREFs of ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBGK@Z @ 0x18009E8F0
 * Callers:
 *     ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x1800A43E0 (-Invoke@CTransportControlRouterWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG@Z @ 0x18009D12C (-TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG@Z.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x18009E84C (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::HandleMediaPlaybackRequestForApp(
        CApplicationManager *this,
        wchar_t *a2,
        DWORD a3)
{
  unsigned int v5; // ebx
  const wchar_t **ActiveMediaAppById; // rax
  CApplicationManager *v7; // rcx
  int active; // eax
  LPCRITICAL_SECTION v10; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  v5 = 0;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&v10,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24));
  if ( a2 && (ActiveMediaAppById = (const wchar_t **)TsSessionIdGetActiveMediaAppById(a3, a2)) != 0LL )
  {
    active = CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(v7, ActiveMediaAppById);
    v5 = active;
    if ( active < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x26u,
        (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
        active);
    }
  }
  else if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids, a2);
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
  return v5;
}
