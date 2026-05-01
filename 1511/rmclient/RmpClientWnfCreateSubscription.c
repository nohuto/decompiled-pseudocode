/*
 * XREFs of RmpClientWnfCreateSubscription @ 0x180007950
 * Callers:
 *     ?InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x180007718 (-InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x180007CB8 (-Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z.c)
 *     RmpClientConnectToResourceManager @ 0x18000ECD0 (RmpClientConnectToResourceManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpClientWnfCreateSubscription(_QWORD *a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  int v13; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v9 = TpAllocWork(&v16, RmpClientWnfMessageQueueWorker, a5, 0LL);
  if ( v9 >= 0
    && ((v13 = 0, v9 = NtQueryWnfStateData(a1, 0LL, 0LL, &v14, 0LL, &v13), (int)(v9 + 0x80000000) < 0)
     || v9 == -1073741789)
    && (v9 = RtlSubscribeWnfStateChangeNotification(&v15, *a1, v14, RmpClientWnfSubscriptionWorker, a5, 0LL, 0, 0, v13),
        v9 >= 0) )
  {
    *(_QWORD *)(a5 + 64) = *a1;
    RtlInitializeSRWLock(a5 + 32);
    *(_QWORD *)(a5 + 24) = a5 + 16;
    *(_QWORD *)(a5 + 16) = a5 + 16;
    if ( a2 )
    {
      *(_OWORD *)(a5 + 40) = *a2;
    }
    else
    {
      *(_QWORD *)(a5 + 40) = 0LL;
      *(_QWORD *)(a5 + 48) = 0LL;
    }
    v10 = 0LL;
    *(_QWORD *)a5 = v15;
    *(_QWORD *)(a5 + 72) = v16;
    v11 = 0LL;
    *(_QWORD *)(a5 + 56) = a3;
    v9 = 0;
    *(_QWORD *)(a5 + 8) = a4;
    v16 = 0LL;
    *(_BYTE *)(a5 + 80) = 0;
    v15 = 0LL;
  }
  else
  {
    v10 = v15;
    v11 = v16;
  }
  if ( v11 )
  {
    TpReleaseWork(v11);
    v10 = v15;
  }
  if ( v10 )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  return (unsigned int)v9;
}
