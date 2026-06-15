/*
 * XREFs of ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x1800044A0
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18003B460 (-EventWorkerThread@@YAKPEAX@Z.c)
 * Callees:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DE10 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F320 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppStateChangedWorkItem::Invoke(CAppStateChangedWorkItem *this)
{
  int v2; // ebx
  struct CApplication *v3; // r14
  unsigned int v4; // ebp
  int v5; // r15d
  const unsigned __int16 *v6; // rdi
  CApplicationManager *v7; // rsi
  int Application; // esi
  int v9; // r8d
  int v10; // edx
  BOOL v11; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-40h] BYREF
  char v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+80h] [rbp+8h] BYREF
  struct CApplication *v15; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      20,
      (unsigned int)&WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      *((_QWORD *)this + 1),
      *((_DWORD *)this + 4));
  }
  v4 = *((_DWORD *)this + 5);
  v5 = *((_DWORD *)this + 4);
  v6 = (const unsigned __int16 *)*((_QWORD *)this + 1);
  v7 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v13 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v14 = 0;
  Application = CApplicationManager::GetApplication(v7, v6, v4, &v15, 1, &v14);
  if ( Application >= 0 )
  {
    v3 = v15;
    v9 = *((_DWORD *)v15 + 28);
    if ( v5 )
      *((_DWORD *)v15 + 28) |= 2u;
    else
      *((_DWORD *)v15 + 28) &= ~2u;
    v10 = *((_DWORD *)v3 + 28);
    v11 = (v9 != 0) != (v10 != 0);
    if ( (((unsigned __int8)v9 ^ (unsigned __int8)v10) & 2) != 0 && !v5 )
      *((_QWORD *)v3 + 63) = GetTickCount64();
    if ( v14 || v11 )
      v2 = 1;
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  if ( Application < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        21LL,
        &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
        (unsigned int)Application);
    }
  }
  else if ( v2 )
  {
    CApplicationManager::OnApplicationInteractivityChanged(g_ApplicationManager, v3);
  }
}
