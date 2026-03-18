/*
 * XREFs of HvFoldBackDirtyData @ 0x140605E40
 * Callers:
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404047A0 (CmpLockRegistry.c)
 *     HvpMarkDirty @ 0x1405137E0 (HvpMarkDirty.c)
 */

void __fastcall HvFoldBackDirtyData(ULONG_PTR a1)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rbp
  int v4; // esi

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 2864) )
  {
    v3 = *(unsigned int *)(a1 + 2856);
    CmpLockRegistry();
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
    if ( (_DWORD)v3 )
    {
      v4 = 8;
      do
      {
        if ( _bittest64(*(const signed __int64 **)(a1 + 2864), v1) == 1 )
          HvpMarkDirty(a1, v4, 1, 0);
        ++v1;
        v4 += 512;
        --v3;
      }
      while ( v3 );
    }
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
    CmpUnlockRegistry();
  }
  HvFreeDirtyData(a1);
}
