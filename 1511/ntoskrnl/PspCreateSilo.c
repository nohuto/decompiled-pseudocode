/*
 * XREFs of PspCreateSilo @ 0x140640174
 * Callers:
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PspGetJobSilo @ 0x1400776E8 (PspGetJobSilo.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PspUnlockJob @ 0x1403EB8D0 (PspUnlockJob.c)
 */

__int64 __fastcall PspCreateSilo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _ERESOURCE *PoolWithTag; // rax
  struct _ERESOURCE *v4; // rbx
  int v6; // esi
  __int64 JobSilo; // rax
  __int64 v8; // rsi
  struct _KTHREAD *v9; // rcx

  CurrentThread = KeGetCurrentThread();
  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6F6C6953u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x90uLL);
  v4[1].SystemResourcesList.Blink = &v4[1].SystemResourcesList;
  v4[1].SystemResourcesList.Flink = &v4[1].SystemResourcesList;
  ExInitializeResourceLite(v4);
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( *(_QWORD *)(a1 + 1048) == a1 + 1048 )
  {
    if ( *(_QWORD *)(a1 + 1248) )
    {
      v6 = -1073740536;
    }
    else
    {
      JobSilo = PspGetJobSilo(*(_QWORD *)(a1 + 1064));
      *(_QWORD *)&v4[1].ActiveCount = JobSilo;
      v8 = JobSilo;
      if ( JobSilo )
      {
        v9 = KeGetCurrentThread();
        --v9->SpecialApcDisable;
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(JobSilo + 1248), 1u);
        ++*(_DWORD *)(*(_QWORD *)(v8 + 1248) + 120LL);
        ExReleaseResourceLite(*(PERESOURCE *)(v8 + 1248));
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
      *(_QWORD *)(a1 + 1248) = v4;
      v6 = 0;
    }
  }
  else
  {
    v6 = -1073741637;
  }
  PspUnlockJob(a1, (__int64)CurrentThread);
  if ( v6 < 0 )
  {
    ExDeleteResourceLite(v4);
    ExFreePoolWithTag(v4, 0x6F6C6953u);
  }
  return (unsigned int)v6;
}
