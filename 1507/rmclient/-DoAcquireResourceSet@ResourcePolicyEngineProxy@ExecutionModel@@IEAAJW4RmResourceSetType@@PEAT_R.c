/*
 * XREFs of ?DoAcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAPEAXPEAXKKPEBU_RPC_ActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAVResourceSetProxy@2@@Z @ 0x180004570
 * Callers:
 *     ?AcquireResourceSetHelper@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180001180 (-AcquireResourceSetHelper@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PE.c)
 *     ?AcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x180004930 (-AcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_.c)
 *     ?AcquireTransitionalResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180004AF0 (-AcquireTransitionalResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourceSetTy.c)
 * Callees:
 *     ??$RpcCall@P6AJPEAXPEA_KW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_K1@ZPEAXPEA_KW41@W4RmResourceSetType@@PEAT2@PEBU3@PEAEKKKPEAW44@_KPEA_K@Shared@DevPlat@@YAJP6AJPEAXPEA_KW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_K1@Z012W4RmResourceSetType@@345KKK671@Z @ 0x180004D10 (--$RpcCall@P6AJPEAXPEA_KW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_Activati.c)
 *     ?_InitBuckets@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x180007070 (-_InitBuckets@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000887C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180008CB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Rehash@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x18000FABC (-_Rehash@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_to@K@.c)
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
        __int64 a12,
        __int64 a13)
{
  _QWORD *v13; // r14
  struct _RTL_CRITICAL_SECTION *v14; // rbx
  __int64 v17; // r13
  __int64 v19; // rsi
  int v20; // r12d
  int v21; // r13d
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // r13
  __int64 v25; // rbp
  _QWORD *v26; // rax
  _QWORD *v27; // rdi
  char *v28; // r11
  unsigned __int64 v29; // r8
  char *v30; // rax
  char *v31; // r9
  __int64 v32; // r10
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // r9
  char v36; // cl
  __int64 v37; // rdx
  unsigned __int64 v38; // r8
  _QWORD *v39; // rsi
  _QWORD *v40; // rax
  int v41; // ecx
  _QWORD *v43; // rdx
  _QWORD *i; // rax
  _QWORD *j; // rcx
  unsigned __int64 v46; // rax
  void *v47; // rax
  __int64 v48; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v49; // [rsp+C0h] [rbp+18h]

  v49 = a3;
  v13 = 0LL;
  v14 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  v48 = 0LL;
  v17 = a3;
  v19 = 0LL;
  v20 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  if ( a12 )
  {
    v43 = (_QWORD *)(a1 + 184);
    v21 = 0;
    for ( i = *(_QWORD **)(a1 + 184); i != v43; i = (_QWORD *)*i )
    {
      if ( i[4] == a12 )
      {
        if ( i != v43 )
          goto LABEL_30;
        break;
      }
    }
    v21 = -2147024809;
LABEL_30:
    if ( v21 < 0 )
      goto LABEL_24;
    v20 = 1;
    v19 = *(_QWORD *)(i[4] + 24LL);
    if ( !v19 )
    {
      v21 = -2147467259;
      goto LABEL_24;
    }
    v17 = v49;
  }
  if ( a10 )
    v20 = 2;
  v21 = DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64 *,enum _AcquireResourcesType,unsigned long,_RM_ACTIVITY_IMPORTANCE *,_RPC_ActivationId const *,unsigned char *,unsigned long,unsigned long,unsigned long,enum _ResourcePendingReason *,unsigned __int64,unsigned __int64 *),void *,unsigned __int64 *,enum _AcquireResourcesType,enum RmResourceSetType,_RM_ACTIVITY_IMPORTANCE *,_RPC_ActivationId const *,unsigned char *,unsigned long,unsigned long,unsigned long,enum _ResourcePendingReason *,unsigned __int64,unsigned __int64 *>(
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
          (__int64)&v48);
  if ( v21 >= 0 )
  {
    v22 = v48;
    if ( !v48 )
    {
      v21 = -2147024809;
      goto LABEL_24;
    }
    v23 = a13;
    *(_QWORD *)(a13 + 24) = v48;
    *(_DWORD *)(v23 + 32) = a2;
    if ( *(_QWORD *)(v23 + 40) != a4 )
    {
      if ( a4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
        v22 = v48;
      }
      v24 = *(_QWORD *)(v23 + 40);
      if ( v24 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 16LL))(*(_QWORD *)(v23 + 40));
        v22 = v48;
      }
      *(_QWORD *)(v23 + 40) = a4;
    }
    v21 = 0;
    v25 = a1 + 184;
    v26 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v27 = v26;
    if ( v26 )
    {
      v28 = (char *)(v26 + 3);
      v26[3] = v22;
      v26[4] = v23;
      v29 = 0LL;
      v30 = (char *)(v26 + 4);
      v31 = v28;
      v32 = 0LL;
      v33 = (unsigned __int64)(v30 - v28 + 1) >> 1;
      if ( v28 > v30 )
        v33 = 0LL;
      if ( v33 )
      {
        do
        {
          v34 = *(unsigned __int16 *)v31;
          v31 += 2;
          ++v32;
          v29 = (1025 * (v29 + v34)) ^ ((1025 * (v29 + v34)) >> 6);
        }
        while ( v32 != v33 );
      }
      v35 = 32769 * ((9 * v29) ^ ((9 * v29) >> 11));
      v27[2] = v35;
      v36 = *(_BYTE *)(v25 + 32);
      v37 = *(_QWORD *)(v25 + 16);
      v38 = 8LL << v36;
      if ( v37 )
      {
        if ( *(_QWORD *)(v37 + 16 * (v35 & ((8LL << v36) - 1))) )
        {
          v13 = *(_QWORD **)(v37 + 16 * (v35 & ((8LL << v36) - 1)));
          for ( j = **(_QWORD ***)(v37 + 16 * (v35 & ((8LL << v36) - 1)) + 8); v13 != j; v13 = (_QWORD *)*v13 )
          {
            v46 = v13[2];
            if ( v46 > v35 )
              break;
            if ( v46 >= v35 && *(_QWORD *)v28 == v13[3] )
              goto LABEL_51;
          }
        }
LABEL_19:
        v39 = (_QWORD *)(*(_QWORD *)(v25 + 16) + 16 * (v27[2] & ((8LL << *(_BYTE *)(v25 + 32)) - 1)));
        if ( !v13 )
        {
          *v39 = v27;
          v13 = (_QWORD *)v25;
LABEL_21:
          v39[1] = v27;
          goto LABEL_22;
        }
        if ( (_QWORD *)*v39 == v13 )
        {
          *v39 = v27;
        }
        else if ( *(_QWORD **)v39[1] == v13 )
        {
          goto LABEL_21;
        }
LABEL_22:
        v40 = (_QWORD *)v13[1];
        v27[1] = v40;
        *v27 = v13;
        *v40 = v27;
        v13[1] = v27;
        ++*(_QWORD *)(v25 + 24);
        v41 = *(unsigned __int8 *)(v25 + 32);
        if ( (unsigned __int64)*(unsigned __int8 *)(v25 + 33) < *(_QWORD *)(v25 + 24) >> v41 )
          utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_Rehash(
            v25,
            (unsigned int)(v41 + 1));
        goto LABEL_24;
      }
      if ( v38 > 0xFFFFFFFFFFFFFFFLL )
        v47 = 0LL;
      else
        v47 = operator new(16 * v38, (const struct std::nothrow_t *)&std::nothrow);
      *(_QWORD *)(v25 + 16) = v47;
      if ( v47 )
      {
        utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_InitBuckets(v25);
        goto LABEL_19;
      }
LABEL_51:
      operator delete(v27);
    }
    v21 = -2147024882;
  }
LABEL_24:
  LeaveCriticalSection(v14);
  return (unsigned int)v21;
}
