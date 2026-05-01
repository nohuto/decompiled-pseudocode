/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_a7f15287e5878abd1220aaf01e051b7a_@@@details@wil@@QEAA@XZ @ 0x18001ECC0
 * Callers:
 *     _CSingleViewShellExperience::Hide_::_1_::dtor$0 @ 0x1800318F6 (_CSingleViewShellExperience--Hide_--_1_--dtor$0.c)
 * Callees:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18001EA90 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18001EBE0 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn<_lambda_a7f15287e5878abd1220aaf01e051b7a_>::~ScopeExitFn<_lambda_a7f15287e5878abd1220aaf01e051b7a_>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CSingleViewShellExperience::UnboostPriority(*(_QWORD *)a1, 1);
    CSingleViewShellExperience::UnboostDiskIo(*(CSingleViewShellExperience **)a1);
  }
}
