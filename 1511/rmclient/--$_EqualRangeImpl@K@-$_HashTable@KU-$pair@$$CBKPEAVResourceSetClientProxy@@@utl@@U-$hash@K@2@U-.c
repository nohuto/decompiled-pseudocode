/*
 * XREFs of ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180012274
 * Callers:
 *     ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x1800142BC (-LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_S.c)
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJK@Z @ 0x180014A1C (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJK@Z.c)
 * Callees:
 *     ??$_HashRange@PEBG@utl@@YAIPEBG0I@Z @ 0x180010770 (--$_HashRange@PEBG@utl@@YAIPEBG0I@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_EqualRangeImpl<unsigned long>(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 **a4,
        __int64 *a5,
        _QWORD *a6)
{
  int v9; // eax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 *v12; // rcx
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 16) )
  {
    v9 = utl::_HashRange<unsigned short const *>(a3, (unsigned __int64)(a3 + 2));
    v10 = 32769 * (((unsigned int)(9 * v9) >> 11) ^ (9 * v9));
    v11 = *(_QWORD *)(a1 + 16) + 16 * (v10 & ((8LL << *(_BYTE *)(a1 + 32)) - 1));
    v12 = *(__int64 **)v11;
    if ( *(_QWORD *)v11 )
    {
      while ( v12 != **(__int64 ***)(v11 + 8) )
      {
        if ( v12[2] >= v10 )
        {
          if ( v12[2] > v10 )
            break;
          if ( *(_DWORD *)a3 == *((_DWORD *)v12 + 6) )
          {
            *a4 = v12;
            *a5 = *v12;
            result = a6;
            *a6 = 1LL;
            return result;
          }
        }
        v12 = (__int64 *)*v12;
      }
    }
  }
  *a4 = (__int64 *)a1;
  *a5 = a1;
  result = a6;
  *a6 = 0LL;
  return result;
}
