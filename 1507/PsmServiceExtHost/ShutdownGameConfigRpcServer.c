/*
 * XREFs of ShutdownGameConfigRpcServer @ 0x1800438BC
 * Callers:
 *     PsmInitializeServiceExtension3 @ 0x180022550 (PsmInitializeServiceExtension3.c)
 * Callees:
 *     ??1SimpleLock@Shared@DevPlat@@QEAA@XZ @ 0x180022728 (--1SimpleLock@Shared@DevPlat@@QEAA@XZ.c)
 *     ??0SimpleLock@Shared@DevPlat@@QEAA@PEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180022748 (--0SimpleLock@Shared@DevPlat@@QEAA@PEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?DeleteGameConfigServers@Internal@ExecutionModel@@YAJXZ @ 0x180042EEC (-DeleteGameConfigServers@Internal@ExecutionModel@@YAJXZ.c)
 *     ?ShutdownRPCServerInSession@Shared@DevPlat@@YAJKPEAX@Z @ 0x18004D1FC (-ShutdownRPCServerInSession@Shared@DevPlat@@YAJKPEAX@Z.c)
 */

__int64 __fastcall ShutdownGameConfigRpcServer(__int64 a1, struct _RTL_CRITICAL_SECTION *a2)
{
  DevPlat::Shared *v2; // rcx
  void *v3; // r8
  ExecutionModel::Internal *v4; // rcx
  int v5; // ebx
  LPCRITICAL_SECTION v7[3]; // [rsp+20h] [rbp-18h] BYREF

  DevPlat::Shared::SimpleLock::SimpleLock((DevPlat::Shared::SimpleLock *)v7, a2);
  ExecutionModel::Internal::_shutDown = 1;
  v5 = DevPlat::Shared::ShutdownRPCServerInSession(v2, (unsigned int)L"`", v3);
  if ( v5 >= 0 )
    v5 = ExecutionModel::Internal::DeleteGameConfigServers(v4);
  DevPlat::Shared::SimpleLock::~SimpleLock(v7);
  return (unsigned int)v5;
}
