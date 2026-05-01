/*
 * XREFs of ?ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z @ 0x18000E660
 * Callers:
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x180011B24 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180040C3C (-ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::ReturnResourceToParent(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1344);
  if ( !_bittest64(&result, a2) )
  {
    result = *(_QWORD *)(a1 + 184);
    *(_QWORD *)(result + 24LL * (int)a2 + 200) += a3;
  }
  return result;
}
