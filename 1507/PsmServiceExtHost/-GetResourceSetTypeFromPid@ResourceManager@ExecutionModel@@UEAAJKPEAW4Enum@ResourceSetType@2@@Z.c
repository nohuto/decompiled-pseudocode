/*
 * XREFs of ?GetResourceSetTypeFromPid@ResourceManager@ExecutionModel@@UEAAJKPEAW4Enum@ResourceSetType@2@@Z @ 0x18003ED20
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityHostFindProcessResourceSet @ 0x180002CA8 (RmpActivityHostFindProcessResourceSet.c)
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000509C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetResourceSetTypeFromPid(
        ExecutionModel::ResourceManager *this,
        int a2,
        enum ExecutionModel::ResourceSetType::Enum *a3)
{
  int v4; // ebx
  __int64 ProcessResourceSet; // rax
  void *v6; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbx
  void **v10; // rdi
  void *Block; // [rsp+40h] [rbp+18h] BYREF

  Block = 0LL;
  if ( !a3 )
    return (unsigned int)-2147024809;
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(a2);
  if ( !ProcessResourceSet )
  {
    v4 = -2147024809;
LABEL_5:
    v6 = Block;
    goto LABEL_6;
  }
  v8 = ProcessResourceSet + 1368;
  v9 = *(_QWORD *)(ProcessResourceSet + 1368);
  v10 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
  v4 = (*(__int64 (__fastcall **)(__int64, void **))(v9 + 56))(v8, v10);
  if ( v4 < 0 )
    goto LABEL_5;
  v6 = Block;
  *(_DWORD *)a3 = *(_DWORD *)Block;
LABEL_6:
  if ( v6 )
    operator delete(v6);
  return (unsigned int)v4;
}
