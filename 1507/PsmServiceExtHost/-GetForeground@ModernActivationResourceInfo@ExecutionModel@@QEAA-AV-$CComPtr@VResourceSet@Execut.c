/*
 * XREFs of ?GetForeground@ModernActivationResourceInfo@ExecutionModel@@QEAA?AV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@XZ @ 0x180035D2C
 * Callers:
 *     ?FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMILY@@_KPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@@Z @ 0x180035404 (-FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMIL.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x1800355D4 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 */

_QWORD *__fastcall ExecutionModel::ModernActivationResourceInfo::GetForeground(_QWORD *a1, _QWORD *a2)
{
  _QWORD *i; // rdx
  __int64 v4; // r9
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rax

  i = (_QWORD *)*a1;
  v4 = 0x24704100001LL;
  while ( i != a1 )
  {
    v5 = i[2];
    if ( (*(_BYTE *)(v5 + 1434) & 0x40) != 0 || *(_DWORD *)(v5 + 1408) <= 0x29u && _bittest64(&v4, *(int *)(v5 + 1408)) )
    {
LABEL_7:
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        a2,
        i[2]);
      return a2;
    }
    i = (_QWORD *)*i;
  }
  v6 = a1 + 3;
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    v7 = i[2];
    if ( (*(_BYTE *)(v7 + 1434) & 0x40) != 0 || *(_DWORD *)(v7 + 1408) <= 0x29u && _bittest64(&v4, *(int *)(v7 + 1408)) )
      goto LABEL_7;
  }
  *a2 = 0LL;
  return a2;
}
