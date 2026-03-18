/*
 * XREFs of _RegisterLogonProcess @ 0x1C00548F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     IsPrivileged @ 0x1C0054150 (IsPrivileged.c)
 *     WmsgpConnect @ 0x1C014221C (WmsgpConnect.c)
 */

__int64 __fastcall RegisterLogonProcess(int a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  int v5; // edi
  __int64 v7; // rcx

  v2 = 0;
  v3 = a1;
  if ( !gpidLogon )
  {
    if ( (unsigned int)IsPrivileged(&psTcb) )
    {
      gpidLogon = v3;
      *((_DWORD *)gpsi + 563) = v3;
      v5 = WmsgpConnect(a2);
      goto LABEL_4;
    }
    v7 = 5LL;
LABEL_12:
    UserSetLastError(v7);
    return 0LL;
  }
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    v7 = 0x2000000LL;
    goto LABEL_12;
  }
  gpidLogonUI = v3;
  v5 = 0;
LABEL_4:
  if ( ghSMSS )
  {
    if ( gpepCSRSS )
    {
      ZwClose(ghSMSS);
      ghSMSS = 0LL;
    }
  }
  LOBYTE(v2) = v5 >= 0;
  return v2;
}
