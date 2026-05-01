/*
 * XREFs of ?clear@?$list@KV?$allocator@K@utl@@@utl@@QEAAXXZ @ 0x18002F324
 * Callers:
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x1800355D4 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     ?RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z @ 0x18004B73C (-RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::list<unsigned long,utl::allocator<unsigned long>>::clear(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 *v3; // rdx
  __int64 v4; // rax

  while ( 1 )
  {
    v2 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    v3 = (__int64 *)v2[1];
    v4 = *v2;
    *v3 = *v2;
    *(_QWORD *)(v4 + 8) = v3;
    operator delete(v2);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
}
