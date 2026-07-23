/*
 * XREFs of SepCreateLogonSessionTrack @ 0x1404C935C
 * Callers:
 *     SepRmCreateLogonSessionWrkr @ 0x1404C9334 (SepRmCreateLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x14068CBD8 (SeInitServerSilo.c)
 *     SepRmDbInitialization @ 0x1407B868C (SepRmDbInitialization.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCreateLogonSessionTrack(__int64 **a1)
{
  __int64 **PoolWithTag; // rax
  __int64 **v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 **v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rbp
  __int64 *v9; // rdi
  void *CurrentServerSilo; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9

  PoolWithTag = (__int64 **)ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x734C6553u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xC0uLL);
  v4 = *a1;
  v3[6] = 0LL;
  v3[5] = 0LL;
  v3[11] = 0LL;
  v3[12] = 0LL;
  v3[13] = 0LL;
  v3[14] = 0LL;
  v3[15] = 0LL;
  v3[1] = v4;
  v3[3] = (__int64 *)1;
  v3[17] = (__int64 *)(v3 + 16);
  v3[16] = (__int64 *)(v3 + 16);
  v3[18] = 0LL;
  v3[19] = 0LL;
  if ( SeTokenLeakTracking )
  {
    v3[23] = (__int64 *)(v3 + 22);
    v3[22] = (__int64 *)(v3 + 22);
  }
  v5 = (unsigned int)(1529154084 * *(_DWORD *)a1) >> 28;
  v6 = (__int64 **)(SepLogonSessions + 8 * v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = &SepRmDbLock + (v5 & 3);
  ExAcquireResourceExclusiveLite(v8, 1u);
  v9 = *v6;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  while ( v9 )
  {
    if ( CurrentServerSilo == (void *)v9[20]
      && *(_DWORD *)a1 == *((_DWORD *)v9 + 2)
      && *((_DWORD *)a1 + 1) == *((_DWORD *)v9 + 3) )
    {
      ExReleaseResourceLite(v8);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
      ExFreePoolWithTag(v3, 0);
      return 3221225710LL;
    }
    v9 = (__int64 *)*v9;
  }
  if ( CurrentServerSilo )
    ObfReferenceObjectWithTag(CurrentServerSilo, 0x734C6553u);
  v3[20] = (__int64 *)CurrentServerSilo;
  *v3 = *v6;
  *v6 = (__int64 *)v3;
  ExReleaseResourceLite(v8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  return 0LL;
}
