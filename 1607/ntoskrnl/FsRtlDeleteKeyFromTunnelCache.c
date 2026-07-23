/*
 * XREFs of FsRtlDeleteKeyFromTunnelCache @ 0x1404BC734
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     RtlRealSuccessor @ 0x1400A9A08 (RtlRealSuccessor.c)
 *     FsRtlEmptyFreePoolList @ 0x1400C24D0 (FsRtlEmptyFreePoolList.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x1400C256C (FsRtlRemoveNodeFromTunnel.c)
 */

void __stdcall FsRtlDeleteKeyFromTunnelCache(TUNNEL *Cache, ULONGLONG DirectoryKey)
{
  _RTL_SPLAY_LINKS *v2; // rbx
  PRTL_SPLAY_LINKS v5; // rax
  ULONGLONG Parent; // rcx
  PRTL_SPLAY_LINKS v7; // rbp
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v9 = 1;
  if ( !TunnelMaxEntries )
    return;
  v8[1] = (__int64)v8;
  v8[0] = (__int64)v8;
  ExAcquireFastMutex(&Cache->Mutex);
  v5 = Cache->Cache;
  while ( v5 )
  {
    Parent = (ULONGLONG)v5[2].Parent;
    if ( Parent > DirectoryKey )
    {
LABEL_4:
      v5 = v5->LeftChild;
    }
    else
    {
      if ( Parent >= DirectoryKey )
      {
        v2 = v5;
        goto LABEL_4;
      }
      if ( v2 )
        goto LABEL_11;
      v5 = v5->RightChild;
    }
  }
  if ( !v2 )
    goto LABEL_13;
  do
  {
LABEL_11:
    v7 = RtlRealSuccessor(v2);
    if ( v2[2].Parent != (_RTL_SPLAY_LINKS *)DirectoryKey )
      break;
    FsRtlRemoveNodeFromTunnel((__int64)Cache, v2, v8, &v9);
    v2 = v7;
  }
  while ( v7 );
LABEL_13:
  KeReleaseGuardedMutex(&Cache->Mutex);
  FsRtlEmptyFreePoolList((_QWORD **)v8);
}
