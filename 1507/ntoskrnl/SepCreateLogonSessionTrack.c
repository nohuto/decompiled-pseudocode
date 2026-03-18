/*
 * XREFs of SepCreateLogonSessionTrack @ 0x14053C348
 * Callers:
 *     SepRmCreateLogonSessionWrkr @ 0x14053C320 (SepRmCreateLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x140593C18 (SeInitServerSilo.c)
 *     SepRmDbInitialization @ 0x1407E38EC (SepRmDbInitialization.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCreateLogonSessionTrack(__int64 a1)
{
  __int64 **PoolWithTag; // rax
  __int64 **v3; // rbx
  __int64 v4; // rcx
  __int64 **v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbp
  __int64 *v8; // rdi
  void *CurrentServerSilo; // rsi
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax

  PoolWithTag = (__int64 **)ExAllocatePoolWithTag(PagedPool, 0xA8uLL, 0x734C6553u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xA8uLL);
  v3[1] = *(__int64 **)a1;
  v3[3] = (__int64 *)1;
  v3[6] = 0LL;
  v3[5] = 0LL;
  v3[11] = 0LL;
  v3[12] = 0LL;
  v3[13] = 0LL;
  v3[14] = 0LL;
  v3[15] = 0LL;
  v3[17] = (__int64 *)(v3 + 16);
  v3[16] = (__int64 *)(v3 + 16);
  v3[18] = 0LL;
  v3[19] = 0LL;
  v4 = *(_DWORD *)a1 & 0xF;
  v5 = (__int64 **)(SepLogonSessions + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = &SepRmDbLock + (v4 & 3);
  ExAcquireResourceExclusiveLite(v7, 1u);
  v8 = *v5;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  while ( v8 )
  {
    if ( CurrentServerSilo == (void *)v8[20]
      && *(_DWORD *)a1 == *((_DWORD *)v8 + 2)
      && *(_DWORD *)(a1 + 4) == *((_DWORD *)v8 + 3) )
    {
      ExReleaseResourceLite(v7);
      v13 = KeGetCurrentThread();
      v14 = v13->KernelApcDisable + 1;
      v13->KernelApcDisable = v14;
      if ( !v14
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
        && !v13->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      ExFreePoolWithTag(v3, 0);
      if ( CurrentServerSilo )
        PspDereferenceSiloObject(CurrentServerSilo);
      return 3221225710LL;
    }
    v8 = (__int64 *)*v8;
  }
  v3[20] = (__int64 *)CurrentServerSilo;
  *v3 = *v5;
  *v5 = (__int64 *)v3;
  ExReleaseResourceLite(v7);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
