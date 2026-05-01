/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_9ae7f4b71f8554f9e67f674bf49c4d79_@@@details@wil@@QEAA@XZ @ 0x18001ECF4
 * Callers:
 *     _CSingleViewShellExperience::ShowView_::_1_::dtor$0 @ 0x1800318C6 (_CSingleViewShellExperience--ShowView_--_1_--dtor$0.c)
 * Callees:
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18001EBE0 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn<_lambda_9ae7f4b71f8554f9e67f674bf49c4d79_>::~ScopeExitFn<_lambda_9ae7f4b71f8554f9e67f674bf49c4d79_>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CSingleViewShellExperience::UnboostDiskIo(*(CSingleViewShellExperience **)a1);
  }
}
