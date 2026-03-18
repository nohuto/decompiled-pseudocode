/*
 * XREFs of HvFoldBackDirtyData @ 0x14065DD48
 * Callers:
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     HvpMarkDirty @ 0x14049F900 (HvpMarkDirty.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 */

void __fastcall HvFoldBackDirtyData(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbp
  ULONG_PTR v3; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  int v9; // edi
  ULONG_PTR v10; // rdi
  signed __int32 v11; // eax

  if ( *(_QWORD *)(BugCheckParameter2 + 2864) )
  {
    v2 = *(unsigned int *)(BugCheckParameter2 + 2856);
    CmpLockRegistry();
    ExAcquireResourceSharedLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
    v3 = *(_QWORD *)(BugCheckParameter2 + 2840);
    CurrentThread = KeGetCurrentThread();
    v6 = KeAbPreAcquire(v3, 0LL, 0LL, v5);
    v7 = v6;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v3, 0) )
      ExpAcquireFastMutexContended(v3, v6);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    *(_QWORD *)(v3 + 8) = CurrentThread;
    if ( (_DWORD)v2 )
    {
      v8 = 0LL;
      v9 = 8;
      do
      {
        if ( _bittest64(*(const signed __int64 **)(BugCheckParameter2 + 2864), v8) == 1 )
          HvpMarkDirty(BugCheckParameter2, v9, 1, 0);
        ++v8;
        v9 += 512;
        --v2;
      }
      while ( v2 );
    }
    v10 = *(_QWORD *)(BugCheckParameter2 + 2840);
    *(_QWORD *)(v10 + 8) = 0LL;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)v10, 1, 0);
    if ( v11 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v10, v11);
    KeAbPostRelease(v10);
    ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
    CmpUnlockRegistry();
  }
  HvFreeDirtyData(BugCheckParameter2);
}
