/*
 * XREFs of ?empty@?$_Dlist@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@QEBA_NXZ @ 0x180004FF0
 * Callers:
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180014D40 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall utl::_Dlist<utl::_DlistNode<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::empty(
        _QWORD *a1)
{
  return *a1 == (_QWORD)a1;
}
