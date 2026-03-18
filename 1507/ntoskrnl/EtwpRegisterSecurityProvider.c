/*
 * XREFs of EtwpRegisterSecurityProvider @ 0x1405C2950
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1400CD4B0 (PsGetCurrentThreadProcessId.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 */

__int64 __fastcall EtwpRegisterSecurityProvider(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rdi
  unsigned int v5; // ebx
  _DWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  PsGetMonitorContextServerSilo(EtwSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v7, a4);
  v4 = v7;
  v5 = 0;
  if ( *v7 )
    v5 = -1073741790;
  else
    *v4 = PsGetCurrentThreadProcessId();
  PsDereferenceMonitorContextServerSilo((__int64)v4);
  return v5;
}
