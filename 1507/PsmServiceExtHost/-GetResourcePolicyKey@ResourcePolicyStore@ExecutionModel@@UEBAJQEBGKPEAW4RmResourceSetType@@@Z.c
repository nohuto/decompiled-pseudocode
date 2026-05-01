/*
 * XREFs of ?GetResourcePolicyKey@ResourcePolicyStore@ExecutionModel@@UEBAJQEBGKPEAW4RmResourceSetType@@@Z @ 0x18001DDA0
 * Callers:
 *     Srv_GetResourcePolicyKey @ 0x18001DF90 (Srv_GetResourcePolicyKey.c)
 * Callees:
 *     ??$_EqualRangeImpl@PEBG@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEBGAEAV?$_DlistIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001E000 (--$_EqualRangeImpl@PEBG@-$_HashTable@PEBGU-$pair@QEBGW4RmResourceSetType@@@utl@@U-$hash@PEBG@2@U.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStore::GetResourcePolicyKey(
        ExecutionModel::ResourcePolicyStore *this,
        const unsigned __int16 *a2,
        __int64 a3,
        enum RmResourceSetType *a4)
{
  char *v5; // rbx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF
  const unsigned __int16 *v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = a2;
  if ( !a4 )
    return 2147942487LL;
  *(_DWORD *)a4 = 57;
  if ( !a2 )
    return 2147942487LL;
  v10 = 0LL;
  v5 = (char *)this + 8;
  utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_EqualRangeImpl<unsigned short const *>(
    (_DWORD)this + 8,
    (_DWORD)a2,
    (unsigned int)&v9,
    (unsigned int)&v10,
    (__int64)&v8,
    (__int64)&v7);
  if ( (char *)v10 == v5 )
    return 2147500037LL;
  result = 0LL;
  *(_DWORD *)a4 = *(_DWORD *)(v10 + 32);
  return result;
}
