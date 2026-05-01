/*
 * XREFs of ?DoAcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAPEAXPEAXKKPEBU_RPC_ActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAVResourceSetProxy@2@@Z @ 0x1800056E0
 * Callers:
 *     ?AcquireResourceSetHelper@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180002450 (-AcquireResourceSetHelper@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PE.c)
 *     ?AcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x180005AB0 (-AcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_.c)
 *     ?AcquireTransitionalResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180005C70 (-AcquireTransitionalResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourceSetTy.c)
 * Callees:
 *     ?_Rehash@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x1800027D0 (-_Rehash@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U-$hash@_K@2@U-.c)
 *     ??$RpcCall@P6AJPEAXPEA_KW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_K1@ZPEAXPEA_KW41@W4RmResourceSetType@@PEAT2@PEBU3@PEAEKKKPEAW44@_KPEA_K@Shared@DevPlat@@YAJP6AJPEAXPEA_KW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_K1@Z012W4RmResourceSetType@@345KKK671@Z @ 0x180005E90 (--$RpcCall@P6AJPEAXPEA_KW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_Activati.c)
 *     ?_InitBuckets@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x180005FF0 (-_InitBuckets@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180008F4C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180009384 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineProxy::DoAcquireResourceSet(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        unsigned __int64 a12,
        __int64 a13)
{
  _QWORD *v13; // rsi
  struct _RTL_CRITICAL_SECTION *v14; // rbx
  __int64 v17; // r12
  __int64 v19; // rdi
  int v20; // r15d
  _QWORD *v21; // rcx
  int v22; // r12d
  _QWORD *i; // rax
  __int64 v24; // rdi
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // rbp
  _QWORD *v28; // rax
  _QWORD *v29; // r14
  _QWORD *v30; // r11
  unsigned int v31; // edx
  unsigned __int16 *v32; // r9
  __int64 v33; // r10
  __int64 v34; // r8
  int v35; // eax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r8
  __int64 v38; // rdx
  unsigned __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rdi
  _QWORD *v43; // rax
  char v44; // cl
  _QWORD *j; // rcx
  unsigned __int64 v47; // rax
  void *v48; // rax
  __int64 v49; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v50; // [rsp+C0h] [rbp+18h]

  v50 = a3;
  v13 = 0LL;
  v14 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  v49 = 0LL;
  v17 = a3;
  v19 = 0LL;
  v20 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  if ( a12 )
  {
    v21 = (_QWORD *)(a1 + 184);
    v22 = 0;
    for ( i = *(_QWORD **)(a1 + 184); i != v21; i = (_QWORD *)*i )
    {
      if ( i[4] == a12 )
      {
        if ( i != v21 )
          goto LABEL_7;
        break;
      }
    }
    v22 = -2147024809;
LABEL_7:
    if ( v22 < 0 )
      goto LABEL_32;
    v20 = 1;
    v19 = *(_QWORD *)(i[4] + 24LL);
    if ( !v19 )
    {
      v22 = -2147467259;
      goto LABEL_32;
    }
    v17 = v50;
  }
  if ( a10 )
    v20 = 2;
  v22 = DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64 *,enum _AcquireResourcesType,unsigned long,_RM_ACTIVITY_IMPORTANCE *,_RPC_ActivationId const *,unsigned char *,unsigned long,unsigned long,unsigned long,enum _ResourcePendingReason *,unsigned __int64,unsigned __int64 *),void *,unsigned __int64 *,enum _AcquireResourcesType,enum RmResourceSetType,_RM_ACTIVITY_IMPORTANCE *,_RPC_ActivationId const *,unsigned char *,unsigned long,unsigned long,unsigned long,enum _ResourcePendingReason *,unsigned __int64,unsigned __int64 *>(
          a10,
          *(_QWORD *)(a1 + 24),
          a5,
          v20,
          a2,
          v17,
          a9,
          a6,
          a7,
          a8,
          a10,
          a11,
          v19,
          (__int64)&v49);
  if ( v22 >= 0 )
  {
    v24 = v49;
    if ( !v49 )
    {
      v22 = -2147024809;
      goto LABEL_32;
    }
    v25 = a13;
    *(_QWORD *)(a13 + 24) = v49;
    *(_DWORD *)(v25 + 32) = a2;
    if ( *(_QWORD *)(v25 + 40) != a4 )
    {
      if ( a4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
        v24 = v49;
      }
      v26 = *(_QWORD *)(v25 + 40);
      if ( v26 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26 + 16LL))(*(_QWORD *)(v25 + 40));
        v24 = v49;
      }
      *(_QWORD *)(v25 + 40) = a4;
    }
    v22 = 0;
    v27 = a1 + 184;
    v28 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v29 = v28;
    if ( v28 )
    {
      v30 = v28 + 3;
      v31 = 0;
      v28[3] = v24;
      v28[4] = v25;
      v32 = (unsigned __int16 *)(v28 + 3);
      v33 = 0LL;
      v34 = 4LL;
      if ( v28 + 3 > v28 + 4 )
        v34 = 0LL;
      if ( v34 )
      {
        do
        {
          v35 = *v32++;
          ++v33;
          v31 = (1025 * (v31 + v35)) ^ ((1025 * (v31 + v35)) >> 6);
        }
        while ( v33 != v34 );
      }
      v36 = v31;
      LODWORD(v36) = 32769 * (((9 * v31) >> 11) ^ (9 * v31));
      a12 = v36;
      v37 = v36;
      v29[2] = v36;
      v38 = *(_QWORD *)(v27 + 16);
      v39 = 8LL << *(_BYTE *)(v27 + 32);
      v40 = v36 & (v39 - 1);
      if ( v38 )
      {
        v41 = 2 * v40;
        if ( *(_QWORD *)(v38 + 8 * v41) )
        {
          v13 = *(_QWORD **)(v38 + 8 * v41);
          for ( j = **(_QWORD ***)(v38 + 8 * v41 + 8); v13 != j; v13 = (_QWORD *)*v13 )
          {
            v47 = v13[2];
            if ( v47 > v37 )
              break;
            if ( v47 >= v37 && *v30 == v13[3] )
              goto LABEL_51;
          }
        }
LABEL_27:
        v42 = (_QWORD *)(*(_QWORD *)(v27 + 16) + 16 * (v29[2] & ((8LL << *(_BYTE *)(v27 + 32)) - 1)));
        if ( !v13 )
        {
          *v42 = v29;
          v13 = (_QWORD *)v27;
LABEL_29:
          v42[1] = v29;
          goto LABEL_30;
        }
        if ( (_QWORD *)*v42 == v13 )
        {
          *v42 = v29;
        }
        else if ( *(_QWORD **)v42[1] == v13 )
        {
          goto LABEL_29;
        }
LABEL_30:
        v43 = (_QWORD *)v13[1];
        v29[1] = v43;
        *v29 = v13;
        *v43 = v29;
        v13[1] = v29;
        ++*(_QWORD *)(v27 + 24);
        v44 = *(_BYTE *)(v27 + 32);
        if ( (unsigned __int64)*(unsigned __int8 *)(v27 + 33) < *(_QWORD *)(v27 + 24) >> v44 )
          utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>>,0>::_Rehash(
            v27,
            v44 + 1);
        goto LABEL_32;
      }
      if ( v39 > 0xFFFFFFFFFFFFFFFLL )
        v48 = 0LL;
      else
        v48 = operator new(16 * v39, (const struct std::nothrow_t *)&std::nothrow);
      *(_QWORD *)(v27 + 16) = v48;
      if ( v48 )
      {
        utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_InitBuckets(v27);
        goto LABEL_27;
      }
LABEL_51:
      operator delete(v29);
    }
    v22 = -2147024882;
  }
LABEL_32:
  LeaveCriticalSection(v14);
  return (unsigned int)v22;
}
