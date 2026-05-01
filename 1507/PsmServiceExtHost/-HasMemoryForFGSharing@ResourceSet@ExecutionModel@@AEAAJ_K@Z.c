/*
 * XREFs of ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x180010074
 * Callers:
 *     ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000FFB0 (-AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMILY@@_KPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@@Z @ 0x180035404 (-FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMIL.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x1800355D4 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     ?IsReleased@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x180010750 (-IsReleased@ResourceSet@ExecutionModel@@UEBA_NXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::HasMemoryForFGSharing(
        ExecutionModel::ResourceSet *this,
        unsigned __int64 a2)
{
  unsigned int v2; // ebx
  bool (__fastcall *v5)(ExecutionModel::ResourceSet *__hidden); // r14
  bool IsReleased; // al
  __int64 v7; // rdx
  __int64 result; // rax

  v2 = 0;
  v5 = *(bool (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*((_QWORD *)this + 171) + 72LL);
  if ( v5 == ExecutionModel::ResourceSet::IsReleased )
    IsReleased = ExecutionModel::ResourceSet::IsReleased((ExecutionModel::ResourceSet *)((char *)this + 1368));
  else
    IsReleased = v5((ExecutionModel::ResourceSet *)((char *)this + 1368));
  if ( IsReleased )
    return (unsigned int)-2147220216;
  v7 = *((_QWORD *)this + 230);
  if ( *((_QWORD *)this + 182) - v7 < a2 )
    return 2147746304LL;
  result = 2147746304LL;
  if ( a2 + v7 + *((_QWORD *)this + 28) <= *((_QWORD *)this + 182) )
    return v2;
  return result;
}
