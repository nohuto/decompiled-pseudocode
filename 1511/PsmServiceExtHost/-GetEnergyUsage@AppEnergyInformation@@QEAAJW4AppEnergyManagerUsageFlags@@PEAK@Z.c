/*
 * XREFs of ?GetEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x180050694
 * Callers:
 *     ?GetCurrentEnergyUsage@AppEnergyInformation@@IEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x18005049C (-GetCurrentEnergyUsage@AppEnergyInformation@@IEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z.c)
 *     ?QueryApplicationEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x180052380 (-QueryApplicationEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@PEAK@.c)
 * Callees:
 *     ?GetCurrentEnergyUsage@AppEnergyInformation@@IEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x18005049C (-GetCurrentEnergyUsage@AppEnergyInformation@@IEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z.c)
 *     ?GetHistoricalEnergyUsage@HistoricalEnergyTracker@@QEAAKXZ @ 0x1800509A0 (-GetHistoricalEnergyUsage@HistoricalEnergyTracker@@QEAAKXZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800531B0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyInformation::GetEnergyUsage(__int64 a1, int a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v7; // ebp
  int v8; // r15d
  int CurrentEnergyUsage; // eax
  int *v10; // rsi
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  int v12; // esi
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 304);
  v7 = 0;
  v8 = a2 & 1;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 304));
  if ( (a2 & 2) != 0 )
  {
    CurrentEnergyUsage = AppEnergyInformation::GetCurrentEnergyUsage((AppEnergyInformation *)a1, a2, (__int64)a3);
    v7 = CurrentEnergyUsage;
    if ( CurrentEnergyUsage < 0 )
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        (void *)0x405,
        (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
        (const char *)(unsigned int)CurrentEnergyUsage,
        v14);
  }
  else
  {
    if ( v8 )
      v10 = (int *)(a1 + 160);
    else
      v10 = (int *)(a1 + 88);
    if ( (a2 & 4) != 0 )
    {
      *a3 = HistoricalEnergyTracker::GetHistoricalEnergyUsage((HistoricalEnergyTracker *)v10);
    }
    else
    {
      v11 = (struct _RTL_CRITICAL_SECTION *)(v10 + 8);
      EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 8));
      v12 = *v10;
      LeaveCriticalSection(v11);
      *a3 = v12;
    }
  }
  LeaveCriticalSection(v3);
  return v7;
}
