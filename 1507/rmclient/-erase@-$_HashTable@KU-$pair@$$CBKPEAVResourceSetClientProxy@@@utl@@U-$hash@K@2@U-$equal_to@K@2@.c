/*
 * XREFs of ?erase@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@2@0@Z @ 0x18001417C
 * Callers:
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJK@Z @ 0x180013CCC (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJK@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180008CB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::erase(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *result; // rax
  _QWORD *v11; // [rsp+40h] [rbp+18h]
  _QWORD *v12; // [rsp+48h] [rbp+20h]

  v12 = a4;
  v6 = (8LL << *(_BYTE *)(a1 + 32)) - 1;
  while ( a3 != a4 )
  {
    v11 = (_QWORD *)*a3;
    v7 = (_QWORD *)a3[1];
    v8 = (_QWORD *)*a3;
    *v7 = *a3;
    v8[1] = v7;
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * (v6 & a3[2]));
    if ( (_QWORD *)*v9 == a3 )
    {
      if ( (_QWORD *)v9[1] == a3 )
      {
        *v9 = 0LL;
        v9[1] = 0LL;
      }
      else
      {
        *v9 = *a3;
      }
    }
    else if ( (_QWORD *)v9[1] == a3 )
    {
      v9[1] = a3[1];
    }
    operator delete(a3);
    --*(_QWORD *)(a1 + 24);
    a4 = v12;
    a3 = v11;
  }
  result = a2;
  *a2 = a4;
  return result;
}
