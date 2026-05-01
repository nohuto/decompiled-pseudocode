/*
 * XREFs of ?push_front@?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@QEAA_NAEBQEAVResourceSet@ExecutionModel@@@Z @ 0x18002D6C0
 * Callers:
 *     ?FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMILY@@_KPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@@Z @ 0x18002C118 (-FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMIL.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18002C298 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800208FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::list<ExecutionModel::ResourceSet *,utl::allocator<ExecutionModel::ResourceSet *>>::push_front(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 *v6; // rcx

  v2 = *a1;
  result = (__int64)operator new(0x18uLL, (const struct std::nothrow_t *)&unk_18003CEC8);
  if ( result )
  {
    *(_QWORD *)(result + 16) = *a2;
    v6 = *(__int64 **)(v2 + 8);
    *(_QWORD *)(result + 8) = v6;
    *(_QWORD *)result = v2;
    *v6 = result;
    *(_QWORD *)(v2 + 8) = result;
    result = 1LL;
    ++a1[2];
  }
  return result;
}
