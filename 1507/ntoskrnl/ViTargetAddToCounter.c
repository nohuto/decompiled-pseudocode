/*
 * XREFs of ViTargetAddToCounter @ 0x140745B48
 * Callers:
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x14075339C (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1407534EC (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140753598 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmFreePagesFromMdl @ 0x14075384C (VerifierMmFreePagesFromMdl.c)
 *     VerifierMmMapIoSpace @ 0x1407538C4 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1407539B0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140753A78 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140753BF0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140753CC4 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x140753DD8 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140753EE0 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x140753F50 (VerifierMmUnmapLockedPages.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ViTargetUpdateTreeAllowed @ 0x140746018 (ViTargetUpdateTreeAllowed.c)
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
