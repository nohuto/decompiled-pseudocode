/*
 * XREFs of ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180002AD0
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18003FA70 (-EventWorkerThread@@YAKPEAX@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001BB50 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C820 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppStateChangedWorkItem::Invoke(CAppStateChangedWorkItem *this)
{
  BOOL v2; // r14d
  struct CApplication *v3; // rbp
  unsigned int v4; // esi
  int v5; // r15d
  const unsigned __int16 *v6; // rbx
  CApplicationManager *v7; // rdi
  int Application; // ebx
  int v9; // r8d
  int v10; // edx
  BOOL v11; // edi
  int v12; // [rsp+20h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-40h] BYREF
  char v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+80h] [rbp+8h] BYREF
  struct CApplication *v16; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
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
  v14 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v15 = 0;
  Application = CApplicationManager::GetApplication(v7, v6, v4, &v16, 1, &v15);
  if ( Application >= 0 )
  {
    v3 = v16;
    v9 = *((_DWORD *)v16 + 28);
    if ( v5 )
      *((_DWORD *)v16 + 28) |= 2u;
    else
      *((_DWORD *)v16 + 28) &= ~2u;
    v10 = *((_DWORD *)v3 + 28);
    v11 = (v9 != 0) != (v10 != 0);
    if ( (((unsigned __int8)v9 ^ (unsigned __int8)v10) & 2) != 0 && !v5 )
      *((_QWORD *)v3 + 63) = GetTickCount();
    v2 = v15 || v11;
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  if ( Application < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        21LL,
        &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
        (unsigned int)Application,
        v12);
    }
  }
  else if ( v2 )
  {
    CApplicationManager::OnApplicationInteractivityChanged(g_ApplicationManager, v3);
  }
}
