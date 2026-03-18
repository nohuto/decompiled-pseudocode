/*
 * XREFs of MmStoreDecommitVirtualMemory @ 0x140116440
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140111764 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140203C50 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 */

__int64 __fastcall MmStoreDecommitVirtualMemory(unsigned __int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rbp
  unsigned __int64 Address; // rax
  char v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r8
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v11, 0, 32);
  Process = KeGetCurrentThread()->ApcState.Process;
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  Address = MiLocateAddress(a1);
  LOBYTE(v7) = v6;
  v8 = Address;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v7, v9);
  return MiDecommitPages(a1, (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (__int64)Process, v8, 0, v11);
}
