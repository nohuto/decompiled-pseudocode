/*
 * XREFs of PerfDiagInitialize @ 0x140755CA0
 * Callers:
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 *     EtwUnregister @ 0x1404D02C4 (EtwUnregister.c)
 *     EtwWriteStartScenario @ 0x1405045C4 (EtwWriteStartScenario.c)
 */

int PerfDiagInitialize()
{
  int result; // eax
  ULONGLONG RegHandle; // [rsp+30h] [rbp-20h] BYREF
  GUID OutputBuffer; // [rsp+38h] [rbp-18h] BYREF

  qword_1402DAE60 = 0LL;
  dword_1402DAE68 = 0;
  EtwRegister(
    &MS_Kernel_BootDiagnostics_SystemProxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpBootSystemProxyCallback,
    0LL,
    &PerfDiagGlobals);
  EtwRegister(
    &MS_Kernel_BootDiagnostics_UserProxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpBootUserProxyCallback,
    0LL,
    &qword_1402DAE48);
  EtwRegister(
    &MS_Kernel_SecondaryLogonDiagnostics_Proxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpSecondaryLogonProxyCallback,
    0LL,
    &qword_1402DAE50);
  EtwRegister(
    &MS_Kernel_ShutdownDiagnostics_Proxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpShutdownProxyCallback,
    0LL,
    &qword_1402DAE58);
  result = EtwRegister(&MS_Kernel_BootDiagnostics_Provider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    OutputBuffer.Data1 = 1729382729;
    *(_DWORD *)&OutputBuffer.Data2 = 1213813042;
    *(_DWORD *)OutputBuffer.Data4 = 933705344;
    *(_DWORD *)&OutputBuffer.Data4[4] = -668649292;
    EtwWriteStartScenario((ULONG_PTR *)RegHandle, &KMBootEvt_SystemBoot_Start, &OutputBuffer, 0, 0LL);
    return EtwUnregister(RegHandle);
  }
  return result;
}
