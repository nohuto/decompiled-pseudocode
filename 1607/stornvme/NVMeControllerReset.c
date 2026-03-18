/*
 * XREFs of NVMeControllerReset @ 0x1C00072C8
 * Callers:
 *     NVMeHwResetBus @ 0x1C0004F30 (NVMeHwResetBus.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C0006900 (NVMeControllerAsyncResetWorker.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C870 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     ControllerReset @ 0x1C000457C (ControllerReset.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0004828 (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C00069CC (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerInitPart1 @ 0x1C0006D5C (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C0006E84 (NVMeControllerInitPart2.c)
 *     NVMeQueuesReInit @ 0x1C0008418 (NVMeQueuesReInit.c)
 */

char __fastcall NVMeControllerReset(__int64 a1, char a2)
{
  char v4; // di
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = 1;
  StorPortDebugPrint(3LL, "StorNVMe - Controller Reset START\n");
  StorPortPause(a1, 120LL);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFEE | 0x10;
  NVMeControllerCompleteAllIORequests(a1, 14);
  if ( a2 )
  {
    if ( (*(_QWORD *)(a1 + 128) & 0x1000000000LL) == 0 )
    {
      StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (CAP.NSSRS == 0)\n");
      goto LABEL_7;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + 32LL) = 1314278757;
    _InterlockedOr(v10, 0);
    StorPortStallExecution(5000LL);
  }
  else if ( !ControllerReset(a1) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (ControllerReset() == FALSE)\n");
    goto LABEL_7;
  }
  *(_DWORD *)(a1 + 20) &= ~0x10u;
  NVMeQueuesReInit(a1);
  if ( !NVMeControllerInitPart1(a1, 0) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart1() == FALSE)\n");
LABEL_7:
    v4 = 0;
    goto LABEL_17;
  }
  LOBYTE(v5) = 1;
  if ( !NVMeControllerInitPart2(a1, 0LL, v5) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart2() == FALSE)\n");
    goto LABEL_7;
  }
  v6 = 0;
  if ( *(int *)(a1 + 148) > 0 )
  {
    v7 = a1 + 1184;
    do
    {
      if ( !a2 )
        ++*(_DWORD *)(*(_QWORD *)v7 + 40LL);
      v8 = *(_QWORD *)v7;
      ++v6;
      v7 += 8LL;
      ++*(_DWORD *)(v8 + 44);
    }
    while ( v6 < *(_DWORD *)(a1 + 148) );
  }
LABEL_17:
  StorPortResume(a1);
  if ( v4 )
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset SUCCESS\n");
  else
    NVMeControllerStartFailureEventLog(a1);
  return v4;
}
