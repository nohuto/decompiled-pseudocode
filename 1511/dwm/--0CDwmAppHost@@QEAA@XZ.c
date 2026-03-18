/*
 * XREFs of ??0CDwmAppHost@@QEAA@XZ @ 0x140001D00
 * Callers:
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x140001000 (_dynamic_initializer_for__g_dwmAppHost__.c)
 * Callees:
 *     memset_0 @ 0x140003F66 (memset_0.c)
 */

CDwmAppHost *__fastcall CDwmAppHost::CDwmAppHost(CDwmAppHost *this)
{
  HANDLE CurrentProcess; // rax
  int ProcessInformation; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v4[32]; // [rsp+38h] [rbp-30h] BYREF
  int v5; // [rsp+58h] [rbp-10h]

  byte_14000A860 = 1;
  qword_14000A820 = 0LL;
  *(_OWORD *)&g_dwmAppHost = 0LL;
  dword_14000A828 = 0;
  hWnd = 0LL;
  qword_14000A848 = (__int64)&CSettingsManager::`vftable';
  InitializeSRWLock(&SRWLock);
  *(_QWORD *)&uExitCode = 0LL;
  qword_14000A878 = (__int64)&CDynamicSettingsManager::`vftable';
  word_14000A890 = 0;
  ProcessInformation = 0;
  memset_0(v4, 0, 0x28uLL);
  qword_14000A838 = 0LL;
  qword_14000A840 = 0LL;
  CurrentProcess = GetCurrentProcess();
  if ( NtQueryInformationProcess(CurrentProcess, ProcessBasicInformation, &ProcessInformation, 0x30u, 0LL) >= 0 )
    LODWORD(qword_14000A820) = v5;
  return (CDwmAppHost *)&g_dwmAppHost;
}
