/*
 * XREFs of EtwpAddGuidEntry @ 0x1404D4348
 * Callers:
 *     EtwpRegisterUMGuid @ 0x1404CDCF0 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x1404D1618 (EtwpAddRegEntryToGroup.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpRegisterProvider @ 0x14054C6A8 (EtwpRegisterProvider.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     PspReferenceSiloObject @ 0x14024445C (PspReferenceSiloObject.c)
 *     EtwpReferenceGuidEntry @ 0x1404CE3DC (EtwpReferenceGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x1404D4290 (EtwpAllocGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x14054F670 (EtwpFreeGuidEntry.c)
 */

char *__fastcall EtwpAddGuidEntry(unsigned int *a1, int a2)
{
  __int64 v2; // rbx
  char *result; // rax
  volatile signed __int64 *v5; // rsi
  void *CurrentServerSilo; // r15
  char *v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  char *v9; // r14
  unsigned __int64 *v10; // rbp
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdi
  char *i; // rdi
  __int64 v16; // rcx
  char *v17; // rax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax

  v2 = a2;
  result = EtwpAllocGuidEntry(a1);
  v5 = (volatile signed __int64 *)result;
  if ( result )
  {
    CurrentServerSilo = (void *)PsGetCurrentServerSilo();
    v7 = (char *)&EtwpGuidHashTable + 56 * ((*a1 ^ a1[1] ^ a1[3] ^ a1[2]) & 0x3F);
    CurrentThread = KeGetCurrentThread();
    v9 = &v7[16 * v2];
    --CurrentThread->KernelApcDisable;
    v10 = (unsigned __int64 *)(v7 + 48);
    v12 = KeAbPreAcquire((ULONG_PTR)(v7 + 48), 0LL, 0LL, v11);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v12, (ULONG_PTR)v10, v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    for ( i = *(char **)v9; i != v9; i = *(char **)i )
    {
      v16 = *(_QWORD *)a1 - *((_QWORD *)i + 3);
      if ( *(_QWORD *)a1 == *((_QWORD *)i + 3) )
        v16 = *((_QWORD *)a1 + 1) - *((_QWORD *)i + 4);
      if ( !v16 && CurrentServerSilo == *((void **)i + 47) && EtwpReferenceGuidEntry((ULONG_PTR)i) )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v10);
        KeAbPostRelease((ULONG_PTR)v10);
        v20 = KeGetCurrentThread();
        v21 = v20->KernelApcDisable + 1;
        v20->KernelApcDisable = v21;
        if ( !v21
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
          && !v20->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        _InterlockedAdd64(v5 + 2, 0xFFFFFFFFFFFFFFFFuLL);
        EtwpFreeGuidEntry((PVOID)v5);
        goto LABEL_19;
      }
    }
    *((_QWORD *)v5 + 47) = CurrentServerSilo;
    if ( CurrentServerSilo )
      PspReferenceSiloObject(CurrentServerSilo);
    v17 = *(char **)v9;
    *v5 = *(_QWORD *)v9;
    *((_QWORD *)v5 + 1) = v9;
    if ( *((char **)v17 + 1) != v9 )
      __fastfail(3u);
    *((_QWORD *)v17 + 1) = v5;
    i = (char *)v5;
    *(_QWORD *)v9 = v5;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((ULONG_PTR)v10);
    v18 = KeGetCurrentThread();
    v19 = v18->KernelApcDisable + 1;
    v18->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
LABEL_19:
    if ( CurrentServerSilo )
      PspDereferenceSiloObject(CurrentServerSilo);
    return i;
  }
  return result;
}
