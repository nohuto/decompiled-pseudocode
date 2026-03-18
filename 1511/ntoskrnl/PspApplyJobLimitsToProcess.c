/*
 * XREFs of PspApplyJobLimitsToProcess @ 0x1403E9118
 * Callers:
 *     PspAddProcessToJobChain @ 0x1403E8E64 (PspAddProcessToJobChain.c)
 *     PspSetJobLimitsProcessCallback @ 0x1406426CC (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     KeSetDisableQuantumProcess @ 0x140021B70 (KeSetDisableQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x1400960D4 (KeSetQuantumProcess.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1403EC7C8 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x1403EC81C (PspLockJobMemoryLimitsShared.c)
 *     PsSetProcessPriorityByClass @ 0x1404503DC (PsSetProcessPriorityByClass.c)
 *     PspWritePebAffinityInfo @ 0x1404645DC (PspWritePebAffinityInfo.c)
 *     PspSetProcessAffinitySafe @ 0x14063F50C (PspSetProcessAffinitySafe.c)
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
  if ( (a2 & 0x20) == 0 && (*(_DWORD *)(v4 + 856) & 0x20) != 0 )
  {
    v7 = *(_BYTE *)(a1 + 1498) == 2;
    *(_BYTE *)(a1 + 1119) = *(_BYTE *)(v4 + 880);
    PsSetProcessPriorityByClass(a1, v7);
  }
  if ( (a2 & 0x10) == 0
    && (*(_DWORD *)(v4 + 856) & 0x10) != 0
    && (int)PspSetProcessAffinitySafe(a1, 1, (int)v4 + 616, 0, (__int64)&v8) >= 0
    && v8 )
  {
    PspWritePebAffinityInfo(CurrentThread, a1);
  }
  if ( (a2 & 0x100) == 0 )
  {
    PspLockJobMemoryLimitsShared(v4, CurrentThread);
    if ( (*(_DWORD *)(v4 + 856) & 0x100) != 0 )
      *(_QWORD *)(a1 + 1256) = *(_QWORD *)(v4 + 808);
    else
      *(_QWORD *)(a1 + 1256) = 0LL;
    PspUnlockJobMemoryLimitsShared(v4, CurrentThread);
  }
  if ( (a2 & 0x80u) == 0 && *(_BYTE *)(a1 + 1119) != 1 )
  {
    v6 = *(_DWORD *)(v4 + 860);
    if ( v6 >= 0xA )
      v6 = *(_DWORD *)(v4 + 484);
    if ( PspUseJobSchedulingClasses )
      KeSetQuantumProcess(a1, *((_BYTE *)PspJobSchedulingClasses + v6));
    KeSetDisableQuantumProcess(a1, v6 == 9);
  }
}
