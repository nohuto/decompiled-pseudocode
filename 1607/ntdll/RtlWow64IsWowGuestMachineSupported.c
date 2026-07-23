/*
 * XREFs of RtlWow64IsWowGuestMachineSupported @ 0x180083DF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQuerySystemInformationEx @ 0x1800A8DD0 (NtQuerySystemInformationEx.c)
 *     _alloca_probe @ 0x1800AADB0 (_alloca_probe.c)
 */

NTSTATUS __cdecl RtlWow64IsWowGuestMachineSupported(USHORT NativeMachine, PBOOLEAN IsWowGuestMachineSupported)
{
  BOOLEAN v2; // bl
  int v5; // r8d
  NTSTATUS v6; // eax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  ULONG v11; // eax
  __int64 v12; // rdx
  int v13; // ecx
  ULONG SystemInformation[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp+8h] BYREF

  v2 = 0;
  v5 = 0;
  if ( NativeMachine == 0x8664 )
  {
LABEL_10:
    *IsWowGuestMachineSupported = v2;
    return v5;
  }
  InputBuffer = 0LL;
  v6 = NtQuerySystemInformationEx(SystemSupportedProcessorArchitectures, &InputBuffer, 8u, 0LL, 0, SystemInformation);
  v5 = v6;
  if ( v6 == -1073741789 )
  {
    v7 = SystemInformation[0] + 15LL;
    if ( v7 <= SystemInformation[0] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = alloca(v8);
    v10 = alloca(v8);
    v5 = NtQuerySystemInformationEx(
           SystemSupportedProcessorArchitectures,
           &InputBuffer,
           8u,
           SystemInformation,
           SystemInformation[0],
           SystemInformation);
    if ( v5 >= 0 )
    {
      v11 = SystemInformation[0];
      LODWORD(v12) = 0;
      v13 = LOWORD(SystemInformation[0]);
      if ( LOWORD(SystemInformation[0]) )
      {
        while ( v13 != NativeMachine || (v11 & 0x60000) != 0x20000 )
        {
          v12 = (unsigned int)(v12 + 1);
          v11 = SystemInformation[v12];
          v13 = (unsigned __int16)v11;
          if ( !(_WORD)v11 )
            goto LABEL_10;
        }
        v2 = 1;
      }
      goto LABEL_10;
    }
  }
  else if ( v6 >= 0 )
  {
    return -1073741823;
  }
  return v5;
}
