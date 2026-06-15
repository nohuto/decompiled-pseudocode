/*
 * XREFs of ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBGK@Z @ 0x1800A17A8
 * Callers:
 *     ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x1800A6FB0 (-Invoke@CTransportControlRouterWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG@Z @ 0x18009FFCC (-TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG@Z.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x1800A1710 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
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
  if ( a2 && (ActiveMediaAppById = (const wchar_t **)TsSessionIdGetActiveMediaAppById(a3, (char *)a2)) != 0LL )
  {
    active = CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(v7, ActiveMediaAppById);
    v5 = active;
    if ( active < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x26u,
        (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
        active);
    }
  }
  else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x25u,
      (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
      a2);
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
  return v5;
}
