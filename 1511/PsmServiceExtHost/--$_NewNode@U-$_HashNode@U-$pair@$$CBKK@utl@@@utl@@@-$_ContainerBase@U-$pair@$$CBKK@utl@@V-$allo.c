/*
 * XREFs of ??$_NewNode@U?$_HashNode@U?$pair@$$CBKK@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CBKK@utl@@V?$allocator@U?$pair@$$CBKK@utl@@@2@@utl@@IEAA?AV?$_ContainerAllocation@V?$allocator@U?$_HashNode@U?$pair@$$CBKK@utl@@@utl@@@utl@@@1@XZ @ 0x1800436E0
 * Callers:
 *     ?GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z @ 0x180043DF0 (-GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall utl::_ContainerBase<utl::pair<unsigned long const,unsigned long>,utl::allocator<utl::pair<unsigned long const,unsigned long>>>::_NewNode<utl::_HashNode<utl::pair<unsigned long const,unsigned long>>>(
        __int64 a1,
        void **a2)
{
  a2[1] = (void *)1;
  *a2 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  return a2;
}
