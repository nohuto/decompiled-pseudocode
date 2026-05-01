/*
 * XREFs of ?RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEA_K@Z @ 0x18002C6C8
 * Callers:
 *     RmtSrv_RM_CreateTerminalResourceSet @ 0x180029A50 (RmtSrv_RM_CreateTerminalResourceSet.c)
 * Callees:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEBGPEAT_RM_SID@@KK_KPEAPEAVResourceSet@2@@Z @ 0x180001670 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSet.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180013738 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001376C (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvCreateTerminalResourceSetFromResourceSetInfo(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        unsigned __int64 *a3)
{
  __int64 v6; // rdi
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  _BYTE *v10; // rdx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rax
  __int128 v19; // xmm1
  ExecutionModel::ResourceManager *v20; // rcx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  struct _RM_PARTITION *v26; // rbx
  const struct _TlgProvider_t *v27; // rcx
  unsigned __int64 v28; // rax
  const struct _TlgProvider_t *v29; // rcx
  const GUID *v30; // r8
  const GUID *v31; // r9
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  struct _RM_PARTITION *v34; // [rsp+58h] [rbp-A8h] BYREF
  struct ExecutionModel::ResourceSet *v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v37[384]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v38; // [rsp+1F0h] [rbp+F0h] BYREF
  int *v39; // [rsp+210h] [rbp+110h]
  int v40; // [rsp+218h] [rbp+118h]
  int v41; // [rsp+21Ch] [rbp+11Ch]
  __int64 *v42; // [rsp+220h] [rbp+120h]
  int v43; // [rsp+228h] [rbp+128h]
  int v44; // [rsp+22Ch] [rbp+12Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+240h] [rbp+140h] BYREF

  v34 = 0LL;
  v35 = 0LL;
  v36 = -1LL;
  v6 = 2LL;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v7, &unk_180040A11, v8, v9, 2u, &pData);
  RmpPartitionTableFindOrCreatePartition((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312), *((void **)a1 + 45), &v34);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v10 = v37;
  do
  {
    v11 = *((_OWORD *)a2 + 1);
    *(_OWORD *)v10 = *(_OWORD *)a2;
    v12 = *((_OWORD *)a2 + 2);
    *((_OWORD *)v10 + 1) = v11;
    v13 = *((_OWORD *)a2 + 3);
    *((_OWORD *)v10 + 2) = v12;
    v14 = *((_OWORD *)a2 + 4);
    *((_OWORD *)v10 + 3) = v13;
    v15 = *((_OWORD *)a2 + 5);
    *((_OWORD *)v10 + 4) = v14;
    v16 = *((_OWORD *)a2 + 6);
    *((_OWORD *)v10 + 5) = v15;
    v17 = *((_OWORD *)a2 + 7);
    a2 = (struct ExecutionModel::_ResourceSetInfo *)((char *)a2 + 128);
    *((_OWORD *)v10 + 6) = v16;
    v10 += 128;
    *((_OWORD *)v10 - 1) = v17;
    --v6;
  }
  while ( v6 );
  v18 = *((_QWORD *)a2 + 14);
  v19 = *((_OWORD *)a2 + 1);
  v20 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 191);
  *(_OWORD *)v10 = *(_OWORD *)a2;
  v21 = *((_OWORD *)a2 + 2);
  *((_OWORD *)v10 + 1) = v19;
  v22 = *((_OWORD *)a2 + 3);
  *((_OWORD *)v10 + 2) = v21;
  v23 = *((_OWORD *)a2 + 4);
  *((_OWORD *)v10 + 3) = v22;
  v24 = *((_OWORD *)a2 + 5);
  *((_OWORD *)v10 + 4) = v23;
  v25 = *((_OWORD *)a2 + 6);
  v26 = v34;
  *((_OWORD *)v10 + 5) = v24;
  *((_OWORD *)v10 + 6) = v25;
  *((_QWORD *)v10 + 14) = v18;
  v33 = ExecutionModel::ResourceManager::CreateTerminalResourceSetFromResourceSetInfo(
          v20,
          (__int64)v37,
          v26,
          0LL,
          0LL,
          0,
          0,
          0xFFFFFFFFFFFFFFFFuLL,
          &v35);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  v27 = v35;
  if ( v33 >= 0 )
  {
    v28 = *((_QWORD *)v35 + 230);
    v33 = 0;
    v36 = v28;
    *a3 = v28;
  }
  if ( v27 )
    (*(void (__fastcall **)(const struct _TlgProvider_t *))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v26 )
    RmpPartitionRelease((HANDLE *)v26);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v27, 9uLL) )
  {
    v41 = 0;
    v44 = 0;
    v39 = &v33;
    v42 = &v36;
    v40 = 4;
    v43 = 8;
    TlgWrite(v29, &unk_180040ED1, v30, v31, 4u, &v38);
  }
  return (unsigned int)v33;
}
