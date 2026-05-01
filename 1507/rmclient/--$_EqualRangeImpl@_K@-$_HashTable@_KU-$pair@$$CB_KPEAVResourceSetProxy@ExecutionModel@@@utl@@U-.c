/*
 * XREFs of ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18000B530
 * Callers:
 *     ?ResourceSetCallbackHandler@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x18000F9FC (-ResourceSetCallbackHandler@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXPEAU_RM_WNF_LEGACY_RE.c)
 * Callees:
 *     ??$_HashRange@PEBG@utl@@YA_KPEBG0_K@Z @ 0x18000F928 (--$_HashRange@PEBG@utl@@YA_KPEBG0_K@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>>,0>::_EqualRangeImpl<unsigned __int64>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 16) )
  {
    v9 = utl::_HashRange<unsigned short const *>(a3, a3 + 1);
    v10 = 32769 * ((9 * v9) ^ ((unsigned __int64)(9 * v9) >> 11));
    v11 = *(_QWORD *)(a1 + 16) + 16 * (v10 & ((8LL << *(_BYTE *)(a1 + 32)) - 1));
    v12 = *(_QWORD **)v11;
    if ( *(_QWORD *)v11 )
    {
      while ( v12 != **(_QWORD ***)(v11 + 8) )
      {
        if ( v12[2] >= v10 )
        {
          if ( v12[2] > v10 )
            break;
          if ( *a3 == v12[3] )
          {
            *a4 = v12;
            *a5 = *v12;
            result = a6;
            *a6 = 1LL;
            return result;
          }
        }
        v12 = (_QWORD *)*v12;
      }
    }
  }
  *a4 = a1;
  *a5 = a1;
  result = a6;
  *a6 = 0LL;
  return result;
}
