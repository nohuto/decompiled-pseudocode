/*
 * XREFs of HvFoldBackDirtyData @ 0x1405E68E8
 * Callers:
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     HvpMarkDirty @ 0x1403F77C0 (HvpMarkDirty.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
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
