/*
 * XREFs of RtlWow64GetProcessMachines @ 0x18006E1C0
 * Callers:
 *     LdrpGetModuleName @ 0x18006D704 (LdrpGetModuleName.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQuerySystemInformationEx @ 0x1800A8DD0 (NtQuerySystemInformationEx.c)
 *     _alloca_probe @ 0x1800AADB0 (_alloca_probe.c)
 */

NTSTATUS __cdecl RtlWow64GetProcessMachines(HANDLE ProcessHandle, PUSHORT ProcessMachine, PUSHORT NativeMachine)
{
  int v5; // r9d
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  void *v9; // rsp
  ULONG v10; // ecx
  USHORT v11; // r10
  USHORT v12; // r8
  __int64 v13; // r11
  ULONG *v14; // rdx
  ULONG SystemInformation[2]; // [rsp+30h] [rbp+0h] BYREF
  HANDLE InputBuffer; // [rsp+60h] [rbp+30h] BYREF

  InputBuffer = ProcessHandle;
  v5 = NtQuerySystemInformationEx(SystemSupportedProcessorArchitectures, &InputBuffer, 8u, 0LL, 0, SystemInformation);
  if ( v5 == -1073741789 )
  {
    v6 = SystemInformation[0] + 15LL;
    if ( v6 <= SystemInformation[0] )
      v6 = 0xFFFFFFFFFFFFFF0LL;
    v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = alloca(v7);
    v9 = alloca(v7);
    v5 = NtQuerySystemInformationEx(
           SystemSupportedProcessorArchitectures,
           &InputBuffer,
           8u,
           SystemInformation,
           SystemInformation[0],
           SystemInformation);
    if ( v5 >= 0 )
    {
      v10 = SystemInformation[0];
      v11 = 0;
      v12 = 0;
      LODWORD(v13) = 0;
      if ( LOWORD(SystemInformation[0]) )
      {
        v14 = SystemInformation;
        do
        {
          if ( (v10 & 0xC0000) == 0x80000 )
            v11 = *(_WORD *)v14;
          if ( (v10 & 0x40000) != 0 )
            v12 = *(_WORD *)v14;
          v13 = (unsigned int)(v13 + 1);
          v14 = &SystemInformation[v13];
          v10 = *v14;
        }
        while ( (unsigned __int16)*v14 );
      }
      *ProcessMachine = v11;
      if ( NativeMachine )
        *NativeMachine = v12;
    }
  }
  return v5;
}
