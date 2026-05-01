/*
 * XREFs of ?SetMemoryUsageLimit@ModernResourceManagerProxy@@UEAAJ_KPEAH@Z @ 0x18000F6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ModernResourceManagerProxy::SetMemoryUsageLimit(
        ModernResourceManagerProxy *this,
        __int64 a2,
        int *a3)
{
  HANDLE CurrentProcess; // rax
  unsigned int Pointer; // ebx
  signed int LastError; // eax
  void *TokenHandle; // [rsp+78h] [rbp+20h] BYREF

  CurrentProcess = GetCurrentProcess();
  if ( OpenProcessToken(CurrentProcess, 8u, &TokenHandle) )
  {
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_1800163E0,
                              2u,
                              0LL,
                              *((_QWORD *)this + 2),
                              TokenHandle,
                              a2,
                              a3).Pointer;
    CloseHandle(TokenHandle);
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      return (unsigned __int16)LastError | 0x80070000;
    else
      return (unsigned int)LastError;
  }
  return Pointer;
}
