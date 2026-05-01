/*
 * XREFs of ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180019A70
 * Callers:
 *     ?AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180019640 (-AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@P.c)
 *     ?AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x1800197A0 (-AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIV.c)
 *     ?FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z @ 0x18001A110 (-FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z.c)
 *     ?RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z @ 0x18001A894 (-RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z.c)
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
  unsigned int v8; // r10d
  unsigned __int16 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // ecx
  char v13; // cl
  __int64 v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // r10
  unsigned __int64 v17; // rax
  _QWORD *result; // rax
  unsigned __int64 v19; // [rsp+10h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
    goto LABEL_13;
  v8 = 0;
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
  v19 = v8;
  v13 = *(_BYTE *)(a1 + 32);
  LODWORD(v19) = 32769 * (((9 * v8) >> 11) ^ (9 * v8));
  v14 = 2 * (v19 & ((8LL << v13) - 1));
  v15 = *(_QWORD **)(v6 + 16 * (v19 & ((8LL << v13) - 1)));
  if ( v15 && (v16 = **(_QWORD ***)(v6 + 8 * v14 + 8), v15 != v16) )
  {
    while ( 1 )
    {
      v17 = v15[2];
      if ( v17 >= v19 )
      {
        if ( v17 > v19 )
          goto LABEL_13;
        if ( *(_QWORD *)a3 == v15[3] )
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
