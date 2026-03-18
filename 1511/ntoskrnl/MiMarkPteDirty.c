/*
 * XREFs of MiMarkPteDirty @ 0x1400A4E50
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMarkPteDirty(__int64 *a1)
{
  __int64 result; // rax
  KIRQL v3; // si
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx

  result = MI_READ_PTE_LOCK_FREE(a1);
  if ( (result & 0x42) == 0 && (result & 0x800) != 0 )
  {
    v3 = ExAcquireSpinLockExclusive(&dword_1402FF880);
    v4 = MI_READ_PTE_LOCK_FREE(a1);
    if ( (v4 & 1) != 0 && (v4 & 0x42) == 0 && (v4 & 0x800) != 0 )
    {
      v7 = v4 | 0x62;
      *a1 = v4 | 0x62;
      if ( (unsigned int)MiPteInShadowRange(a1) )
        MiWritePteShadow(a1, v7);
    }
    LOBYTE(v5) = v3;
    return MiUnlockWorkingSetExclusive((__int64)&dword_1402FF880, v5, v6);
  }
  return result;
}
