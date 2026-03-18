/*
 * XREFs of NVMeControllerAsyncReset @ 0x1C00067E8
 * Callers:
 *     NVMeFirmwareActivateCompletion @ 0x1C000A100 (NVMeFirmwareActivateCompletion.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMeControllerAsyncReset(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  v8[0] = 0LL;
  if ( (unsigned int)StorPortExtendedFunction(29LL, a1, v8)
    || (unsigned int)StorPortExtendedFunction(0LL, a1, 24LL)
    || (MEMORY[0] = a2,
        MEMORY[8] = NVMeFirmwareActivateCompletionAfterReset,
        MEMORY[0x10] = a4,
        (unsigned int)StorPortExtendedFunction(30LL, a1, NVMeControllerAsyncResetWorker)) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Async Controller Reset FAILED\n");
    if ( v8[0] )
      StorPortExtendedFunction(31LL, a1, v8[0]);
    return 0;
  }
  else
  {
    StorPortDebugPrint(3LL, "StorNVMe - Async Controller Reset QUEUED\n");
    return 1;
  }
}
