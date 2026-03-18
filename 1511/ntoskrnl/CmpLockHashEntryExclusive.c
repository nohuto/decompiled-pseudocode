/*
 * XREFs of CmpLockHashEntryExclusive @ 0x1403F9DF0
 * Callers:
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmpDelayCloseWorker @ 0x1403F9EB0 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpReferenceHive @ 0x140041E80 (CmpReferenceHive.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v3; // rbp
  unsigned __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  char result; // al

  v3 = (unsigned int)BugCheckParameter4;
  v4 = (unsigned __int64 *)(*(_QWORD *)(BugCheckParameter2 + 2800)
                          + 24LL
                          * (((101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9)) & (*(_DWORD *)(BugCheckParameter2 + 2808) - 1)));
  v5 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (ULONG_PTR)v4);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v4[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xCuLL, v3);
  return result;
}
