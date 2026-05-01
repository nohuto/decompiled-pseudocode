/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSetProxy@ExecutionModel@@UEAAJW4Enum@ResourceSetType@2@@Z @ 0x1800101A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ResourcePolicyEngineHelper@ExecutionModel@@QEAA@XZ @ 0x18000B964 (--1ResourcePolicyEngineHelper@ExecutionModel@@QEAA@XZ.c)
 *     ??$RpcCall@P6AJPEAX_KK@ZPEAX_KK@Shared@DevPlat@@YAJP6AJPEAX_KK@Z01K@Z @ 0x18000FD2C (--$RpcCall@P6AJPEAX_KK@ZPEAX_KK@Shared@DevPlat@@YAJP6AJPEAX_KK@Z01K@Z.c)
 *     ?GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAW4RmResourceSetType@@@Z @ 0x18000FF80 (-GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@QEAAJW4Enum@ResourceSetType.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetProxy::NotifyPendingResourceSetTransition(__int64 a1, int a2)
{
  int KeyForResourceSetType; // ebx
  struct ExecutionModel::IResourcePolicyStore *v5[3]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v5[0] = 0LL;
  v6 = 57;
  if ( a2 >= 57 )
  {
    if ( a2 != 57 )
    {
      v6 = a2;
      goto LABEL_7;
    }
    KeyForResourceSetType = -2147024809;
  }
  else
  {
    KeyForResourceSetType = ExecutionModel::ResourcePolicyEngineHelper::GetKeyForResourceSetType(v5, a2, &v6);
    if ( KeyForResourceSetType >= 0 )
    {
      a2 = v6;
LABEL_7:
      KeyForResourceSetType = (unsigned int)DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,unsigned long),void *,unsigned __int64,unsigned long>(
                                              a1,
                                              *(_QWORD *)(a1 + 16),
                                              *(_QWORD *)(a1 + 24),
                                              a2).Pointer;
    }
  }
  ExecutionModel::ResourcePolicyEngineHelper::~ResourcePolicyEngineHelper((ExecutionModel::ResourcePolicyEngineHelper *)v5);
  return (unsigned int)KeyForResourceSetType;
}
