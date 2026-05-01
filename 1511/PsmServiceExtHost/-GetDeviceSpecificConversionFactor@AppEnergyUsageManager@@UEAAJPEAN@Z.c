/*
 * XREFs of ?GetDeviceSpecificConversionFactor@AppEnergyUsageManager@@UEAAJPEAN@Z @ 0x180050600
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800531B0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyUsageManager::GetDeviceSpecificConversionFactor(AppEnergyUsageManager *this, double *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned __int64 v4; // r9
  __int64 v6; // rsi
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v2 = -2147024809;
    v3 = 537LL;
LABEL_3:
    v4 = v2;
LABEL_4:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v3,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)v4,
      v8);
    return v2;
  }
  *a2 = 0.0;
  v6 = *((_QWORD *)this + 14);
  if ( !v6 )
  {
    v2 = -2147467263;
    v3 = 540LL;
    goto LABEL_3;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, double *))(*(_QWORD *)v6 + 72LL))(*((_QWORD *)this + 14), a2);
  v2 = v7;
  if ( v7 < 0 )
  {
    v4 = (unsigned int)v7;
    v3 = 542LL;
    goto LABEL_4;
  }
  return 0LL;
}
