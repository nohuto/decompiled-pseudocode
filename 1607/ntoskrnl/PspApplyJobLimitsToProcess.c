/*
 * XREFs of PspApplyJobLimitsToProcess @ 0x14046A1D0
 * Callers:
 *     PspAddProcessToJobChain @ 0x14046A2B8 (PspAddProcessToJobChain.c)
 *     PspSetJobLimitsProcessCallback @ 0x1404ED22C (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     KeSetDisableQuantumProcess @ 0x140076E54 (KeSetDisableQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x14007F0C0 (KeSetQuantumProcess.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1404694D0 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x140469570 (PspLockJobMemoryLimitsShared.c)
 *     PsSetProcessPriorityByClass @ 0x1404730C8 (PsSetProcessPriorityByClass.c)
 *     PspWritePebAffinityInfo @ 0x14051ACD0 (PspWritePebAffinityInfo.c)
 *     PspSetProcessAffinitySafe @ 0x14067DC5C (PspSetProcessAffinitySafe.c)
 */

void __fastcall PspApplyJobLimitsToProcess(__int64 a1, __int16 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  unsigned int v6; // esi
  bool v7; // zf
  int v8; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(a1 + 944);
  if ( (a2 & 0x20) == 0 && (*(_DWORD *)(v4 + 848) & 0x20) != 0 )
  {
    v7 = *(_BYTE *)(a1 + 1466) == 2;
    *(_BYTE *)(a1 + 1119) = *(_BYTE *)(v4 + 872);
    PsSetProcessPriorityByClass(a1, v7);
  }
  if ( (a2 & 0x10) == 0
    && (*(_DWORD *)(v4 + 848) & 0x10) != 0
    && (int)PspSetProcessAffinitySafe(a1, 1, (int)v4 + 616, 0, (__int64)&v8) >= 0
    && v8 )
  {
    PspWritePebAffinityInfo(CurrentThread, a1);
  }
  if ( (a2 & 0x100) == 0 )
  {
    PspLockJobMemoryLimitsShared(v4, (__int64)CurrentThread);
    if ( (*(_DWORD *)(v4 + 848) & 0x100) != 0 )
      *(_QWORD *)(a1 + 1256) = *(_QWORD *)(v4 + 808);
    else
      *(_QWORD *)(a1 + 1256) = 0LL;
    PspUnlockJobMemoryLimitsShared(v4, (__int64)CurrentThread);
  }
  if ( (a2 & 0x80u) == 0 && *(_BYTE *)(a1 + 1119) != 1 )
  {
    v6 = *(_DWORD *)(v4 + 852);
    if ( v6 >= 0xA )
      v6 = *(_DWORD *)(v4 + 484);
    if ( PspUseJobSchedulingClasses )
      KeSetQuantumProcess(a1, *((_BYTE *)PspJobSchedulingClasses + v6));
    KeSetDisableQuantumProcess(a1, v6 == 9);
  }
}
