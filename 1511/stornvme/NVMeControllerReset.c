/*
 * XREFs of NVMeControllerReset @ 0x1C0004F78
 * Callers:
 *     NVMeHwResetBus @ 0x1C0001F30 (NVMeHwResetBus.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C00092F0 (NVMeFirmwareActivateCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C2A0 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     ControllerReset @ 0x1C0001000 (ControllerReset.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C00010CC (NVMeControllerStartFailureEventLog.c)
 *     NVMeQueuesReInit @ 0x1C0004134 (NVMeQueuesReInit.c)
 *     NVMeControllerInitPart1 @ 0x1C000436C (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C00044F0 (NVMeControllerInitPart2.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C0004DC4 (NVMeControllerCompleteAllIORequests.c)
 */

char __fastcall NVMeControllerReset(__int64 a1, char a2)
{
  char v4; // di
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = 1;
  StorPortDebugPrint(3LL, "StorNVMe - Controller Reset START\n");
  StorPortPause(a1, 120LL);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFEE | 0x10;
  NVMeControllerCompleteAllIORequests(a1, 14);
  if ( a2 )
  {
    if ( (*(_QWORD *)(a1 + 120) & 0x1000000000LL) == 0 )
    {
      StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (CAP.NSSRS == 0)\n");
      goto LABEL_7;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 104) + 32LL) = 1314278757;
    _InterlockedOr(v11, 0);
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
  if ( !NVMeControllerInitPart2(a1, 0LL, v5, v6) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart2() == FALSE)\n");
    goto LABEL_7;
  }
  v7 = 0;
  if ( *(int *)(a1 + 140) > 0 )
  {
    v8 = a1 + 1176;
    do
    {
      if ( !a2 )
        ++*(_DWORD *)(*(_QWORD *)v8 + 40LL);
      v9 = *(_QWORD *)v8;
      ++v7;
      v8 += 8LL;
      ++*(_DWORD *)(v9 + 44);
    }
    while ( v7 < *(_DWORD *)(a1 + 140) );
  }
LABEL_17:
  StorPortResume(a1);
  if ( v4 )
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset SUCCESS\n");
  else
    NVMeControllerStartFailureEventLog(a1);
  return v4;
}
