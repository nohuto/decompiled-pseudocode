/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x1405216F4
 * Callers:
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     CmpSaveKeyByFileCopy @ 0x1405EAD8C (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpReleaseWriteQueue @ 0x1404BDCDC (CmpReleaseWriteQueue.c)
 */

int __fastcall CmpFinishBeingActiveFlusherAndReconciler(__int64 a1)
{
  __int64 v2; // rcx
  struct _KEVENT *v3; // rsi
  __int64 v4; // rcx
  struct _KEVENT *v5; // rdi
  int result; // eax
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v8; // rbx

  CmpLockRegistry();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 2848), 1u);
  *(_DWORD *)(a1 + 5488) &= 0xFFFFFFFC;
  v3 = (struct _KEVENT *)CmpReleaseWriteQueue(v2, a1 + 5440);
  v5 = (struct _KEVENT *)CmpReleaseWriteQueue(v4, a1 + 5464);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  result = CmpUnlockRegistry();
  if ( v3 )
  {
    do
    {
      Flink = v3[1].Header.WaitListHead.Flink;
      v3[1].Header.LockNV = -1073741823;
      result = KeSetEvent(v3, 0, 0);
      v3 = (struct _KEVENT *)Flink;
    }
    while ( Flink );
  }
  if ( v5 )
  {
    do
    {
      v8 = v5[1].Header.WaitListHead.Flink;
      v5[1].Header.LockNV = -1073741823;
      result = KeSetEvent(v5, 0, 0);
      v5 = (struct _KEVENT *)v8;
    }
    while ( v8 );
  }
  return result;
}
