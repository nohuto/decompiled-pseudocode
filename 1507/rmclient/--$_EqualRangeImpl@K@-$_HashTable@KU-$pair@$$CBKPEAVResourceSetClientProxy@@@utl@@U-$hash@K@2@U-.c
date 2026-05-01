/*
 * XREFs of ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180011550
 * Callers:
 *     ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x18001356C (-LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_S.c)
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJK@Z @ 0x180013CCC (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJK@Z.c)
 * Callees:
 *     ??$_HashRange@PEBG@utl@@YA_KPEBG0_K@Z @ 0x18000F928 (--$_HashRange@PEBG@utl@@YA_KPEBG0_K@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_EqualRangeImpl<unsigned long>(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 **a4,
        __int64 *a5,
        _QWORD *a6)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 *v12; // rcx
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 16) )
  {
    v9 = utl::_HashRange<unsigned short const *>(a3, (unsigned __int64)(a3 + 2));
    v10 = 32769 * ((9 * v9) ^ ((9 * v9) >> 11));
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
