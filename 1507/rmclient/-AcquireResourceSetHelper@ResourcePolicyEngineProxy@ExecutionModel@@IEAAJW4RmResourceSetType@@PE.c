/*
 * XREFs of ?AcquireResourceSetHelper@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180001180
 * Callers:
 *     ?AcquireResourceSetFromSponsorProcess@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180001340 (-AcquireResourceSetFromSponsorProcess@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourc.c)
 * Callees:
 *     ?CreateInstance@ResourceSetProxy@ExecutionModel@@SAJPEAXPEAVResourcePolicyEngineProxy@2@PEAPEAV12@@Z @ 0x1800013B8 (-CreateInstance@ResourceSetProxy@ExecutionModel@@SAJPEAXPEAVResourcePolicyEngineProxy@2@PEAPEAV1.c)
 *     ?DoAcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAPEAXPEAXKKPEBU_RPC_ActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAVResourceSetProxy@2@@Z @ 0x180004570 (-DoAcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_R.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineProxy::AcquireResourceSetHelper(
        void **a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        PSID Sid,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        struct ExecutionModel::ResourceSetProxy **a12)
{
  struct ExecutionModel::ResourceSetProxy **v12; // r15
  ULONG v13; // ebp
  __int64 v14; // rbx
  __int64 v16; // r12
  PSID v17; // rsi
  ULONG v18; // eax
  int v19; // edx
  char *v20; // rbx
  int v21; // edi
  struct ExecutionModel::ResourceSetProxy *v22; // r14
  struct ExecutionModel::ResourceSetProxy *v24; // [rsp+70h] [rbp-68h] BYREF
  char *v25; // [rsp+78h] [rbp-60h]
  __int64 v26; // [rsp+80h] [rbp-58h] BYREF
  __int64 v27; // [rsp+88h] [rbp-50h]
  __int64 v28; // [rsp+90h] [rbp-48h]
  __int64 v31; // [rsp+F8h] [rbp+20h]

  v31 = a4;
  v12 = a12;
  v13 = 0;
  v14 = a8;
  v26 = 0LL;
  v27 = 0LL;
  *a12 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  if ( v14 && *(int *)v14 <= 5 && *(_QWORD *)(v14 + 8) )
  {
    v16 = a10;
    if ( a10 )
    {
      v17 = Sid;
      if ( Sid )
      {
        if ( !RtlValidSid(Sid) )
          return (unsigned int)-2147024809;
        v18 = RtlLengthSid(v17);
        a4 = v31;
        v13 = v18;
      }
      v19 = *(_DWORD *)v14;
      v28 = *(_QWORD *)(v14 + 16);
      LODWORD(v26) = v19;
      v27 = *(_QWORD *)(v14 + 8);
      if ( a4 )
        v20 = &a5;
      else
        v20 = v25;
      v21 = ExecutionModel::ResourceSetProxy::CreateInstance(
              a1[2],
              (struct ExecutionModel::ResourcePolicyEngineProxy *)a1,
              &v24);
      if ( v21 >= 0 )
      {
        v22 = v24;
        v21 = ExecutionModel::ResourcePolicyEngineProxy::DoAcquireResourceSet(
                a1,
                a2,
                a3,
                v31,
                v20,
                v17,
                v13,
                a7,
                &v26,
                a9,
                v16,
                a11,
                v24);
        if ( v21 < 0 )
        {
          if ( v22 )
            (*(void (__fastcall **)(struct ExecutionModel::ResourceSetProxy *))(*(_QWORD *)v22 + 16LL))(v22);
        }
        else
        {
          *v12 = v22;
        }
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v21;
}
