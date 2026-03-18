/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x14059876C
 * Callers:
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmpSaveKeyByFileCopy @ 0x140662794 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     CmpReleaseWriteQueue @ 0x14044CDA4 (CmpReleaseWriteQueue.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 */

void __fastcall CmpFinishBeingActiveFlusherAndReconciler(__int64 a1)
{
  __int64 v2; // rcx
  struct _KEVENT *v3; // rsi
  __int64 v4; // rcx
  struct _KEVENT *v5; // rdi
  struct _KEVENT *Flink; // rbx
  struct _KEVENT *v7; // rbx

  CmpLockRegistry();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 2848), 1u);
  *(_DWORD *)(a1 + 5488) &= 0xFFFFFFFC;
  v3 = (struct _KEVENT *)CmpReleaseWriteQueue(v2, a1 + 5440);
  v5 = (struct _KEVENT *)CmpReleaseWriteQueue(v4, a1 + 5464);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  CmpUnlockRegistry();
  if ( v3 )
  {
    do
    {
      Flink = (struct _KEVENT *)v3[1].Header.WaitListHead.Flink;
      v3[1].Header.LockNV = -1073741823;
      KeSetEvent(v3, 0, 0);
      v3 = Flink;
    }
    while ( Flink );
  }
  if ( v5 )
  {
    do
    {
      v7 = (struct _KEVENT *)v5[1].Header.WaitListHead.Flink;
      v5[1].Header.LockNV = -1073741823;
      KeSetEvent(v5, 0, 0);
      v5 = v7;
    }
    while ( v7 );
  }
}
