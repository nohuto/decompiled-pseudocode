/*
 * XREFs of ?CreateTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAPEAUIResourceSet@2@@Z @ 0x18003C220
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x180002518 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CreateTerminalResourceSet(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSet **a3)
{
  __int64 v6; // rax
  _OWORD *v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  unsigned int TerminalResourceSetFromResourceSetInfo; // ebx
  _DWORD v23[92]; // [rsp+50h] [rbp-178h] BYREF

  RtlEnterCriticalSection(&RmpGlobalLock);
  v6 = 2LL;
  v7 = v23;
  do
  {
    v8 = *((_OWORD *)a2 + 1);
    *v7 = *(_OWORD *)a2;
    v9 = *((_OWORD *)a2 + 2);
    v7[1] = v8;
    v10 = *((_OWORD *)a2 + 3);
    v7[2] = v9;
    v11 = *((_OWORD *)a2 + 4);
    v7[3] = v10;
    v12 = *((_OWORD *)a2 + 5);
    v7[4] = v11;
    v13 = *((_OWORD *)a2 + 6);
    v7[5] = v12;
    v14 = *((_OWORD *)a2 + 7);
    a2 = (struct ExecutionModel::_ResourceSetInfo *)((char *)a2 + 128);
    v7[6] = v13;
    v7 += 8;
    *(v7 - 1) = v14;
    --v6;
  }
  while ( v6 );
  v15 = *((_QWORD *)a2 + 12);
  v16 = *((_OWORD *)a2 + 1);
  *v7 = *(_OWORD *)a2;
  v17 = *((_OWORD *)a2 + 2);
  v7[1] = v16;
  v18 = *((_OWORD *)a2 + 3);
  v7[2] = v17;
  v19 = *((_OWORD *)a2 + 4);
  v7[3] = v18;
  v20 = *((_OWORD *)a2 + 5);
  v7[4] = v19;
  v7[5] = v20;
  *((_QWORD *)v7 + 12) = v15;
  TerminalResourceSetFromResourceSetInfo = ExecutionModel::ResourceManager::CreateTerminalResourceSetFromResourceSetInfo(
                                             (__int64)this,
                                             0LL,
                                             v23,
                                             0LL,
                                             0LL,
                                             0,
                                             0,
                                             -1LL,
                                             (__int64 *)a3);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return TerminalResourceSetFromResourceSetInfo;
}
