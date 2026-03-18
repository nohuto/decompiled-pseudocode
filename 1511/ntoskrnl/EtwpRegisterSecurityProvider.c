/*
 * XREFs of EtwpRegisterSecurityProvider @ 0x14054B668
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14003D380 (PsGetCurrentThreadProcessId.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 */

__int64 EtwpRegisterSecurityProvider()
{
  unsigned int v0; // ebx
  __int64 SiloDriverState; // rdi

  v0 = 0;
  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  if ( *(_DWORD *)(SiloDriverState + 5028) )
    v0 = -1073741790;
  else
    *(_DWORD *)(SiloDriverState + 5028) = PsGetCurrentThreadProcessId();
  PsDereferenceMonitorContextServerSilo(SiloDriverState);
  return v0;
}
