/*
 * XREFs of ?RmGetResourceSetTypePolicy@ResourceManager@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18003E1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000456C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAURmResourceSetInfo@@@Z @ 0x18003C128 (-CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAURmResourceS.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmGetResourceSetTypePolicy(
        __int64 *a1,
        unsigned int a2,
        struct RmResourceSetInfo *a3)
{
  __int64 v3; // rbx
  void **v7; // rdi
  ExecutionModel::ResourceManager *v8; // rcx
  int v9; // ebx
  void *Block; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  Block = 0LL;
  v7 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, void **))(v3 + 320))(a1, a2, v7);
  if ( v9 >= 0 )
    v9 = ExecutionModel::ResourceManager::CopyResourceSetInfo(
           v8,
           (const struct ExecutionModel::_ResourceSetInfo *)Block,
           a3);
  if ( Block )
    operator delete(Block);
  return (unsigned int)v9;
}
