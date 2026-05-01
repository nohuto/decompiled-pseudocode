/*
 * XREFs of ?_InsertNode@?$_HashTable@_KU?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@0_K@Z @ 0x1800199D0
 * Callers:
 *     ??$_InsertImpl@U?$pair@_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@?$_HashTable@_KU?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@U?$integral_constant@_N$0A@@1@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@1@$$QEAU?$pair@_KPEAVHostResourceInfo@ExecutionModel@@@1@@Z @ 0x180019B88 (--$_InsertImpl@U-$pair@_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@-$_HashTable@_KU-$pair@$$CB.c)
 * Callees:
 *     ?_Rehash@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x180005458 (-_Rehash@-$_HashTable@PEBGU-$pair@QEBGW4RmResourceSetType@@@utl@@U-$hash@PEBG@2@U-$equal_to@PEBG.c)
 */

__int64 **__fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>>,0>::_InsertNode(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 **v7; // r10
  __int64 **v8; // rax
  char v9; // cl

  v7 = (__int64 **)(*(_QWORD *)(a1 + 16) + 16 * (a5 & ((8LL << *(_BYTE *)(a1 + 32)) - 1)));
  if ( !a3 )
  {
    *v7 = a4;
    a3 = a1;
LABEL_3:
    v7[1] = a4;
    goto LABEL_4;
  }
  if ( *v7 == (__int64 *)a3 )
  {
    *v7 = a4;
  }
  else if ( *v7[1] == a3 )
  {
    goto LABEL_3;
  }
LABEL_4:
  v8 = *(__int64 ***)(a3 + 8);
  *a4 = a3;
  a4[1] = (__int64)v8;
  *a2 = a4;
  *v8 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  ++*(_QWORD *)(a1 + 24);
  v9 = *(_BYTE *)(a1 + 32);
  if ( (unsigned __int64)*(unsigned __int8 *)(a1 + 33) < *(_QWORD *)(a1 + 24) >> v9 )
    utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_Rehash(
      a1,
      v9 + 1);
  return a2;
}
