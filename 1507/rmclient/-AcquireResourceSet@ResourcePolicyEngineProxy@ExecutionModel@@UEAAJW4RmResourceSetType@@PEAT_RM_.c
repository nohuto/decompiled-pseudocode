/*
 * XREFs of ?AcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x180004930
 * Callers:
 *     <none>
 * Callees:
 *     ?DoAcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAPEAXPEAXKKPEBU_RPC_ActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAVResourceSetProxy@2@@Z @ 0x180004570 (-DoAcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_R.c)
 *     ??0ResourceSetProxy@ExecutionModel@@IEAA@PEAXPEAVResourcePolicyEngineProxy@1@@Z @ 0x1800055C0 (--0ResourceSetProxy@ExecutionModel@@IEAA@PEAXPEAVResourcePolicyEngineProxy@1@@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineProxy::AcquireResourceSet(
        struct ExecutionModel::ResourcePolicyEngineProxy *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        PSID Sid,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10)
{
  __int64 *v12; // r13
  int v13; // edx
  void *v14; // rbx
  ExecutionModel::ResourceSetProxy *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // esi
  __int64 v20; // [rsp+70h] [rbp-58h] BYREF
  __int64 v21; // [rsp+78h] [rbp-50h] BYREF
  __int64 v22; // [rsp+80h] [rbp-48h]
  __int64 v23; // [rsp+88h] [rbp-40h]
  ULONG v26; // [rsp+F0h] [rbp+28h]

  v20 = a5;
  v12 = 0LL;
  v26 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  *a10 = 0LL;
  if ( !a8 || *(int *)a8 > 5 || !*(_QWORD *)(a8 + 8) )
    return (unsigned int)-2147024809;
  if ( !a9 )
    return (unsigned int)-2147024809;
  if ( Sid )
  {
    if ( RtlValidSid(Sid) )
    {
      v26 = RtlLengthSid(Sid);
      goto LABEL_8;
    }
    return (unsigned int)-2147024809;
  }
LABEL_8:
  v13 = *(_DWORD *)a8;
  v23 = *(_QWORD *)(a8 + 16);
  LODWORD(v21) = v13;
  v22 = *(_QWORD *)(a8 + 8);
  if ( a4 )
    v12 = &v20;
  v14 = (void *)*((_QWORD *)a1 + 2);
  if ( v14 )
  {
    v15 = (ExecutionModel::ResourceSetProxy *)malloc(0x60uLL);
    if ( v15 && (v16 = ExecutionModel::ResourceSetProxy::ResourceSetProxy(v15, v14, a1), (v17 = v16) != 0) )
    {
      v18 = ExecutionModel::ResourcePolicyEngineProxy::DoAcquireResourceSet(
              (__int64)a1,
              a2,
              a3,
              a4,
              (__int64)v12,
              (__int64)Sid,
              v26,
              a7,
              (__int64)&v21,
              0,
              a9,
              0LL,
              v16);
      if ( v18 < 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      else
        *a10 = v17;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return (unsigned int)v18;
}
