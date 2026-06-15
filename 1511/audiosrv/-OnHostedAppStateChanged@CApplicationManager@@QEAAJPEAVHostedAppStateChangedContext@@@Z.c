/*
 * XREFs of ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001E6C0
 * Callers:
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@UEAAXXZ @ 0x18002EFB0 (-Invoke@-$CGenericApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@UEAAXXZ.c)
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18003B460 (-EventWorkerThread@@YAKPEAX@Z.c)
 * Callees:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DE10 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F320 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_Ss @ 0x18009F900 (WPP_SF_Ss.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnHostedAppStateChanged(
        CApplicationManager *this,
        struct HostedAppStateChangedContext *a2)
{
  int v4; // ebx
  struct CApplication *v5; // rbp
  int v6; // r15d
  unsigned int v7; // edi
  const unsigned __int16 *v8; // rsi
  int Application; // edi
  int v10; // eax
  const char *v12; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-50h] BYREF
  char v14; // [rsp+40h] [rbp-48h]
  int v15; // [rsp+90h] [rbp+8h] BYREF
  struct CApplication *v16; // [rsp+98h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v12 = "HAC_INTERACTIVE";
    if ( !*((_DWORD *)a2 + 3) )
      v12 = "HAC_NON_INTERACTIVE";
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)v12);
  }
  v6 = *((_DWORD *)a2 + 3);
  v7 = *((_DWORD *)a2 + 2);
  v8 = *(const unsigned __int16 **)a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v14 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v15 = 0;
  Application = CApplicationManager::GetApplication(this, v8, v7, &v16, 1, &v15);
  if ( Application >= 0 )
  {
    v5 = v16;
    v10 = *((_DWORD *)v16 + 28);
    if ( v6 )
      *((_DWORD *)v16 + 28) |= 4u;
    else
      *((_DWORD *)v16 + 28) &= ~4u;
    Application = 0;
    if ( v15 || (v10 != 0) != (*((_DWORD *)v5 + 28) != 0) )
      v4 = 1;
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  if ( Application < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        48LL,
        &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
        (unsigned int)Application);
    }
  }
  else if ( v4 )
  {
    CApplicationManager::OnApplicationInteractivityChanged(this, v5);
  }
  return (unsigned int)Application;
}
