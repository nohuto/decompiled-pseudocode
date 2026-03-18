/*
 * XREFs of ViTargetAddToCounter @ 0x1406C4294
 * Callers:
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1406CF8D0 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1406CFA20 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1406CFACC (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmFreePagesFromMdl @ 0x1406CFD80 (VerifierMmFreePagesFromMdl.c)
 *     VerifierMmMapIoSpace @ 0x1406CFDF8 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1406CFEE4 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1406CFFAC (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1406D0124 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1406D01F8 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x1406D030C (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x1406D0414 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x1406D0484 (VerifierMmUnmapLockedPages.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 *     ViTargetUpdateTreeAllowed @ 0x1406C4754 (ViTargetUpdateTreeAllowed.c)
 */

unsigned __int64 __fastcall ViTargetAddToCounter(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  volatile signed __int64 *v13; // rcx
  volatile signed __int64 v14; // rtt
  _BYTE v15[32]; // [rsp+28h] [rbp-20h] BYREF

  v4 = a3;
  v6 = (unsigned int)a2;
  result = ViTargetUpdateTreeAllowed(a1, a2, a1);
  if ( (_DWORD)result )
  {
    VfAvlInitializeLockContext((__int64)v15, 1);
    v10 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v15, v8, v9);
    if ( v10 )
    {
      v11 = v10[6];
      if ( v11 )
      {
        v12 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + v11), a4);
        v13 = (volatile signed __int64 *)(v11 + v4);
        do
        {
          if ( *v13 > v12 )
            break;
          v14 = *v13;
        }
        while ( v14 != _InterlockedCompareExchange64(v13, v12, *v13) );
      }
    }
    return VfAvlCleanupLockContext((__int64)v15);
  }
  return result;
}
