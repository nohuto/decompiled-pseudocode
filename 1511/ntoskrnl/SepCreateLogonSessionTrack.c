/*
 * XREFs of SepCreateLogonSessionTrack @ 0x1404BDA90
 * Callers:
 *     SepRmCreateLogonSessionWrkr @ 0x1404BDA68 (SepRmCreateLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x140526CAC (SeInitServerSilo.c)
 *     SepRmDbInitialization @ 0x14076E6F0 (SepRmDbInitialization.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCreateLogonSessionTrack(__int64 *a1)
{
  __int64 *PoolWithTag; // rax
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 **v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rbp
  __int64 *v9; // rdi
  _QWORD *CurrentServerSilo; // rsi

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0xB0uLL, 0x734C6553u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xB0uLL);
  v4 = *a1;
  v3[6] = 0LL;
  v3[5] = 0LL;
  v3[11] = 0LL;
  v3[12] = 0LL;
  v3[13] = 0LL;
  v3[14] = 0LL;
  v3[15] = 0LL;
  v3[1] = v4;
  v3[3] = 1LL;
  v3[17] = (__int64)(v3 + 16);
  v3[16] = (__int64)(v3 + 16);
  v3[18] = 0LL;
  v3[19] = 0LL;
  v5 = *(_DWORD *)a1 & 0xF;
  v6 = (__int64 **)(SepLogonSessions + 8 * v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = &SepRmDbLock + (v5 & 3);
  ExAcquireResourceExclusiveLite(v8, 1u);
  v9 = *v6;
  CurrentServerSilo = PsGetCurrentServerSilo();
  while ( 1 )
  {
    if ( !v9 )
    {
      v3[20] = (__int64)CurrentServerSilo;
      *v3 = (__int64)*v6;
      *v6 = v3;
      ExReleaseResourceLite(v8);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return 0LL;
    }
    if ( CurrentServerSilo == (_QWORD *)v9[20]
      && *(_DWORD *)a1 == *((_DWORD *)v9 + 2)
      && *((_DWORD *)a1 + 1) == *((_DWORD *)v9 + 3) )
    {
      break;
    }
    v9 = (__int64 *)*v9;
  }
  ExReleaseResourceLite(v8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(v3, 0);
  if ( CurrentServerSilo )
    ObfDereferenceObject(CurrentServerSilo);
  return 3221225710LL;
}
