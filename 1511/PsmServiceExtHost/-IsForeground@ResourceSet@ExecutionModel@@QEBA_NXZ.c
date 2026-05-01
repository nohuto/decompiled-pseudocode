/*
 * XREFs of ?IsForeground@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18002AB30
 * Callers:
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18003C504 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExecutionModel::ResourceSet::IsForeground(ExecutionModel::ResourceSet *this)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  _BOOL8 result; // rax

  result = 1;
  if ( (*((_BYTE *)this + 1434) & 0x40) == 0 )
  {
    v1 = *((int *)this + 352);
    if ( (unsigned int)v1 > 0x29 )
      return 0;
    v2 = 0x24704100001LL;
    if ( !_bittest64(&v2, v1) )
      return 0;
  }
  return result;
}
