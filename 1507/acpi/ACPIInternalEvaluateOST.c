/*
 * XREFs of ACPIInternalEvaluateOST @ 0x1C003C84C
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C001A890 (ACPIProcessorStartDevice.c)
 *     ACPICheckModuleStarted @ 0x1C003DD58 (ACPICheckModuleStarted.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0068820 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIInternalEvaluateOST(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  __int64 *v5; // rdi
  _QWORD v7[16]; // [rsp+30h] [rbp-98h] BYREF

  v4 = -1073741823;
  v5 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(a1 + 704), 1414745951);
  if ( v5 )
  {
    memset(v7, 0, 0x78uLL);
    WORD1(v7[0]) = 1;
    WORD1(v7[5]) = 1;
    LODWORD(v7[2]) = 0;
    WORD1(v7[10]) = 2;
    LODWORD(v7[7]) = a3;
    v7[14] = 0LL;
    v4 = AMLIAsyncEvalObject(v5, 0LL, 3u, v7, 0LL, 0LL);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v5);
    if ( v4 == 259 )
      return 0;
  }
  return v4;
}
