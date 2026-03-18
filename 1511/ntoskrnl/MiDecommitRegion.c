/*
 * XREFs of MiDecommitRegion @ 0x14041AE10
 * Callers:
 *     NtFreeVirtualMemory @ 0x140417AA0 (NtFreeVirtualMemory.c)
 *     MiDeleteTebRange @ 0x1404A9390 (MiDeleteTebRange.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiFillCommitReturnInfo @ 0x14006C2DC (MiFillCommitReturnInfo.c)
 *     MiReturnProcessCommitment @ 0x14006C314 (MiReturnProcessCommitment.c)
 *     PspReturnQuota @ 0x140089190 (PspReturnQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140417EB0 (PspChangeJobMemoryUsageByProcess.c)
 */

void __fastcall MiDecommitRegion(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _KPROCESS *Process; // rbx
  ULONG_PTR PteAddress; // rsi
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // r8
  int *ProcessPartition; // rax
  unsigned __int64 v14; // rdx
  __int64 v15[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+58h] [rbp-10h]

  memset(v16, 0, sizeof(v16));
  Process = KeGetCurrentThread()->ApcState.Process;
  v17 = 0LL;
  PteAddress = MiGetPteAddress(a3);
  MiDecommitPages(a2, PteAddress, (__int64)Process, a1, 1, v16);
  v7 = MiGetPteAddress(a2);
  v8 = *(_DWORD *)(a1 + 52);
  v9 = PteAddress - v7;
  v10 = v8;
  LODWORD(v10) = v8 & 0x7FFFFFFF;
  v11 = (v9 >> 3) - v17 + 1;
  v12 = (v10 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) - v11;
  *(_BYTE *)(a1 + 34) = v12 >> 31;
  *(_DWORD *)(a1 + 52) = v8 ^ (v12 ^ v8) & 0x7FFFFFFF;
  MiFillCommitReturnInfo(v11, (__int64)v16, v15);
  if ( v15[0] )
  {
    MiReturnProcessCommitment((__int64)Process, v15[0]);
    if ( (Process[1].DirectoryTableBase & 0x10) != 0 )
      PspChangeJobMemoryUsageByProcess(16, -v15[0], (__int64)KeGetCurrentThread()->ApcState.Process, 0LL);
    if ( Process != PsInitialSystemProcess )
      PspReturnQuota((char *)Process[1].ActiveProcessors.Bitmap[4], (ULONG_PTR)Process, 2, v15[0]);
  }
  if ( v15[1] )
  {
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    MiReturnCommit((__int64)ProcessPartition, v14);
  }
}
