/*
 * XREFs of ?_FindKey@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@2@AEB_K_KPEAPEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@@Z @ 0x18000B5FC
 * Callers:
 *     ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@@Z @ 0x18000B794 (-_EmplaceImpl@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U-$hash@_K.c)
 * Callees:
 *     ?_InitBuckets@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x180007070 (-_InitBuckets@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000887C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>>,0>::_FindKey(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  char v5; // di
  _QWORD *i; // rbx
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // r10
  void *v12; // rax
  char result; // al

  v5 = 0;
  i = 0LL;
  v9 = *(_QWORD *)(a1 + 16);
  v10 = 8LL << *(_BYTE *)(a1 + 32);
  v11 = a4 & (v10 - 1);
  if ( v9 )
  {
    if ( *(_QWORD *)(v9 + 16 * v11) )
    {
      if ( a2 && a2 != (_QWORD *)a1 && ((v10 - 1) & a2[2]) == v11 )
      {
        for ( i = a2; i != *(_QWORD **)(v9 + 16 * v11); i = (_QWORD *)i[1] )
        {
          if ( a4 > i[2] )
            break;
        }
      }
      else
      {
        i = *(_QWORD **)(v9 + 16 * v11);
      }
      while ( i != **(_QWORD ***)(v9 + 16 * v11 + 8) )
      {
        if ( i[2] >= a4 )
        {
          if ( i[2] > a4 )
            break;
          if ( *a3 == i[3] )
            goto LABEL_23;
        }
        i = (_QWORD *)*i;
      }
    }
  }
  else
  {
    if ( v10 > 0xFFFFFFFFFFFFFFFLL )
      v12 = 0LL;
    else
      v12 = operator new(16 * v10, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)(a1 + 16) = v12;
    if ( v12 )
      utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_InitBuckets(a1);
    else
LABEL_23:
      v5 = 1;
  }
  result = v5;
  *a5 = i;
  return result;
}
