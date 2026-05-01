/*
 * XREFs of ?GetSponsor@ModernActivationResourceInfo@ExecutionModel@@QEAA?AV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@XZ @ 0x18003CD30
 * Callers:
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18003C504 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 */

_QWORD *__fastcall ExecutionModel::ModernActivationResourceInfo::GetSponsor(_QWORD *a1, _QWORD *a2)
{
  _QWORD *i; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  _QWORD *j; // rdx

  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    v4 = i[2];
    if ( *(int *)(v4 + 1664) < 101 )
    {
LABEL_5:
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        a2,
        v4);
      return a2;
    }
  }
  v5 = a1 + 3;
  for ( j = (_QWORD *)*v5; j != v5; j = (_QWORD *)*j )
  {
    v4 = j[2];
    if ( *(int *)(v4 + 1664) < 101 )
      goto LABEL_5;
  }
  *a2 = 0LL;
  return a2;
}
