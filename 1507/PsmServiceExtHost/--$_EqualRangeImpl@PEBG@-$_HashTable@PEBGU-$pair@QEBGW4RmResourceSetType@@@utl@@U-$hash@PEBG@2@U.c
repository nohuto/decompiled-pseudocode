/*
 * XREFs of ??$_EqualRangeImpl@PEBG@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEBGAEAV?$_DlistIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001E000
 * Callers:
 *     ?AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x18001C998 (-AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetail.c)
 *     ?GetResourcePolicyKey@ResourcePolicyStore@ExecutionModel@@UEBAJQEBGKPEAW4RmResourceSetType@@@Z @ 0x18001DDA0 (-GetResourcePolicyKey@ResourcePolicyStore@ExecutionModel@@UEBAJQEBGKPEAW4RmResourceSetType@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_EqualRangeImpl<unsigned short const *>(
        __int64 a1,
        __int64 a2,
        unsigned __int16 **a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // r11
  unsigned __int16 *v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int16 *v11; // r8
  unsigned __int16 i; // dx
  char v13; // cl
  unsigned __int64 v14; // r10
  _QWORD *v15; // r9
  _QWORD *v16; // r11
  unsigned __int64 v17; // rax
  unsigned __int16 *v18; // rax
  int v19; // ecx
  int v20; // edx
  _QWORD *result; // rax

  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
    goto LABEL_13;
  v9 = *a3;
  v10 = 0LL;
  v11 = v9;
  for ( i = *v9; *v11; i = *v11 )
  {
    ++v11;
    v10 = (1025 * (v10 + i)) ^ ((1025 * (v10 + i)) >> 6);
  }
  v13 = *(_BYTE *)(a1 + 32);
  v14 = 32769 * ((9 * v10) ^ ((9 * v10) >> 11));
  v15 = *(_QWORD **)(v6 + 16 * (v14 & ((8LL << v13) - 1)));
  if ( v15 && (v16 = **(_QWORD ***)(v6 + 16 * (v14 & ((8LL << v13) - 1)) + 8), v15 != v16) )
  {
    while ( 1 )
    {
      v17 = v15[2];
      if ( v17 >= v14 )
      {
        if ( v17 > v14 )
          goto LABEL_13;
        v18 = v9;
        do
        {
          v19 = *(unsigned __int16 *)((char *)v18 + v15[3] - (_QWORD)v9);
          v20 = *v18 - v19;
          if ( v20 )
            break;
          ++v18;
        }
        while ( v19 );
        if ( !v20 )
          break;
      }
      v15 = (_QWORD *)*v15;
      if ( v15 == v16 )
        goto LABEL_13;
    }
    *a4 = v15;
    *a5 = *v15;
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
