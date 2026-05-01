/*
 * XREFs of ?GetAggregateCpuCategory@ModernActivationResourceInfo@ExecutionModel@@QEBA?AW4CpuCategory@2@PEAUIResourceSet@2@PEAK@Z @ 0x18002EF10
 * Callers:
 *     ?UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x1800390F0 (-UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 * Callees:
 *     ?GetCpuCategory@ModernActivationResourceInfo@ExecutionModel@@SA?AW4CpuCategory@2@PEAVResourceSet@2@@Z @ 0x180005000 (-GetCpuCategory@ModernActivationResourceInfo@ExecutionModel@@SA-AW4CpuCategory@2@PEAVResourceSet.c)
 */

__int64 __fastcall ExecutionModel::ModernActivationResourceInfo::GetAggregateCpuCategory(
        __int64 a1,
        __int64 a2,
        int *a3)
{
  unsigned int v3; // edi
  _QWORD *v4; // r15
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  int CpuCategory; // eax
  int v12; // ecx

  v3 = 0;
  v4 = (_QWORD *)(a1 + 24);
  v5 = *(_QWORD **)(a1 + 24);
  v6 = 0LL;
  while ( v5 != v4 )
  {
    v9 = v5[2];
    if ( v9 )
      v10 = v9 + 1368;
    else
      v10 = 0LL;
    if ( v10 != a2 )
    {
      CpuCategory = ExecutionModel::ModernActivationResourceInfo::GetCpuCategory(v9);
      if ( CpuCategory > (int)v3 )
        v3 = CpuCategory;
      v6 += *(_QWORD *)(v5[2] + 200LL);
    }
    v5 = (_QWORD *)*v5;
  }
  if ( a3 )
  {
    v12 = 100;
    if ( v6 < 0x64 )
      v12 = v6;
    *a3 = v12;
  }
  return v3;
}
