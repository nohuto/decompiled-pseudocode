/*
 * XREFs of ?IntializePolicyEngineRpcServer@@YAJXZ @ 0x180022774
 * Callers:
 *     PsmInitializeServiceExtension3 @ 0x180022550 (PsmInitializeServiceExtension3.c)
 * Callees:
 *     ?LaunchRPCServerInSession@Shared@DevPlat@@YAJPEBGKPEAXP6AJ11@ZH@Z @ 0x180022A80 (-LaunchRPCServerInSession@Shared@DevPlat@@YAJPEBGKPEAXP6AJ11@ZH@Z.c)
 *     ?ShutdownRPCServerInSession@Shared@DevPlat@@YAJKPEAX@Z @ 0x18004D1FC (-ShutdownRPCServerInSession@Shared@DevPlat@@YAJKPEAX@Z.c)
 */

__int64 __fastcall IntializePolicyEngineRpcServer(__int64 a1, const unsigned __int16 *a2, __int64 a3, void *a4)
{
  const unsigned __int16 *v4; // rdx
  DevPlat::Shared *v5; // rcx
  int v6; // ebx
  void *v7; // r8
  void *v8; // r9
  DevPlat::Shared *v10; // rcx
  void *v11; // r8
  int (*v12)(void *, void *); // [rsp+20h] [rbp-18h]
  int (*v13)(void *, void *); // [rsp+20h] [rbp-18h]
  int v14; // [rsp+28h] [rbp-10h]
  int v15; // [rsp+28h] [rbp-10h]

  LODWORD(v12) = 0;
  v6 = DevPlat::Shared::LaunchRPCServerInSession(
         (DevPlat::Shared *)L"ResourcePolicyEngineRpc",
         a2,
         (unsigned int)L"`",
         a4,
         v12,
         v14);
  if ( v6 < 0
    || (LODWORD(v13) = 1,
        v6 = DevPlat::Shared::LaunchRPCServerInSession(
               (DevPlat::Shared *)L"ResourcePolicyEnginePublicRpc",
               v4,
               (unsigned int)L"`",
               v8,
               v13,
               v15),
        v6 < 0) )
  {
    DevPlat::Shared::ShutdownRPCServerInSession(v5, (unsigned int)L"`", v7);
    DevPlat::Shared::ShutdownRPCServerInSession(v10, (unsigned int)L"`", v11);
  }
  return (unsigned int)v6;
}
