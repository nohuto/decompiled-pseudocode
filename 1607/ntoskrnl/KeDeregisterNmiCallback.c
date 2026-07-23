/*
 * XREFs of KeDeregisterNmiCallback @ 0x1401D2644
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x140139854 (KiSetSystemAffinityThreadToProcessor.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall KeDeregisterNmiCallback(PVOID Handle)
{
  int v2; // esi
  KIRQL v3; // al
  PVOID *v4; // rbx
  PVOID *v5; // rcx
  unsigned int v6; // edi
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity.Group = 0;
  PreviousAffinity.Mask = 0LL;
  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
  v4 = (PVOID *)KiNmiCallbackListHead;
  v5 = &KiNmiCallbackListHead;
  if ( !KiNmiCallbackListHead )
    goto LABEL_13;
  do
  {
    if ( v4[3] == Handle )
      break;
    v5 = v4;
    v4 = (PVOID *)*v4;
  }
  while ( v4 );
  if ( v4 && v4[3] == Handle )
  {
    *v5 = *v4;
    KeReleaseSpinLock(&KiNmiCallbackListLock, v3);
    v6 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      do
      {
        if ( v2 )
        {
          KiSetSystemAffinityThreadToProcessor(v6, 0LL);
        }
        else
        {
          KiSetSystemAffinityThreadToProcessor(v6, &PreviousAffinity);
          v2 = 1;
        }
        ++v6;
      }
      while ( v6 < (unsigned int)KeNumberProcessors_0 );
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    ExFreePoolWithTag(v4, 0x494D4E4Bu);
    return 0;
  }
  else
  {
LABEL_13:
    KeReleaseSpinLock(&KiNmiCallbackListLock, v3);
    return -1073741816;
  }
}
