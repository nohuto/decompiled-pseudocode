/*
 * XREFs of ?RegisterForPackageEnergyStateChangeNotifications@AppEnergyUsageManager@@UEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1800216C0
 * Callers:
 *     Srv_RegisterForPackageEnergyStateChangeNotifications @ 0x180021670 (Srv_RegisterForPackageEnergyStateChangeNotifications.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyUsageManager::RegisterForPackageEnergyStateChangeNotifications(
        AppEnergyUsageManager *this,
        union _LARGE_INTEGER *a2)
{
  unsigned int v4; // edi
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v4 = 0;
  if ( a2 )
  {
    *a2 = *(union _LARGE_INTEGER *)((char *)this + 64);
  }
  else
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)0x208,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)0x80070057LL,
      v6);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  return v4;
}
