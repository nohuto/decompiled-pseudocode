/*
 * XREFs of ??$_EqualRangeImpl@PEBG@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEBGAEAV?$_DlistIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180005900
 * Callers:
 *     ?GetResourcePolicyKey@ResourcePolicyStore@ExecutionModel@@UEBAJQEBGKPEAW4RmResourceSetType@@@Z @ 0x180005880 (-GetResourcePolicyKey@ResourcePolicyStore@ExecutionModel@@UEBAJQEBGKPEAW4RmResourceSetType@@@Z.c)
 *     ?AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x180026598 (-AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetail.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_EqualRangeImpl<unsigned short const *>(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rbx
  unsigned __int64 v9; // rdx
  unsigned int v10; // r10d
  __int64 v11; // rax
  __int64 v13; // r9
  unsigned __int16 *v14; // r11
  unsigned __int64 v15; // r8
  int v16; // eax
  char v17; // cl
  _QWORD *v18; // r9
  _QWORD *v19; // rbx
  unsigned __int64 v20; // rax
  unsigned __int16 *v21; // rax
  int v22; // ecx
  int v23; // r8d
  _QWORD *result; // rax
  unsigned __int64 v25; // [rsp+10h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
    goto LABEL_18;
  v9 = *a3;
  v10 = 0;
  v11 = -1LL;
  while ( *(_WORD *)(v9 + 2 * v11++ + 2) != 0 )
    ;
  v13 = 0LL;
  v14 = (unsigned __int16 *)*a3;
  v15 = (unsigned __int64)(2 * v11 + 1) >> 1;
  if ( v9 > v9 + 2 * v11 )
    v15 = 0LL;
  if ( v15 )
  {
    do
    {
      v16 = *v14++;
      ++v13;
      v10 = (1025 * (v10 + v16)) ^ ((1025 * (v10 + v16)) >> 6);
    }
    while ( v13 != v15 );
  }
  v25 = v10;
  v17 = *(_BYTE *)(a1 + 32);
  LODWORD(v25) = 32769 * (((9 * v10) >> 11) ^ (9 * v10));
  v18 = *(_QWORD **)(v6 + 16 * (v25 & ((8LL << v17) - 1)));
  if ( v18 && (v19 = **(_QWORD ***)(v6 + 16 * (v25 & ((8LL << v17) - 1)) + 8), v18 != v19) )
  {
    while ( 1 )
    {
      v20 = v18[2];
      if ( v20 >= v25 )
      {
        if ( v20 > v25 )
          goto LABEL_18;
        v21 = (unsigned __int16 *)v9;
        do
        {
          v22 = *(unsigned __int16 *)((char *)v21 + v18[3] - v9);
          v23 = *v21 - v22;
          if ( v23 )
            break;
          ++v21;
        }
        while ( v22 );
        if ( !v23 )
          break;
      }
      v18 = (_QWORD *)*v18;
      if ( v18 == v19 )
        goto LABEL_18;
    }
    *a4 = v18;
    *a5 = *v18;
    result = a6;
    *a6 = 1LL;
  }
  else
  {
LABEL_18:
    *a4 = a1;
    *a5 = a1;
    result = a6;
    *a6 = 0LL;
  }
  return result;
}
