/*
 * XREFs of _RegisterLogonProcess @ 0x1C0069300
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     IsPrivileged @ 0x1C0068C60 (IsPrivileged.c)
 *     WmsgpConnect @ 0x1C01282D8 (WmsgpConnect.c)
 */

__int64 __fastcall RegisterLogonProcess(int a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v7; // rcx

  v2 = 0;
  v3 = a1;
  if ( gpidLogon )
  {
    if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    {
      gpidLogonUI = v3;
      return 1;
    }
    v7 = 0x2000000LL;
  }
  else
  {
    if ( (unsigned int)IsPrivileged(&psTcb) )
    {
      gpidLogon = v3;
      *((_DWORD *)gpsi + 563) = v3;
      if ( (int)WmsgpConnect(a2) < 0 )
        return v2;
      return 1;
    }
    v7 = 5LL;
  }
  UserSetLastError(v7, v5);
  return 0LL;
}
