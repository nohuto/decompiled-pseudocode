/*
 * XREFs of ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x1800026B0
 * Callers:
 *     ?ResourceSetCallbackHandler@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x180002380 (-ResourceSetCallbackHandler@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXPEAU_RM_WNF_LEGACY_RE.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>>,0>::_EqualRangeImpl<unsigned __int64>(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rdi
  unsigned int v8; // r10d
  unsigned __int16 *v9; // r11
  __int64 v10; // rbx
  __int64 v11; // rdx
  int v12; // eax
  char v13; // cl
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rcx
  _QWORD *result; // rax
  unsigned __int64 v18; // [rsp+18h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
    goto LABEL_13;
  v8 = 0;
  v9 = a3;
  v10 = 0LL;
  v11 = 4LL;
  if ( a3 > a3 + 4 )
    v11 = 0LL;
  if ( v11 )
  {
    do
    {
      v12 = *v9++;
      ++v10;
      v8 = (1025 * (v8 + v12)) ^ ((1025 * (v8 + v12)) >> 6);
    }
    while ( v10 != v11 );
  }
  v18 = v8;
  v13 = *(_BYTE *)(a1 + 32);
  LODWORD(v18) = 32769 * (((9 * v8) >> 11) ^ (9 * v8));
  v14 = *(_QWORD **)(v6 + 16 * (v18 & ((8LL << v13) - 1)));
  if ( v14 && (v15 = **(_QWORD ***)(v6 + 16 * (v18 & ((8LL << v13) - 1)) + 8), v14 != v15) )
  {
    while ( 1 )
    {
      v16 = v14[2];
      if ( v16 >= v18 )
      {
        if ( v16 > v18 )
          goto LABEL_13;
        if ( *(_QWORD *)a3 == v14[3] )
          break;
      }
      v14 = (_QWORD *)*v14;
      if ( v14 == v15 )
        goto LABEL_13;
    }
    *a4 = v14;
    *a5 = *v14;
    result = a6;
    *a6 = 1LL;
  }
  else
  {
LABEL_13:
    *a4 = a1;
    *a5 = a1;
    result = a6;
    *a6 = 0LL;
  }
  return result;
}
