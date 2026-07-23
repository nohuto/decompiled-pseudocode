/*
 * XREFs of MiMakeCombineCandidateClean @ 0x1401F9DA0
 * Callers:
 *     MiCrcStillIntact @ 0x1401F9300 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 * Callees:
 *     MiLockPageAndSetDirty @ 0x1400150F8 (MiLockPageAndSetDirty.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400A8CE8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiMakeCombineCandidateClean(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // r10
  char result; // al
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = MI_READ_PTE_LOCK_FREE(a1);
  MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9);
  v9 = v4 & 0xFFFFFFFFFFFFFFBDuLL;
  *(_QWORD *)a1 = v4 & 0xFFFFFFFFFFFFFFBDuLL;
  if ( MiPteInShadowRange(a1) )
    MiWritePteShadow(v5, v6);
  result = MiLockPageAndSetDirty(v7, 1);
  if ( a2 )
  {
    result = *(_DWORD *)(a2 + 48) & 7;
    if ( result == 4 )
      return MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)(a1 << 25) >> 16, a2);
  }
  return result;
}
