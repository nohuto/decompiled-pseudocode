/*
 * XREFs of PiUEventFreeClientRegistrationContext @ 0x140417154
 * Callers:
 *     PiUEventHandleRegistration @ 0x14041610C (PiUEventHandleRegistration.c)
 *     PiUEventDispatch @ 0x140416580 (PiUEventDispatch.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ZwDeleteWnfStateName @ 0x140180930 (ZwDeleteWnfStateName.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14045DAB4 (PiUEventDequeuePendingEventWorker.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 */

void __fastcall PiUEventFreeClientRegistrationContext(char *a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // si
  ULONG_PTR v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdi
  unsigned __int8 v13; // bp
  _QWORD *v14; // rcx
  void **v15; // rax
  int v16; // ecx
  char *v17; // rdi
  char *v18; // rdi
  ULONG_PTR v19; // rdi
  unsigned __int8 v20; // si
  signed __int32 v21; // eax
  unsigned __int8 v22; // di
  signed __int32 v23; // eax
  int v24; // ecx
  void *v25; // rcx
  int v26; // ecx
  char *v27; // rdx
  char *v28; // rdx

  if ( a2 )
  {
    v5 = KeAbPreAcquire((ULONG_PTR)&PiUEventClientRegistrationListLock, 0LL, 0LL, a4);
    v7 = v5;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiUEventClientRegistrationListLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventClientRegistrationListLock, v5);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    qword_14034AB68 = (__int64)KeGetCurrentThread();
    dword_14034AB90 = CurrentIrql;
    v9 = *((_QWORD *)a1 + 2);
    v10 = KeAbPreAcquire(v9, 0LL, 0LL, v6);
    v12 = v10;
    v13 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v9, 0) )
      ExpAcquireFastMutexContended(v9, v10);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v9 + 48) = v13;
    v14 = *(_QWORD **)a1;
    v15 = (void **)*((_QWORD *)a1 + 1);
    if ( *(char **)(*(_QWORD *)a1 + 8LL) != a1 || *v15 != a1 )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = v15;
    v16 = *((_DWORD *)a1 + 33);
    if ( v16 )
    {
      v24 = v16 - 1;
      if ( v24 )
      {
        v26 = v24 - 1;
        if ( v26 )
        {
          if ( v26 == 1 )
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
    v17 = (char *)*((_QWORD *)a1 + 14);
    while ( v17 != a1 + 112 )
    {
      v27 = v17;
      v17 = *(char **)v17;
      PiUEventDequeuePendingEventWorker(a1, v27, 0LL);
    }
    v18 = (char *)*((_QWORD *)a1 + 12);
    while ( v18 != a1 + 96 )
    {
      v28 = v18;
      LOBYTE(v11) = 1;
      v18 = *(char **)v18;
      PiUEventDequeuePendingEventWorker(a1, v28, v11);
    }
    v19 = *((_QWORD *)a1 + 2);
    *(_QWORD *)(v19 + 8) = 0LL;
    v20 = *(_BYTE *)(v19 + 48);
    v21 = _InterlockedCompareExchange((volatile signed __int32 *)v19, 1, 0);
    if ( v21 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v19, v21);
    __writecr8(v20);
    KeAbPostRelease(v19);
    qword_14034AB68 = 0LL;
    v22 = dword_14034AB90;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventClientRegistrationListLock, 1, 0);
    if ( v23 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventClientRegistrationListLock, v23);
    __writecr8(v22);
    KeAbPostRelease((ULONG_PTR)&PiUEventClientRegistrationListLock);
  }
  if ( *((_DWORD *)a1 + 33) == 1 || (unsigned int)(*((_DWORD *)a1 + 33) - 2) < 2 )
  {
    v25 = (void *)*((_QWORD *)a1 + 3);
    if ( v25 )
      PiDmObjectRelease(v25);
  }
  ZwDeleteWnfStateName((PCWNF_STATE_NAME)a1 + 11);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a1 + 56));
  ExFreePoolWithTag(*((PVOID *)a1 + 2), 0x59706E50u);
  memset(a1, 0, 0x90uLL);
  ExFreePoolWithTag(a1, 0x59706E50u);
}
