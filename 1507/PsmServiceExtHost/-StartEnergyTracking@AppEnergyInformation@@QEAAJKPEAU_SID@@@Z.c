/*
 * XREFs of ?StartEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z @ 0x18004C8D4
 * Callers:
 *     ?StartTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z @ 0x18004CA2C (-StartTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInformationForUser@@@Z @ 0x180049C38 (-GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInfor.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyInformation::StartEnergyTracking(
        AppEnergyInformation *this,
        unsigned int a2,
        struct _SID *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v7; // eax
  int v8; // edi
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  struct AppEnergyInformationForUser *v11; // r14
  __int64 v12; // r15
  int v13; // eax
  AppEnergyInformation *v14; // rdx
  unsigned __int64 v15; // rcx
  char *v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v19; // [rsp+70h] [rbp+8h] BYREF
  struct AppEnergyInformationForUser *v20; // [rsp+88h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 304);
  v20 = 0LL;
  v19 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 304));
  v7 = AppEnergyInformation::GetOrCreateEnergyInformationForUser(this, a2, a3, &v20);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v11 = v20;
    if ( *(_DWORD *)v20 )
    {
      v8 = -2147024809;
      v10 = 810LL;
    }
    else
    {
      v12 = *((_QWORD *)this + 34);
      if ( v12 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, struct _SID *, _QWORD, AppEnergyInformation *, int *))(*(_QWORD *)v12 + 24LL))(
                v12,
                a3,
                *((_QWORD *)this + 30),
                this,
                &v19);
        v14 = (AppEnergyInformation *)*((_QWORD *)this + 30);
        v8 = v13;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_WORD *)v14 + v15) );
        if ( v14 == (AppEnergyInformation *)((char *)this + 256) )
          v16 = (char *)this + 270;
        else
          v16 = (char *)*((_QWORD *)this + 32);
        if ( v15 > (v16 - (char *)v14) >> 1 )
          __int2c();
        *((_QWORD *)this + 31) = (char *)v14 + 2 * v15;
        if ( v8 >= 0 )
        {
          *(_DWORD *)v11 = v19;
          goto LABEL_19;
        }
        v10 = 818LL;
      }
      else
      {
        v8 = -2147467263;
        v10 = 812LL;
      }
    }
    v9 = (unsigned int)v8;
  }
  else
  {
    v9 = (unsigned int)v7;
    v10 = 806LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v10,
    (__int64)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
    (const char *)v9);
LABEL_19:
  LeaveCriticalSection(v3);
  return (unsigned int)v8;
}
