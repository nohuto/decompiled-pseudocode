/*
 * XREFs of _RegisterLogonProcess @ 0x1C00193D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00840A0 (IsPrivileged.c)
 *     WmsgpConnect @ 0x1C012552C (WmsgpConnect.c)
 */

__int64 __fastcall RegisterLogonProcess(int a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v5; // rcx
  int v7; // edi

  v2 = 0;
  v3 = a1;
  if ( gpidLogon )
  {
    if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    {
      v5 = 0x2000000LL;
LABEL_4:
      UserSetLastError(v5);
      return 0LL;
    }
    gpidLogonUI = v3;
    v7 = 0;
  }
  else
  {
    if ( !(unsigned int)IsPrivileged(&psTcb) )
    {
      v5 = 5LL;
      goto LABEL_4;
    }
    gpidLogon = v3;
    *((_DWORD *)gpsi + 563) = v3;
    v7 = WmsgpConnect(a2);
  }
  if ( ghSMSS )
  {
    if ( gpepCSRSS )
    {
      ZwClose(ghSMSS);
      ghSMSS = 0LL;
    }
  }
  LOBYTE(v2) = v7 >= 0;
  return v2;
}
