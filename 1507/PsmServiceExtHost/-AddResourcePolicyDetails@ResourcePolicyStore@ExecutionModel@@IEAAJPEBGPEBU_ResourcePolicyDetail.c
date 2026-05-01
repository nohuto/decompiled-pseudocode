/*
 * XREFs of ?AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x18001C998
 * Callers:
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x18001D360 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 *     ?CreateResourcePolicy@ResourcePolicyStore@ExecutionModel@@UEAAJQEBGKPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x1800469E0 (-CreateResourcePolicy@ResourcePolicyStore@ExecutionModel@@UEAAJQEBGKPEBU_ResourcePolicyDetails@@.c)
 * Callees:
 *     ??$_EqualRangeImpl@PEBG@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEBGAEAV?$_DlistIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001E000 (--$_EqualRangeImpl@PEBG@-$_HashTable@PEBGU-$pair@QEBGW4RmResourceSetType@@@utl@@U-$hash@PEBG@2@U.c)
 *     ?_EmplaceImpl@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@@Z @ 0x18001E1F8 (-_EmplaceImpl@-$_HashTable@PEBGU-$pair@QEBGW4RmResourceSetType@@@utl@@U-$hash@PEBG@2@U-$equal_to.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GrowPolicyBuffer@ResourcePolicyStore@ExecutionModel@@IEAAJXZ @ 0x180046C70 (-GrowPolicyBuffer@ResourcePolicyStore@ExecutionModel@@IEAAJXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStore::AddResourcePolicyDetails(
        ExecutionModel::ResourcePolicyStore *this,
        PCWSTR SourceString,
        const struct _ResourcePolicyDetails *a3,
        enum RmResourceSetType *a4)
{
  char *v8; // r15
  __int64 v9; // rsi
  _QWORD *Block; // rax
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // r15d
  _DWORD *v14; // rsi
  __int64 v15; // r14
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+40h] [rbp-10h] BYREF
  char *v19; // [rsp+80h] [rbp+30h] BYREF
  PCWSTR v20; // [rsp+88h] [rbp+38h] BYREF

  v20 = SourceString;
  if ( !*((_DWORD *)this + 16) )
    return 2147500037LL;
  v19 = 0LL;
  v8 = (char *)this + 8;
  utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_EqualRangeImpl<unsigned short const *>(
    (_DWORD)this + 8,
    (_DWORD)SourceString,
    (unsigned int)&v20,
    (unsigned int)&v19,
    (__int64)&String2,
    (__int64)&DestinationString);
  if ( v19 != v8 )
    return 2147942487LL;
  v9 = *((int *)this + 16) - 58LL;
  if ( v9 != *((_QWORD *)this + 6)
    || (result = ExecutionModel::ResourcePolicyStore::GrowPolicyBuffer(this), (int)result >= 0) )
  {
    Block = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( Block )
    {
      Block[3] = SourceString;
      *((_DWORD *)Block + 8) = *((_DWORD *)this + 16);
    }
    utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_EmplaceImpl(
      (int)v8,
      (int)&String2,
      v11,
      0,
      Block);
    if ( *(_QWORD *)&String2.Length )
    {
      v12 = 3 * v9;
      *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v12) = SourceString;
      *(_DWORD *)(*((_QWORD *)this + 7) + 8 * v12 + 8) = *((_DWORD *)this + 16);
      *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v12 + 16) = a3;
      if ( a4 )
        *(_DWORD *)a4 = *((_DWORD *)this + 16);
      v13 = *((_DWORD *)this + 16);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v14 = &unk_180069038;
      v15 = 4LL;
      do
      {
        RtlInitUnicodeString(&String2, *((PCWSTR *)v14 - 1));
        if ( !RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
          *v14 = v13;
        v14 += 4;
        --v15;
      }
      while ( v15 );
      ++*((_DWORD *)this + 16);
      return 0LL;
    }
    else
    {
      return 2147942414LL;
    }
  }
  return result;
}
