/*
 * XREFs of ?_InsertNode@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@0_K@Z @ 0x18000B700
 * Callers:
 *     ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@@Z @ 0x18000B794 (-_EmplaceImpl@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U-$hash@_K.c)
 *     ?_EmplaceImpl@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x180013F98 (-_EmplaceImpl@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_.c)
 * Callees:
 *     ?_Rehash@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x18000FABC (-_Rehash@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_to@K@.c)
 */

_QWORD *__fastcall utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_InsertNode(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v5; // r11
  _QWORD *v7; // r10
  _QWORD *v8; // rax

  v5 = a1;
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * (a5 & ((8LL << *(_BYTE *)(a1 + 32)) - 1)));
  if ( !a3 )
  {
    *v7 = a4;
    a3 = a1;
LABEL_6:
    v7[1] = a4;
    goto LABEL_7;
  }
  if ( *v7 == a3 )
  {
    *v7 = a4;
    goto LABEL_7;
  }
  if ( *(_QWORD *)v7[1] == a3 )
    goto LABEL_6;
LABEL_7:
  v8 = *(_QWORD **)(a3 + 8);
  *a4 = a3;
  a4[1] = v8;
  *a2 = a4;
  *v8 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  ++*(_QWORD *)(a1 + 24);
  LOBYTE(a1) = *(_BYTE *)(a1 + 32);
  if ( (unsigned __int64)*(unsigned __int8 *)(v5 + 33) < *(_QWORD *)(v5 + 24) >> a1 )
    utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_Rehash(
      v5,
      (unsigned int)(a1 + 1));
  return a2;
}
