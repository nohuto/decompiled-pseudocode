/*
 * XREFs of ?CleanupClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXXZ @ 0x18000F89C
 * Callers:
 *     ?InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x180006E38 (-InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ.c)
 *     ??1ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ @ 0x18000F80C (--1ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ.c)
 * Callees:
 *     RmpClientWnfDestroySubscription @ 0x18000E6A4 (RmpClientWnfDestroySubscription.c)
 *     ??$RpcCall@P6AJPEAPEAX@ZPEAPEAX@Shared@DevPlat@@YAJP6AJPEAPEAX@Z0@Z @ 0x18000F7AC (--$RpcCall@P6AJPEAPEAX@ZPEAPEAX@Shared@DevPlat@@YAJP6AJPEAPEAX@Z0@Z.c)
 */

void __fastcall ExecutionModel::ResourcePolicyEngineProxy::CleanupClientCallbackContext(
        ExecutionModel::ResourcePolicyEngineProxy *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
  {
    DevPlat::Shared::RpcCall<long (*)(void * *),void * *>((__int64)this, (__int64)this + 24);
    *v1 = 0LL;
    RmpClientWnfDestroySubscription((_QWORD *)this + 7);
    NtDeleteWnfStateName((char *)this + 48);
  }
}
