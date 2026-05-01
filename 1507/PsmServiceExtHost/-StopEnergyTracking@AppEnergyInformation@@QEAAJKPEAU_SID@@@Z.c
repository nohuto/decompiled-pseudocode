/*
 * XREFs of ?StopEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z @ 0x18004CACC
 * Callers:
 *     ?StopTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z @ 0x18004CBB8 (-StopTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInformationForUser@@@Z @ 0x180049C38 (-GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInfor.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyInformation::StopEnergyTracking(
        AppEnergyInformation *this,
        unsigned int a2,
        struct _SID *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  struct AppEnergyInformationForUser *v10; // r14
  __int64 v11; // rsi
  unsigned __int64 v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct AppEnergyInformationForUser *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 304);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 304));
  v7 = AppEnergyInformation::GetOrCreateEnergyInformationForUser(this, a2, a3, &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 837LL;
LABEL_10:
    v12 = (unsigned int)v7;
    goto LABEL_11;
  }
  v10 = v15;
  if ( !*(_DWORD *)v15 )
  {
    v8 = -2147024809;
    v9 = 841LL;
LABEL_7:
    v12 = v8;
LABEL_11:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v9,
      (__int64)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)v12);
    goto LABEL_12;
  }
  v11 = *((_QWORD *)this + 34);
  if ( !v11 )
  {
    v8 = -2147467263;
    v9 = 843LL;
    goto LABEL_7;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11 + 40LL))(*((_QWORD *)this + 34), *(unsigned int *)v15);
  *(_DWORD *)v10 = 0;
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 849LL;
    goto LABEL_10;
  }
LABEL_12:
  LeaveCriticalSection(v3);
  return v8;
}
