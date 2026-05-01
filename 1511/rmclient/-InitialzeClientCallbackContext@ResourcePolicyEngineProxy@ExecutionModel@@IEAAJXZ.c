/*
 * XREFs of ?InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x180007718
 * Callers:
 *     ?Init@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x1800076B0 (-Init@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ.c)
 * Callees:
 *     ??$RpcCall@P6AJPEAXPEAU_WNF_STATE_NAME@@PEAPEAX@ZPEAXPEAU1@PEAPEAX@Shared@DevPlat@@YAJP6AJPEAXPEAU_WNF_STATE_NAME@@PEAPEAX@Z012@Z @ 0x180007568 (--$RpcCall@P6AJPEAXPEAU_WNF_STATE_NAME@@PEAPEAX@ZPEAXPEAU1@PEAPEAX@Shared@DevPlat@@YAJP6AJPEAXPE.c)
 *     ?InitializeWnfStateName@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x1800075B4 (-InitializeWnfStateName@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ.c)
 *     RmpClientWnfCreateSubscription @ 0x180007950 (RmpClientWnfCreateSubscription.c)
 *     RmpClientWnfDestroySubscription @ 0x18000F0BC (RmpClientWnfDestroySubscription.c)
 *     ?CleanupClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXXZ @ 0x18001015C (-CleanupClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineProxy::InitialzeClientCallbackContext(
        ExecutionModel::ResourcePolicyEngineProxy *this)
{
  char v2; // si
  char v3; // bp
  int Subscription; // ebx
  __int64 v5; // rcx
  int Pointer; // ebx

  v2 = 0;
  v3 = 0;
  Subscription = ExecutionModel::ResourcePolicyEngineProxy::InitializeWnfStateName((struct _WNF_STATE_NAME *)this);
  if ( Subscription < 0
    || (v2 = 1,
        Subscription = RmpClientWnfCreateSubscription(
                         (int)this + 48,
                         0,
                         (unsigned int)ExecutionModel::ResourcePolicyEngineProxy::ResourceSetCallbackThunk,
                         (_DWORD)this,
                         (__int64)this + 56),
        Subscription < 0) )
  {
    Pointer = Subscription | 0x10000000;
  }
  else
  {
    v3 = 1;
    Pointer = (unsigned int)DevPlat::Shared::RpcCall<long (*)(void *,_WNF_STATE_NAME *,void * *),void *,_WNF_STATE_NAME *,void * *>(
                              v5,
                              *((_QWORD *)this + 2),
                              (__int64)this + 48,
                              (__int64)this + 24).Pointer;
  }
  if ( Pointer < 0 )
  {
    if ( *((_QWORD *)this + 3) )
    {
      ExecutionModel::ResourcePolicyEngineProxy::CleanupClientCallbackContext(this);
    }
    else
    {
      if ( v3 )
        RmpClientWnfDestroySubscription((char *)this + 56);
      if ( v2 )
        NtDeleteWnfStateName((char *)this + 48);
    }
  }
  return (unsigned int)Pointer;
}
