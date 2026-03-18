/*
 * XREFs of PiUEventFreeClientRegistrationContext @ 0x1403C10AC
 * Callers:
 *     PiUEventDispatch @ 0x1403BF6EC (PiUEventDispatch.c)
 *     PiUEventHandleRegistration @ 0x1403BFB78 (PiUEventHandleRegistration.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ZwDeleteWnfStateName @ 0x140151F80 (ZwDeleteWnfStateName.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1404E1958 (PiUEventDequeuePendingEventWorker.c)
 */

void __fastcall PiUEventFreeClientRegistrationContext(char *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  PFAST_MUTEX v5; // rcx
  void **v6; // rax
  int v7; // ecx
  char *v8; // rdi
  char *v9; // rdi
  int v10; // ecx
  void *v11; // rcx
  int v12; // ecx
  char *v13; // rdx
  char *v14; // rdx

  if ( (_BYTE)a2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    ExAcquireFastMutex(*((PFAST_MUTEX *)a1 + 2));
    v5 = *(PFAST_MUTEX *)a1;
    v6 = (void **)*((_QWORD *)a1 + 1);
    if ( *(char **)(*(_QWORD *)a1 + 8LL) != a1 || *v6 != a1 )
      __fastfail(3u);
    *v6 = v5;
    v5->Owner = v6;
    v7 = *((_DWORD *)a1 + 33);
    if ( v7 )
    {
      v10 = v7 - 1;
      if ( v10 )
      {
        v12 = v10 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
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
    v8 = (char *)*((_QWORD *)a1 + 14);
    while ( v8 != a1 + 112 )
    {
      v13 = v8;
      v8 = *(char **)v8;
      PiUEventDequeuePendingEventWorker(a1, v13, 0LL);
    }
    v9 = (char *)*((_QWORD *)a1 + 12);
    while ( v9 != a1 + 96 )
    {
      v14 = v9;
      LOBYTE(v4) = 1;
      v9 = *(char **)v9;
      PiUEventDequeuePendingEventWorker(a1, v14, v4);
    }
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)a1 + 2));
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  if ( *((_DWORD *)a1 + 33) == 1 || (unsigned int)(*((_DWORD *)a1 + 33) - 2) < 2 )
  {
    v11 = (void *)*((_QWORD *)a1 + 3);
    if ( v11 )
      PiDmObjectRelease(v11);
  }
  ZwDeleteWnfStateName((__int64)(a1 + 88), a2, a3);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a1 + 56));
  ExFreePoolWithTag(*((PVOID *)a1 + 2), 0x59706E50u);
  memset(a1, 0, 0x90uLL);
  ExFreePoolWithTag(a1, 0x59706E50u);
}
