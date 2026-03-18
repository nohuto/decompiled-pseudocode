/*
 * XREFs of CmpLockHashEntryExclusive @ 0x1404CCB90
 * Callers:
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmpDelayCloseWorker @ 0x1404CA510 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x1400506B0 (CmpReferenceHive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v3; // rbp
  __int64 v4; // r9
  unsigned __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  char result; // al

  v3 = (unsigned int)BugCheckParameter4;
  v4 = 101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9));
  v5 = (unsigned __int64 *)(*(_QWORD *)(BugCheckParameter2 + 2800)
                          + 24LL
                          * (((unsigned int)v4 ^ ((unsigned int)v4 >> 9)) & (*(_DWORD *)(BugCheckParameter2 + 2808) - 1)));
  v6 = KeAbPreAcquire((ULONG_PTR)v5, 0LL, 0LL, v4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v5[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xCuLL, v3);
  return result;
}
