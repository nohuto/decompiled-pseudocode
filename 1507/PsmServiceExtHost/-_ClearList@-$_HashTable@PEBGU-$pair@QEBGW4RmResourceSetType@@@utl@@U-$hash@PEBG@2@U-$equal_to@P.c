/*
 * XREFs of ?_ClearList@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x180046E40
 * Callers:
 *     ??1ResourcePolicyStore@ExecutionModel@@QEAA@XZ @ 0x1800468C0 (--1ResourcePolicyStore@ExecutionModel@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_ClearList(
        __int64 a1)
{
  __int64 *v2; // rcx
  __int64 *v3; // rdx
  __int64 v4; // rax

  while ( 1 )
  {
    v2 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    v3 = (__int64 *)v2[1];
    v4 = *v2;
    *v3 = *v2;
    *(_QWORD *)(v4 + 8) = v3;
    operator delete(v2);
  }
  *(_QWORD *)(a1 + 24) = 0LL;
}
