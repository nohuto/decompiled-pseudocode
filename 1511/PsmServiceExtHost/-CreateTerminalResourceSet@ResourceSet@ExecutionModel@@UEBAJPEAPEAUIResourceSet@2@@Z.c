/*
 * XREFs of ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x1800040D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x180002518 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000456C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateTerminalResourceSet(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::IResourceSet **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  int TerminalResourceSetFromResourceSetInfo; // ebx
  int v7; // edx
  int v8; // r9d
  char *v9; // r8
  __int64 v10; // r10
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // r11
  __int128 v14; // xmm1
  __int64 v15; // rdx
  __int64 v16; // r9
  int v18; // [rsp+28h] [rbp-1A0h]
  int v19; // [rsp+30h] [rbp-198h]
  _DWORD v20[92]; // [rsp+50h] [rbp-178h] BYREF
  void *Block; // [rsp+1D0h] [rbp+8h] BYREF

  Block = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v4 = *(_QWORD *)this;
  v5 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
  TerminalResourceSetFromResourceSetInfo = (*(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, __int64))(v4 + 56))(
                                             this,
                                             v5);
  if ( TerminalResourceSetFromResourceSetInfo >= 0 )
  {
    v7 = *((_DWORD *)this - 308);
    if ( v7 )
    {
      v8 = *((_DWORD *)this - 309);
      v9 = (char *)this - 1304;
      v10 = *((_QWORD *)this - 153);
    }
    else
    {
      v9 = 0LL;
      v8 = 0;
      v10 = -1LL;
    }
    v11 = Block;
    v12 = v20;
    v13 = 2LL;
    do
    {
      *v12 = *v11;
      v12[1] = v11[1];
      v12[2] = v11[2];
      v12[3] = v11[3];
      v12[4] = v11[4];
      v12[5] = v11[5];
      v12[6] = v11[6];
      v12 += 8;
      v14 = v11[7];
      v11 += 8;
      *(v12 - 1) = v14;
      --v13;
    }
    while ( v13 );
    *v12 = *v11;
    v19 = v7;
    v15 = *((_QWORD *)this + 4);
    v18 = v8;
    v16 = *((_QWORD *)this - 167);
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[3];
    v12[4] = v11[4];
    v12[5] = v11[5];
    *((_QWORD *)v12 + 12) = *((_QWORD *)v11 + 12);
    TerminalResourceSetFromResourceSetInfo = ExecutionModel::ResourceManager::CreateTerminalResourceSetFromResourceSetInfo(
                                               *((_QWORD *)this - 168),
                                               v15,
                                               v20,
                                               v16,
                                               (__int64)v9,
                                               v18,
                                               v19,
                                               v10,
                                               (__int64 *)a2);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( Block )
    operator delete(Block);
  return (unsigned int)TerminalResourceSetFromResourceSetInfo;
}
