/*
 * XREFs of ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180040370
 * Callers:
 *     <none>
 * Callees:
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000509C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x1800351D4 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateTerminalResourceSet(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::IResourceSet **a2)
{
  __int64 v4; // rbx
  void **v5; // rdi
  int TerminalResourceSetFromResourceSetInfo; // ebx
  int v7; // edx
  char *v8; // r8
  int v9; // r9d
  __int64 v10; // r10
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // r11
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rdx
  __int128 v24; // xmm1
  char *v25; // r9
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int v29; // [rsp+28h] [rbp-190h]
  int v30; // [rsp+30h] [rbp-188h]
  _DWORD v31[88]; // [rsp+50h] [rbp-168h] BYREF
  void *Block; // [rsp+1C0h] [rbp+8h] BYREF

  Block = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v4 = *(_QWORD *)this;
  v5 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
  TerminalResourceSetFromResourceSetInfo = (*(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, void **))(v4 + 56))(
                                             this,
                                             v5);
  if ( TerminalResourceSetFromResourceSetInfo >= 0 )
  {
    v7 = *((_DWORD *)this - 308);
    if ( v7 )
    {
      v9 = *((_DWORD *)this - 309);
      v8 = (char *)this - 1304;
      v10 = *((_QWORD *)this - 153);
    }
    else
    {
      v8 = 0LL;
      v9 = 0;
      v10 = -1LL;
    }
    v11 = Block;
    v12 = v31;
    v13 = 2LL;
    do
    {
      v14 = v11[1];
      *v12 = *v11;
      v15 = v11[2];
      v12[1] = v14;
      v16 = v11[3];
      v12[2] = v15;
      v17 = v11[4];
      v12[3] = v16;
      v18 = v11[5];
      v12[4] = v17;
      v19 = v11[6];
      v12[5] = v18;
      v20 = v11[7];
      v11 += 8;
      v12[6] = v19;
      v12 += 8;
      *(v12 - 1) = v20;
      --v13;
    }
    while ( v13 );
    v21 = v11[1];
    *v12 = *v11;
    v30 = v7;
    v22 = v11[2];
    v23 = *((_QWORD *)this + 4);
    v12[1] = v21;
    v29 = v9;
    v24 = v11[3];
    v25 = (char *)*((_QWORD *)this - 167);
    v12[2] = v22;
    v26 = v11[4];
    v12[3] = v24;
    v27 = v11[5];
    v12[4] = v26;
    v12[5] = v27;
    TerminalResourceSetFromResourceSetInfo = ExecutionModel::ResourceManager::CreateTerminalResourceSetFromResourceSetInfo(
                                               *((_QWORD *)this - 168),
                                               v23,
                                               v31,
                                               v25,
                                               (__int64)v8,
                                               v29,
                                               v30,
                                               v10,
                                               (char *)a2);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( Block )
    operator delete(Block);
  return (unsigned int)TerminalResourceSetFromResourceSetInfo;
}
