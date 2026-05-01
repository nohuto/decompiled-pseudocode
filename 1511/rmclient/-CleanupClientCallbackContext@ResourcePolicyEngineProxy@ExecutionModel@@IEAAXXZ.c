/*
 * XREFs of ?CleanupClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXXZ @ 0x18001015C
 * Callers:
 *     ?InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x180007718 (-InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ.c)
 *     ??1ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ @ 0x1800100CC (--1ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ.c)
 * Callees:
 *     RmpClientWnfDestroySubscription @ 0x18000F0BC (RmpClientWnfDestroySubscription.c)
 *     ??$RpcCall@P6AJPEAPEAX@ZPEAPEAX@Shared@DevPlat@@YAJP6AJPEAPEAX@Z0@Z @ 0x18001006C (--$RpcCall@P6AJPEAPEAX@ZPEAPEAX@Shared@DevPlat@@YAJP6AJPEAPEAX@Z0@Z.c)
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
