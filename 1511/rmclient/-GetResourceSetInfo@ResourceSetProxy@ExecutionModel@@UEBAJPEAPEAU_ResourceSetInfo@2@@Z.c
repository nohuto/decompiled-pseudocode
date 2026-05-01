/*
 * XREFs of ?GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800049E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x180004F50 (-ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetTyp.c)
 *     ??$RpcCall@P6AJPEAXJPEAU_RPC_ResourcePolicyDetails@@@ZPEAXJPEAU1@@Shared@DevPlat@@YAJP6AJPEAXJPEAU_RPC_ResourcePolicyDetails@@@Z0J1@Z @ 0x180005500 (--$RpcCall@P6AJPEAXJPEAU_RPC_ResourcePolicyDetails@@@ZPEAXJPEAU1@@Shared@DevPlat@@YAJP6AJPEAXJPE.c)
 *     ?CreateInstance@ResourcePolicyStoreProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyStore@2@@Z @ 0x180007ABC (-CreateInstance@ResourcePolicyStoreProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyStore@2@@Z.c)
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ??_GResourcePolicyStoreProxy@ExecutionModel@@IEAAPEAXI@Z @ 0x180009468 (--_GResourcePolicyStoreProxy@ExecutionModel@@IEAAPEAXI@Z.c)
 *     memset_0 @ 0x1800095EC (memset_0.c)
 *     ??1SimpleLock@Shared@DevPlat@@QEAA@XZ @ 0x18000C318 (--1SimpleLock@Shared@DevPlat@@QEAA@XZ.c)
 *     ?GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore@2@W4Enum@ResourceSetType@2@PEAW4RmResourceSetType@@@Z @ 0x180010B84 (-GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore.c)
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
  __int64 v12; // r15
  volatile signed __int32 *v13; // rbx
  unsigned int v14; // edx
  __int64 (__fastcall *v15)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 v16; // rcx
  int v17; // eax
  unsigned int (__fastcall *v18)(ExecutionModel::ResourcePolicyStoreProxy *__hidden); // r14
  struct ExecutionModel::_ResourceSetInfo *v19; // rax
  struct ExecutionModel::_ResourceSetInfo *v20; // rdx
  struct ExecutionModel::_ResourceSetInfo *v21; // rcx
  __int64 v22; // r8
  _DWORD *v23; // rax
  __int128 v24; // xmm0
  _DWORD *v25; // rcx
  __int128 v26; // xmm0
  unsigned int v28; // [rsp+20h] [rbp-E0h] BYREF
  struct ExecutionModel::_ResourceSetInfo **v29; // [rsp+28h] [rbp-D8h]
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+30h] [rbp-D0h] BYREF
  char v31; // [rsp+38h] [rbp-C8h]
  ExecutionModel::ResourcePolicyStoreProxy *v32; // [rsp+40h] [rbp-C0h]
  _DWORD v33[6]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v34; // [rsp+68h] [rbp-98h]
  char v35; // [rsp+6Ah] [rbp-96h]
  int v36; // [rsp+6Ch] [rbp-94h]
  int v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  int v41; // [rsp+90h] [rbp-70h]
  int v42; // [rsp+98h] [rbp-68h]
  char v43; // [rsp+A8h] [rbp-58h] BYREF
  int v44; // [rsp+B0h] [rbp-50h]
  int v45; // [rsp+C8h] [rbp-38h]
  char v46; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v47; // [rsp+1A0h] [rbp+A0h]
  __int64 v48; // [rsp+1A8h] [rbp+A8h]
  int v49; // [rsp+1B4h] [rbp+B4h]
  _BYTE v50[112]; // [rsp+1C0h] [rbp+C0h] BYREF

  v29 = a2;
  v33[1] = 0;
  v2 = 2LL;
  v33[0] = -1;
  v33[2] = -1;
  v4 = a2;
  v33[3] = 101;
  Instance = 0;
  v33[4] = 32;
  v37 = 0;
  v6 = &v43;
  v39 = 0LL;
  v7 = 2;
  v40 = 0LL;
  v41 = 0;
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
  v47 = 0LL;
  v8 = &v46;
  v48 = 0LL;
  v44 = 1;
  v9 = 3LL;
  v42 = 0;
  v45 = 2;
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
  v49 = 0;
  v34 = 0;
  v35 = 0;
  v38 = 0LL;
  v36 = 1;
  v33[5] = 0;
  if ( !*((_QWORD *)this + 3) )
  {
    v33[0] = *((_DWORD *)this + 8);
    goto LABEL_21;
  }
  v10 = *((_DWORD *)this + 8);
  v30 = &ExecutionModel::s_csProxy;
  v31 = 0;
  EnterCriticalSection(&ExecutionModel::s_csProxy);
  v12 = qword_180024800;
  if ( qword_180024800 )
    goto LABEL_7;
  v13 = 0LL;
  v32 = 0LL;
  Instance = ExecutionModel::ResourcePolicyStoreProxy::CreateInstance(v11);
  if ( Instance >= 0 )
  {
    v12 = qword_180024800;
LABEL_7:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = (volatile signed __int32 *)qword_180024800;
    v32 = (ExecutionModel::ResourcePolicyStoreProxy *)qword_180024800;
    LeaveCriticalSection(&ExecutionModel::s_csProxy);
    goto LABEL_8;
  }
  DevPlat::Shared::SimpleLock::~SimpleLock((DevPlat::Shared::SimpleLock *)&v30);
LABEL_8:
  if ( Instance >= 0 )
  {
    memset_0(v50, 0, sizeof(v50));
    v28 = 57;
    if ( (int)v10 >= 57 )
    {
      v28 = v10;
      goto LABEL_11;
    }
    Instance = ExecutionModel::ResourcePolicyEngineHelper::GetKeyForResourceSetType(v13, v10, &v28);
    if ( Instance >= 0 )
    {
      v10 = v28;
LABEL_11:
      v15 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v13 + 32LL);
      if ( (char *)v15 == (char *)&ExecutionModel::ResourcePolicyStoreProxy::GetResourcePolicyInformation )
      {
        memset_0(v50, 0, sizeof(v50));
        v17 = DevPlat::Shared::RpcCall<long (*)(void *,long,_RPC_ResourcePolicyDetails *),void *,long,_RPC_ResourcePolicyDetails *>(
                v16,
                *((_QWORD *)v13 + 2),
                v10,
                v50);
      }
      else
      {
        v17 = v15(v13, v10, v50);
      }
      Instance = v17;
      if ( v17 >= 0 )
        Instance = ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo(v28, v50, v33);
    }
  }
  v33[0] = *((_DWORD *)this + 8);
  if ( v13 )
  {
    v18 = *(unsigned int (__fastcall **)(ExecutionModel::ResourcePolicyStoreProxy *__hidden))(*(_QWORD *)v13 + 16LL);
    if ( v18 == ExecutionModel::ResourcePolicyStoreProxy::Release )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
        ExecutionModel::ResourcePolicyStoreProxy::`scalar deleting destructor'(v32, v14);
    }
    else
    {
      v18((ExecutionModel::ResourcePolicyStoreProxy *)v13);
    }
  }
  if ( Instance < 0 )
    return (unsigned int)Instance;
  v4 = v29;
LABEL_21:
  v19 = (struct ExecutionModel::_ResourceSetInfo *)malloc(0x168uLL);
  v20 = v19;
  if ( v19 )
  {
    v21 = v19;
    v22 = 2LL;
    v23 = v33;
    do
    {
      v21 = (struct ExecutionModel::_ResourceSetInfo *)((char *)v21 + 128);
      v24 = *(_OWORD *)v23;
      v23 += 32;
      *((_OWORD *)v21 - 8) = v24;
      *((_OWORD *)v21 - 7) = *((_OWORD *)v23 - 7);
      *((_OWORD *)v21 - 6) = *((_OWORD *)v23 - 6);
      *((_OWORD *)v21 - 5) = *((_OWORD *)v23 - 5);
      *((_OWORD *)v21 - 4) = *((_OWORD *)v23 - 4);
      *((_OWORD *)v21 - 3) = *((_OWORD *)v23 - 3);
      *((_OWORD *)v21 - 2) = *((_OWORD *)v23 - 2);
      *((_OWORD *)v21 - 1) = *((_OWORD *)v23 - 1);
      --v22;
    }
    while ( v22 );
    *(_OWORD *)v21 = *(_OWORD *)v23;
    *((_OWORD *)v21 + 1) = *((_OWORD *)v23 + 1);
    *((_OWORD *)v21 + 2) = *((_OWORD *)v23 + 2);
    *((_OWORD *)v21 + 3) = *((_OWORD *)v23 + 3);
    *((_OWORD *)v21 + 4) = *((_OWORD *)v23 + 4);
    *((_OWORD *)v21 + 5) = *((_OWORD *)v23 + 5);
    *((_QWORD *)v21 + 12) = *((_QWORD *)v23 + 12);
  }
  else
  {
    v20 = 0LL;
  }
  *v4 = v20;
  if ( v20 )
  {
    v25 = v33;
    do
    {
      v20 = (struct ExecutionModel::_ResourceSetInfo *)((char *)v20 + 128);
      v26 = *(_OWORD *)v25;
      v25 += 32;
      *((_OWORD *)v20 - 8) = v26;
      *((_OWORD *)v20 - 7) = *((_OWORD *)v25 - 7);
      *((_OWORD *)v20 - 6) = *((_OWORD *)v25 - 6);
      *((_OWORD *)v20 - 5) = *((_OWORD *)v25 - 5);
      *((_OWORD *)v20 - 4) = *((_OWORD *)v25 - 4);
      *((_OWORD *)v20 - 3) = *((_OWORD *)v25 - 3);
      *((_OWORD *)v20 - 2) = *((_OWORD *)v25 - 2);
      *((_OWORD *)v20 - 1) = *((_OWORD *)v25 - 1);
      --v2;
    }
    while ( v2 );
    *(_OWORD *)v20 = *(_OWORD *)v25;
    *((_OWORD *)v20 + 1) = *((_OWORD *)v25 + 1);
    *((_OWORD *)v20 + 2) = *((_OWORD *)v25 + 2);
    *((_OWORD *)v20 + 3) = *((_OWORD *)v25 + 3);
    *((_OWORD *)v20 + 4) = *((_OWORD *)v25 + 4);
    *((_OWORD *)v20 + 5) = *((_OWORD *)v25 + 5);
    *((_QWORD *)v20 + 12) = *((_QWORD *)v25 + 12);
    return (unsigned int)Instance;
  }
  return 2147942414LL;
}
