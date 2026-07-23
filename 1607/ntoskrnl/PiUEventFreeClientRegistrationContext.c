/*
 * XREFs of PiUEventFreeClientRegistrationContext @ 0x140489DA4
 * Callers:
 *     PiUEventDispatch @ 0x14048B868 (PiUEventDispatch.c)
 *     PiUEventHandleRegistration @ 0x14048DCAC (PiUEventHandleRegistration.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ZwDeleteWnfStateName @ 0x14015BB90 (ZwDeleteWnfStateName.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140489874 (PiUEventDequeuePendingEventWorker.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 */

void __fastcall PiUEventFreeClientRegistrationContext(char *a1, char a2)
{
  PFAST_MUTEX v3; // rcx
  void **v4; // rax
  int v5; // ecx
  __int64 *v6; // rdi
  __int64 *v7; // rdi
  int v8; // ecx
  void *v9; // rcx
  int v10; // ecx
  __int64 *v11; // rdx
  __int64 *v12; // rdx

  if ( a2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    ExAcquireFastMutex(*((PFAST_MUTEX *)a1 + 2));
    v3 = *(PFAST_MUTEX *)a1;
    v4 = (void **)*((_QWORD *)a1 + 1);
    if ( *(char **)(*(_QWORD *)a1 + 8LL) != a1 || *v4 != a1 )
      __fastfail(3u);
    *v4 = v3;
    v3->Owner = v4;
    v5 = *((_DWORD *)a1 + 33);
    if ( v5 )
    {
      v8 = v5 - 1;
      if ( v8 )
      {
        v10 = v8 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
            --PiUEventDevInstancePropertyClientCount;
        }
        else
        {
          --PiUEventDevInstanceClientCount;
        }
      }
      else
      {
        --PiUEventDevHandleClientCount;
      }
    }
    else
    {
      --PiUEventDevInterfaceClientCount;
    }
    v6 = (__int64 *)*((_QWORD *)a1 + 14);
    while ( v6 != (__int64 *)(a1 + 112) )
    {
      v11 = v6;
      v6 = (__int64 *)*v6;
      PiUEventDequeuePendingEventWorker((__int64)a1, v11, 0);
    }
    v7 = (__int64 *)*((_QWORD *)a1 + 12);
    while ( v7 != (__int64 *)(a1 + 96) )
    {
      v12 = v7;
      v7 = (__int64 *)*v7;
      PiUEventDequeuePendingEventWorker((__int64)a1, v12, 1);
    }
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)a1 + 2));
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  if ( *((_DWORD *)a1 + 33) == 1 || (unsigned int)(*((_DWORD *)a1 + 33) - 2) < 2 )
  {
    v9 = (void *)*((_QWORD *)a1 + 3);
    if ( v9 )
      PiDmObjectRelease(v9);
  }
  ZwDeleteWnfStateName((PCWNF_STATE_NAME)a1 + 11);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a1 + 56));
  ExFreePoolWithTag(*((PVOID *)a1 + 2), 0x59706E50u);
  memset(a1, 0, 0x90uLL);
  ExFreePoolWithTag(a1, 0x59706E50u);
}
