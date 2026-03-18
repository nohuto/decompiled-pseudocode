/*
 * XREFs of MiMakeCombineCandidateClean @ 0x14012A4AC
 * Callers:
 *     MiCrcStillIntact @ 0x140128AC0 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 * Callees:
 *     MiLockPageAndSetDirty @ 0x1400B820C (MiLockPageAndSetDirty.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400EF48C (MiCaptureWriteWatchDirtyBit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiMakeCombineCandidateClean(unsigned __int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v9;
  v5 = MI_READ_PTE_LOCK_FREE(&v9);
  v6 = v4 & 0xFFFFFFFFFFFFFFBDuLL;
  v9 = v6;
  *a1 = v6;
  v7 = 48 * ((v5 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( (unsigned int)MiPteInShadowRange(a1) )
    MiWritePteShadow(a1, v6);
  MiLockPageAndSetDirty(v7, 1LL, v8);
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 7) == 4 )
      MiCaptureWriteWatchDirtyBit(
        (__int64)KeGetCurrentThread()->ApcState.Process,
        (__int64)((_QWORD)a1 << 25) >> 16,
        a2);
  }
}
