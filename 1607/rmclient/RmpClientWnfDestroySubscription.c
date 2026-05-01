/*
 * XREFs of RmpClientWnfDestroySubscription @ 0x18000D200
 * Callers:
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z @ 0x180004EB8 (-Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z.c)
 *     RmpClientSubscriptionCleanup @ 0x18000A064 (RmpClientSubscriptionCleanup.c)
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x18000AEAC (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpClientWnfDestroySubscription(_QWORD *P)
{
  _QWORD *v2; // rdx
  PVOID v3; // r8
  PVOID *v4; // rax
  PVOID Pa; // [rsp+20h] [rbp-18h] BYREF
  PVOID **v7; // [rsp+28h] [rbp-10h]

  RtlUnsubscribeWnfNotificationWaitForCompletion(*P);
  RtlAcquireSRWLockExclusive(P + 4);
  v2 = (_QWORD *)P[2];
  v7 = (PVOID **)P[3];
  Pa = v2;
  v2[1] = &Pa;
  *v7 = &Pa;
  P[3] = P + 2;
  P[2] = P + 2;
  RtlReleaseSRWLockExclusive(P + 4);
  while ( 1 )
  {
    v3 = Pa;
    if ( Pa != &Pa )
      break;
    v4 = *(PVOID **)Pa;
    if ( *((PVOID **)Pa + 1) != &Pa || v4[1] != Pa )
      __fastfail(3u);
    Pa = *(PVOID *)Pa;
    v4[1] = &Pa;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  TpWaitForWork(P[7], 1LL);
  TpReleaseWork(P[7]);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
