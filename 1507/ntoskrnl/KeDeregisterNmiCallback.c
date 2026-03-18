/*
 * XREFs of KeDeregisterNmiCallback @ 0x1401FFD34
 * Callers:
 *     VerifierKeDeregisterNmiCallback @ 0x140742164 (VerifierKeDeregisterNmiCallback.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x14016320C (KiSetSystemAffinityThreadToProcessor.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall KeDeregisterNmiCallback(PVOID Handle)
{
  int v2; // esi
  unsigned __int8 CurrentIrql; // bp
  PVOID *v4; // rbx
  PVOID *v5; // rcx
  unsigned int v6; // edi
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0;
  PreviousAffinity.Group = 0;
  PreviousAffinity.Mask = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&KiNmiCallbackListLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiNmiCallbackListLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiNmiCallbackListLock);
  }
  v4 = (PVOID *)KiNmiCallbackListHead;
  v5 = &KiNmiCallbackListHead;
  if ( !KiNmiCallbackListHead )
    goto LABEL_20;
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiNmiCallbackListLock, retaddr);
    else
      _InterlockedAnd64(&KiNmiCallbackListLock, 0LL);
    __writecr8(CurrentIrql);
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
LABEL_20:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiNmiCallbackListLock, retaddr);
    else
      _InterlockedAnd64(&KiNmiCallbackListLock, 0LL);
    __writecr8(CurrentIrql);
    return -1073741816;
  }
}
