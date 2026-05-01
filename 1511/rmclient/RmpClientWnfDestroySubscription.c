/*
 * XREFs of RmpClientWnfDestroySubscription @ 0x18000F0BC
 * Callers:
 *     ?InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x180007718 (-InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x180007CB8 (-Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z.c)
 *     RmDisconnectFromResourceManager @ 0x18000E9E0 (RmDisconnectFromResourceManager.c)
 *     ?CleanupClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXXZ @ 0x18001015C (-CleanupClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXXZ.c)
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x180012410 (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpClientWnfDestroySubscription(_QWORD *a1)
{
  _QWORD *v2; // rdx
  PVOID v3; // r8
  PVOID *v4; // rax
  PVOID P; // [rsp+20h] [rbp-18h] BYREF
  PVOID **v7; // [rsp+28h] [rbp-10h]

  RtlUnsubscribeWnfNotificationWaitForCompletion(*a1);
  RtlAcquireSRWLockExclusive(a1 + 4);
  v2 = (_QWORD *)a1[2];
  v7 = (PVOID **)a1[3];
  P = v2;
  v2[1] = &P;
  *v7 = &P;
  a1[3] = a1 + 2;
  a1[2] = a1 + 2;
  RtlReleaseSRWLockExclusive(a1 + 4);
  while ( 1 )
  {
    v3 = P;
    if ( P != &P )
      break;
    v4 = *(PVOID **)P;
    if ( *((PVOID **)P + 1) != &P || v4[1] != P )
      __fastfail(3u);
    P = *(PVOID *)P;
    v4[1] = &P;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  TpWaitForWork(a1[9], 1LL);
  TpReleaseWork(a1[9]);
  return 0LL;
}
