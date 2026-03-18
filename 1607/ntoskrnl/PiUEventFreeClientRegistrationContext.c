/*
 * XREFs of PiUEventFreeClientRegistrationContext @ 0x14048A41C
 * Callers:
 *     PiUEventDispatch @ 0x14048B304 (PiUEventDispatch.c)
 *     PiUEventHandleRegistration @ 0x14048D21C (PiUEventHandleRegistration.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     ZwDeleteWnfStateName @ 0x14015B620 (ZwDeleteWnfStateName.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1403EF44C (PiUEventDequeuePendingEventWorker.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     PiDmObjectRelease @ 0x1404FEFC0 (PiDmObjectRelease.c)
 */

void __fastcall PiUEventFreeClientRegistrationContext(char *a1, __int64 a2, __int64 a3)
{
  PFAST_MUTEX v4; // rcx
  void **v5; // rax
  int v6; // ecx
  __int64 *v7; // rdi
  __int64 *v8; // rdi
  int v9; // ecx
  void *v10; // rcx
  int v11; // ecx
  __int64 *v12; // rdx
  __int64 *v13; // rdx

  if ( (_BYTE)a2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    ExAcquireFastMutex(*((PFAST_MUTEX *)a1 + 2));
    v4 = *(PFAST_MUTEX *)a1;
    v5 = (void **)*((_QWORD *)a1 + 1);
    if ( *(char **)(*(_QWORD *)a1 + 8LL) != a1 || *v5 != a1 )
      __fastfail(3u);
    *v5 = v4;
    v4->Owner = v5;
    v6 = *((_DWORD *)a1 + 33);
    if ( v6 )
    {
      v9 = v6 - 1;
      if ( v9 )
      {
        v11 = v9 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
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
    v7 = (__int64 *)*((_QWORD *)a1 + 14);
    while ( v7 != (__int64 *)(a1 + 112) )
    {
      v12 = v7;
      v7 = (__int64 *)*v7;
      PiUEventDequeuePendingEventWorker((__int64)a1, v12, 0);
    }
    v8 = (__int64 *)*((_QWORD *)a1 + 12);
    while ( v8 != (__int64 *)(a1 + 96) )
    {
      v13 = v8;
      v8 = (__int64 *)*v8;
      PiUEventDequeuePendingEventWorker((__int64)a1, v13, 1);
    }
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)a1 + 2));
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  if ( *((_DWORD *)a1 + 33) == 1 || (unsigned int)(*((_DWORD *)a1 + 33) - 2) < 2 )
  {
    v10 = (void *)*((_QWORD *)a1 + 3);
    if ( v10 )
      PiDmObjectRelease(v10);
  }
  ZwDeleteWnfStateName((__int64)(a1 + 88), a2, a3);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a1 + 56));
  ExFreePoolWithTag(*((PVOID *)a1 + 2), 0x59706E50u);
  memset(a1, 0, 0x90uLL);
  ExFreePoolWithTag(a1, 0x59706E50u);
}
