/*
 * XREFs of ?GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800050C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x180005620 (-ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetTyp.c)
 *     ??$RpcCall@P6AJPEAXJPEAU_RPC_ResourcePolicyDetails@@@ZPEAXJPEAU1@@Shared@DevPlat@@YAJP6AJPEAXJPEAU_RPC_ResourcePolicyDetails@@@Z0J1@Z @ 0x180005D00 (--$RpcCall@P6AJPEAXJPEAU_RPC_ResourcePolicyDetails@@@ZPEAXJPEAU1@@Shared@DevPlat@@YAJP6AJPEAXJPE.c)
 *     ?CreateInstance@ResourcePolicyStoreProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyStore@2@@Z @ 0x180006AD4 (-CreateInstance@ResourcePolicyStoreProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyStore@2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180008208 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     memset_0 @ 0x180008DF8 (memset_0.c)
 *     ??1SimpleLock@Shared@DevPlat@@QEAA@XZ @ 0x18000B8EC (--1SimpleLock@Shared@DevPlat@@QEAA@XZ.c)
 *     ?GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore@2@W4Enum@ResourceSetType@2@PEAW4RmResourceSetType@@@Z @ 0x18000FFE4 (-GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetProxy::GetResourceSetInfo(
        ExecutionModel::ResourceSetProxy *this,
        struct ExecutionModel::_ResourceSetInfo **a2)
{
  __int64 v2; // r12
  struct ExecutionModel::_ResourceSetInfo **v4; // rbx
  int Instance; // esi
  char *v6; // rax
  int v7; // ecx
  char *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r14d
  struct ExecutionModel::IResourcePolicyStore **v11; // rcx
  ExecutionModel::ResourcePolicyStoreProxy *v12; // r15
  volatile signed __int32 *v13; // rbx
  __int64 (__fastcall *v14)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 v15; // rcx
  int v16; // eax
  unsigned int (__fastcall *v17)(ExecutionModel::ResourcePolicyStoreProxy *__hidden); // r14
  __int128 *v18; // rax
  __int128 *v19; // rcx
  __int128 *v20; // rdx
  __int64 v21; // r8
  __int128 v22; // xmm0
  __int128 *v23; // rcx
  __int128 v24; // xmm0
  unsigned int v26; // [rsp+20h] [rbp-E0h] BYREF
  struct ExecutionModel::_ResourceSetInfo **v27; // [rsp+28h] [rbp-D8h]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+30h] [rbp-D0h] BYREF
  char v29; // [rsp+38h] [rbp-C8h]
  void *Block; // [rsp+40h] [rbp-C0h]
  _DWORD v31[6]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v32; // [rsp+68h] [rbp-98h]
  char v33; // [rsp+6Ah] [rbp-96h]
  int v34; // [rsp+6Ch] [rbp-94h]
  int v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+90h] [rbp-70h]
  char v40; // [rsp+A0h] [rbp-60h] BYREF
  int v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+C0h] [rbp-40h]
  char v43; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v44; // [rsp+198h] [rbp+98h]
  __int64 v45; // [rsp+1A0h] [rbp+A0h]
  int v46; // [rsp+1ACh] [rbp+ACh]
  _BYTE v47[112]; // [rsp+1B0h] [rbp+B0h] BYREF

  v27 = a2;
  v31[1] = 0;
  v2 = 2LL;
  v31[0] = -1;
  v31[2] = -1;
  v4 = a2;
  v31[3] = 101;
  Instance = 0;
  v31[4] = 32;
  v35 = 0;
  v6 = &v40;
  v36 = 0LL;
  v7 = 2;
  v37 = 0LL;
  v38 = 0;
  do
  {
    --v7;
    *((_DWORD *)v6 - 4) = -1;
    *((_QWORD *)v6 - 1) = 0LL;
    *(_DWORD *)v6 = 101;
    *((_WORD *)v6 + 2) = 0;
    v6 += 24;
  }
  while ( v7 >= 0 );
  v44 = 0LL;
  v8 = &v43;
  v45 = 0LL;
  v41 = 1;
  v9 = 3LL;
  v39 = 0;
  v42 = 2;
  do
  {
    *(_QWORD *)v8 = 0x6500000065LL;
    *((_QWORD *)v8 + 1) = 0x6500000065LL;
    *((_QWORD *)v8 + 2) = 0x6500000065LL;
    v8 += 64;
    *((_QWORD *)v8 - 5) = 0x6500000065LL;
    *((_QWORD *)v8 - 4) = 0x6500000065LL;
    *((_QWORD *)v8 - 3) = 0x6500000065LL;
    *((_QWORD *)v8 - 2) = 0x6500000065LL;
    *((_QWORD *)v8 - 1) = 0x6500000065LL;
    --v9;
  }
  while ( v9 );
  v46 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 1;
  v31[5] = 0;
  if ( !*((_QWORD *)this + 3) )
  {
    v31[0] = *((_DWORD *)this + 8);
    goto LABEL_21;
  }
  v10 = *((_DWORD *)this + 8);
  v28 = &ExecutionModel::s_csProxy;
  v29 = 0;
  EnterCriticalSection(&ExecutionModel::s_csProxy);
  v12 = qword_180022798;
  if ( qword_180022798 )
    goto LABEL_7;
  v13 = 0LL;
  Block = 0LL;
  Instance = ExecutionModel::ResourcePolicyStoreProxy::CreateInstance(v11);
  if ( Instance >= 0 )
  {
    v12 = qword_180022798;
LABEL_7:
    (*(void (__fastcall **)(ExecutionModel::ResourcePolicyStoreProxy *))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = (volatile signed __int32 *)qword_180022798;
    Block = qword_180022798;
    LeaveCriticalSection(&ExecutionModel::s_csProxy);
    goto LABEL_8;
  }
  DevPlat::Shared::SimpleLock::~SimpleLock((DevPlat::Shared::SimpleLock *)&v28);
LABEL_8:
  if ( Instance >= 0 )
  {
    memset_0(v47, 0, sizeof(v47));
    v26 = 57;
    if ( (int)v10 >= 57 )
    {
      v26 = v10;
      goto LABEL_11;
    }
    Instance = ExecutionModel::ResourcePolicyEngineHelper::GetKeyForResourceSetType(v13, v10, &v26);
    if ( Instance >= 0 )
    {
      v10 = v26;
LABEL_11:
      v14 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v13 + 32LL);
      if ( (char *)v14 == (char *)&ExecutionModel::ResourcePolicyStoreProxy::GetResourcePolicyInformation )
      {
        memset_0(v47, 0, sizeof(v47));
        v16 = DevPlat::Shared::RpcCall<long (*)(void *,long,_RPC_ResourcePolicyDetails *),void *,long,_RPC_ResourcePolicyDetails *>(
                v15,
                *((_QWORD *)v13 + 2),
                v10,
                v47);
      }
      else
      {
        v16 = v14(v13, v10, v47);
      }
      Instance = v16;
      if ( v16 >= 0 )
        Instance = ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo(v26, v47, v31);
    }
  }
  v31[0] = *((_DWORD *)this + 8);
  if ( v13 )
  {
    v17 = *(unsigned int (__fastcall **)(ExecutionModel::ResourcePolicyStoreProxy *__hidden))(*(_QWORD *)v13 + 16LL);
    if ( v17 == ExecutionModel::ResourcePolicyStoreProxy::Release )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
        operator delete(Block);
    }
    else
    {
      v17((ExecutionModel::ResourcePolicyStoreProxy *)v13);
    }
  }
  if ( Instance < 0 )
    return (unsigned int)Instance;
  v4 = v27;
LABEL_21:
  v18 = (__int128 *)malloc(0x160uLL);
  if ( v18 )
  {
    v19 = v18;
    v20 = (__int128 *)v31;
    v21 = 2LL;
    do
    {
      v19 += 8;
      v22 = *v20;
      v20 += 8;
      *(v19 - 8) = v22;
      *(v19 - 7) = *(v20 - 7);
      *(v19 - 6) = *(v20 - 6);
      *(v19 - 5) = *(v20 - 5);
      *(v19 - 4) = *(v20 - 4);
      *(v19 - 3) = *(v20 - 3);
      *(v19 - 2) = *(v20 - 2);
      *(v19 - 1) = *(v20 - 1);
      --v21;
    }
    while ( v21 );
    *v19 = *v20;
    v19[1] = v20[1];
    v19[2] = v20[2];
    v19[3] = v20[3];
    v19[4] = v20[4];
    v19[5] = v20[5];
  }
  else
  {
    v18 = 0LL;
  }
  *v4 = (struct ExecutionModel::_ResourceSetInfo *)v18;
  if ( v18 )
  {
    v23 = (__int128 *)v31;
    do
    {
      v18 += 8;
      v24 = *v23;
      v23 += 8;
      *(v18 - 8) = v24;
      *(v18 - 7) = *(v23 - 7);
      *(v18 - 6) = *(v23 - 6);
      *(v18 - 5) = *(v23 - 5);
      *(v18 - 4) = *(v23 - 4);
      *(v18 - 3) = *(v23 - 3);
      *(v18 - 2) = *(v23 - 2);
      *(v18 - 1) = *(v23 - 1);
      --v2;
    }
    while ( v2 );
    *v18 = *v23;
    v18[1] = v23[1];
    v18[2] = v23[2];
    v18[3] = v23[3];
    v18[4] = v23[4];
    v18[5] = v23[5];
    return (unsigned int)Instance;
  }
  return 2147942414LL;
}
