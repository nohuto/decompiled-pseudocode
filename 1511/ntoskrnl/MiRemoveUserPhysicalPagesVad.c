/*
 * XREFs of MiRemoveUserPhysicalPagesVad @ 0x140626F34
 * Callers:
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400DCA70 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400DE500 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiInitializeTbFlushList @ 0x1400E2A4C (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiRemoveUserPhysicalPagesVad(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 result; // rax
  __int64 v4; // r14
  unsigned __int64 PteAddress; // rdi
  unsigned __int64 v6; // rbp
  _KPROCESS *v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v9[192]; // [rsp+30h] [rbp-D8h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = (__int64)CurrentThread->ApcState.Process;
  v4 = *(_QWORD *)(result + 1032);
  if ( *(_QWORD *)(result + 1584) )
  {
    PteAddress = MiGetPteAddress((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12);
    v6 = MiGetPteAddress(((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF);
    MiInitializeTbFlushList((__int64)v9, 1, 20);
    --CurrentThread->SpecialApcDisable;
    ExAcquireAutoExpandPushLockExclusive(v4 + 16, 0LL);
    while ( PteAddress <= v6 )
    {
      v8 = MI_READ_PTE_LOCK_FREE((__int64 *)PteAddress);
      if ( (v8 & 1) != 0 )
      {
        _InterlockedAnd64(
          (volatile signed __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v8) >> 12) & 0xFFFFFFFFFLL)
                                    - 0x57FFFFFFFF8LL),
          0LL);
        MiInsertTbFlushEntry((__int64)v9, (__int64)(PteAddress << 25) >> 16, 1LL, 0);
        *(_QWORD *)PteAddress = 0LL;
        if ( MiPteInShadowRange(PteAddress) )
          MiWritePteShadow(PteAddress, 0LL);
      }
      PteAddress += 8LL;
    }
    MiFlushTbList((__int64)v9, v7);
    ExReleaseAutoExpandPushLockExclusive((_DWORD *)(v4 + 16), 0LL);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
