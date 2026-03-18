/*
 * XREFs of ACPIInternalEvaluateOST @ 0x1C004FE38
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C000A650 (ACPIProcessorStartDevice.c)
 *     ACPICheckModuleStarted @ 0x1C0051108 (ACPICheckModuleStarted.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0090230 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C000E3F0 (WPP_RECORDER_SF_qss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIInternalEvaluateOST(__int64 a1, __int64 a2, int a3)
{
  int v5; // edi
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  const char *v9; // rax
  const char *v10; // r8
  __int64 v11; // r8
  const char *v12; // rax
  const char *v13; // rdx
  _QWORD v15[16]; // [rsp+50h] [rbp-A8h] BYREF

  v5 = -1073741823;
  v6 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1414745951);
  if ( v6 )
  {
    memset(v15, 0, 0x78uLL);
    LODWORD(v15[7]) = a3;
    WORD1(v15[0]) = 1;
    LODWORD(v15[2]) = 0;
    WORD1(v15[10]) = 2;
    WORD1(v15[5]) = 1;
    v15[14] = 0LL;
    v5 = AMLIAsyncEvalObject(v6, 0LL, 3u, v15, 0LL, 0LL);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v6, v7);
    if ( v5 == 259 )
      v5 = 0;
    if ( v5 < 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = (const char *)qword_1C002C340;
      v10 = (const char *)qword_1C002C340;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v9 = *(const char **)(a1 + 560);
        if ( (v8 & 0x400000000000LL) != 0 )
          v10 = *(const char **)(a1 + 568);
      }
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xFu,
        (__int64)&WPP_f6c3ab00a0373aecf4646ee15b0100d4_Traceguids,
        v5,
        a1,
        v9,
        v10);
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = (const char *)qword_1C002C340;
    v13 = (const char *)qword_1C002C340;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(a1 + 560);
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_qss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x10u,
      (__int64)&WPP_f6c3ab00a0373aecf4646ee15b0100d4_Traceguids,
      a1,
      v12,
      v13);
  }
  return (unsigned int)v5;
}
