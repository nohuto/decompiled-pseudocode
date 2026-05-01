/*
 * XREFs of ??$emplace@AEA_KAEAPEAVResourceSetClientProxy@@@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@_N@1@AEA_KAEAPEAVResourceSetClientProxy@@@Z @ 0x18000ADB0
 * Callers:
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z @ 0x18000B81C (-AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180006064 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x18000C940 (-_EmplaceImpl@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equ.c)
 */

__int64 __fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::emplace<unsigned __int64 &,ResourceSetClientProxy * &>(
        int a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  _QWORD *Block; // rax
  __int64 v9; // r8

  Block = operator new(0x28uLL, (const struct std::nothrow_t *)&unk_1800110A8);
  if ( Block )
  {
    v9 = *a3;
    Block[3] = *a3;
    Block[4] = *a4;
  }
  utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_EmplaceImpl(
    a1,
    a2,
    v9,
    0,
    Block);
  return a2;
}
