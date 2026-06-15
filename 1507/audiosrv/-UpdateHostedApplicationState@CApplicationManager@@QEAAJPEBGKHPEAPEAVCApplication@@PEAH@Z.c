/*
 * XREFs of ?UpdateHostedApplicationState@CApplicationManager@@QEAAJPEBGKHPEAPEAVCApplication@@PEAH@Z @ 0x18001C660
 * Callers:
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001BCD0 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C820 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::UpdateHostedApplicationState(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        struct CApplication **a5,
        int *a6)
{
  int v10; // ebp
  int Application; // ebx
  struct CApplication *v12; // rdx
  int v13; // eax
  struct CApplication *v15[2]; // [rsp+30h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-28h] BYREF
  char v17; // [rsp+48h] [rbp-20h]
  int v18; // [rsp+70h] [rbp+8h] BYREF

  v15[1] = (struct CApplication *)-2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v18 = 0;
  v10 = 1;
  Application = CApplicationManager::GetApplication(this, a2, a3, v15, 1, &v18);
  if ( Application >= 0 )
  {
    v12 = v15[0];
    v13 = *((_DWORD *)v15[0] + 28);
    if ( a4 )
      *((_DWORD *)v15[0] + 28) |= 4u;
    else
      *((_DWORD *)v15[0] + 28) &= ~4u;
    Application = 0;
    if ( !v18 && (v13 != 0) == (*((_DWORD *)v12 + 28) != 0) )
      v10 = 0;
    *a6 = v10;
    *a5 = v12;
  }
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)Application;
}
