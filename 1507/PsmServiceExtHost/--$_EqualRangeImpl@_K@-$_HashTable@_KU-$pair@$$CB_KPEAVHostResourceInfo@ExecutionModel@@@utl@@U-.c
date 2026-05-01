/*
 * XREFs of ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180018020
 * Callers:
 *     ?AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x1800177E0 (-AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIV.c)
 *     ?RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z @ 0x1800186AC (-RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>>,0>::_EqualRangeImpl<unsigned __int64>(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v8; // r10
  unsigned __int16 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // r10
  unsigned __int64 v16; // rax
  _QWORD *result; // rax

  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
    goto LABEL_12;
  v8 = 0LL;
  v9 = a3;
  v10 = 4LL;
  v11 = 0LL;
  if ( a3 > a3 + 4 )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      v12 = *v9++;
      ++v11;
      v8 = (1025 * (v8 + v12)) ^ ((1025 * (v8 + v12)) >> 6);
    }
    while ( v11 != v10 );
  }
  v13 = 32769 * ((9 * v8) ^ ((9 * v8) >> 11));
  v14 = *(_QWORD **)(v6 + 16 * (v13 & ((8LL << *(_BYTE *)(a1 + 32)) - 1)));
  if ( v14 && (v15 = **(_QWORD ***)(v6 + 16 * (v13 & ((8LL << *(_BYTE *)(a1 + 32)) - 1)) + 8), v14 != v15) )
  {
    while ( 1 )
    {
      v16 = v14[2];
      if ( v16 >= v13 )
      {
        if ( v16 > v13 )
          goto LABEL_12;
        if ( *(_QWORD *)a3 == v14[3] )
          break;
      }
      v14 = (_QWORD *)*v14;
      if ( v14 == v15 )
        goto LABEL_12;
    }
    *a4 = v14;
    *a5 = *v14;
    result = a6;
    *a6 = 1LL;
  }
  else
  {
LABEL_12:
    *a4 = a1;
    *a5 = a1;
    result = a6;
    *a6 = 0LL;
  }
  return result;
}
