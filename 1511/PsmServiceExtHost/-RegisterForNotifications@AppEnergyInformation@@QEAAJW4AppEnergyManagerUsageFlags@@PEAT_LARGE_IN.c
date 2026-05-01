/*
 * XREFs of ?RegisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAT_LARGE_INTEGER@@1@Z @ 0x1800529E0
 * Callers:
 *     ?RegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@PEAT_LARGE_INTEGER@@2@Z @ 0x180052920 (-RegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFla.c)
 * Callees:
 *     ?CreateEnergyUsageWnfStates@AppEnergyInformation@@IEAAJPEAUEnergyNotificationStates@@@Z @ 0x180050054 (-CreateEnergyUsageWnfStates@AppEnergyInformation@@IEAAJPEAUEnergyNotificationStates@@@Z.c)
 *     ?IsValid@EnergyNotificationStates@@QEAA_NXZ @ 0x180051BE8 (-IsValid@EnergyNotificationStates@@QEAA_NXZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800531B0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyInformation::RegisterForNotifications(__int64 a1, char a2, _QWORD *a3, _QWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v8; // edi
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rsi
  AppEnergyInformation *v13; // rcx
  int EnergyUsageWnfStates; // eax
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 304);
  v8 = a2 & 1;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 304));
  if ( !a3 )
  {
    v9 = -2147024809;
    v10 = 1078LL;
    v11 = 2147942487LL;
LABEL_14:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v10,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)v11,
      v16);
    goto LABEL_11;
  }
  if ( !a4 )
  {
    v9 = -2147024809;
    v10 = 1079LL;
    v11 = 2147942487LL;
    goto LABEL_14;
  }
  if ( v8 )
    v12 = a1 + 48;
  else
    v12 = a1 + 68;
  if ( (unsigned __int8)EnergyNotificationStates::IsValid((EnergyNotificationStates *)v12) )
  {
    ++*(_DWORD *)(v12 + 16);
  }
  else
  {
    EnergyUsageWnfStates = AppEnergyInformation::CreateEnergyUsageWnfStates(v13, (struct EnergyNotificationStates *)v12);
    v9 = EnergyUsageWnfStates;
    if ( EnergyUsageWnfStates < 0 )
    {
      v11 = (unsigned int)EnergyUsageWnfStates;
      v10 = 1096LL;
      goto LABEL_14;
    }
  }
  v9 = 0;
  *a3 = *(_QWORD *)v12;
  *a4 = *(_QWORD *)(v12 + 8);
LABEL_11:
  LeaveCriticalSection(v4);
  return v9;
}
