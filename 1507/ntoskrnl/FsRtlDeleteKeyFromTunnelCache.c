/*
 * XREFs of FsRtlDeleteKeyFromTunnelCache @ 0x140520634
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     RtlRealSuccessor @ 0x140104898 (RtlRealSuccessor.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x1401056B0 (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlEmptyFreePoolList @ 0x140105744 (FsRtlEmptyFreePoolList.c)
 */

void __stdcall FsRtlDeleteKeyFromTunnelCache(TUNNEL *Cache, ULONGLONG DirectoryKey)
{
  __int64 v2; // r9
  _RTL_SPLAY_LINKS *v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // r14
  PRTL_SPLAY_LINKS v9; // rax
  ULONGLONG Parent; // rcx
  PRTL_SPLAY_LINKS v11; // rsi
  unsigned __int8 OldIrql; // di
  signed __int32 v13; // eax
  _QWORD *v14[5]; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  v15 = 1;
  if ( !TunnelMaxEntries )
    return;
  v14[1] = v14;
  v14[0] = v14;
  v6 = KeAbPreAcquire((ULONG_PTR)Cache, 0LL, 0LL, v2);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&Cache->Mutex.Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)Cache, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  Cache->Mutex.Owner = KeGetCurrentThread();
  Cache->Mutex.OldIrql = CurrentIrql;
  v9 = Cache->Cache;
  while ( v9 )
  {
    Parent = (ULONGLONG)v9[2].Parent;
    if ( Parent > DirectoryKey )
    {
LABEL_8:
      v9 = v9->LeftChild;
    }
    else
    {
      if ( Parent >= DirectoryKey )
      {
        v3 = v9;
        goto LABEL_8;
      }
      if ( v3 )
        goto LABEL_15;
      v9 = v9->RightChild;
    }
  }
  if ( !v3 )
    goto LABEL_17;
  do
  {
LABEL_15:
    v11 = RtlRealSuccessor(v3);
    if ( v3[2].Parent != (_RTL_SPLAY_LINKS *)DirectoryKey )
      break;
    FsRtlRemoveNodeFromTunnel((__int64)Cache, v3, (__int64)v14, &v15);
    v3 = v11;
  }
  while ( v11 );
LABEL_17:
  Cache->Mutex.Owner = 0LL;
  OldIrql = Cache->Mutex.OldIrql;
  v13 = _InterlockedCompareExchange(&Cache->Mutex.Count, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended(&Cache->Mutex.Count, v13);
  __writecr8(OldIrql);
  KeAbPostRelease((ULONG_PTR)Cache);
  FsRtlEmptyFreePoolList(v14);
}
