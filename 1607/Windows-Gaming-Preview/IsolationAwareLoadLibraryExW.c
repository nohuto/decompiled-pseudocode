/*
 * XREFs of IsolationAwareLoadLibraryExW @ 0x180001338
 * Callers:
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x180001D70 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180001DE0 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 * Callees:
 *     WinbaseIsolationAwarePrivatetRgzlnPgpgk @ 0x180001470 (WinbaseIsolationAwarePrivatetRgzlnPgpgk.c)
 */

HMODULE IsolationAwareLoadLibraryExW()
{
  int v0; // eax
  int v1; // edi
  __int64 v2; // rcx
  DWORD LastError; // eax
  HMODULE Library; // rax
  HMODULE v6; // rdi
  BOOL v7; // ebx
  DWORD v8; // esi
  ULONG_PTR Cookie; // [rsp+48h] [rbp+10h] BYREF

  Cookie = 0LL;
  if ( !IsolationAwarePrivateT_SAbnPgpgk )
  {
    v0 = IsolationAwarePrivateT_SqbjaYRiRY;
    if ( !IsolationAwarePrivateT_SqbjaYRiRY )
    {
      v1 = 0;
      v2 = (unsigned int)WinbaseIsolationAwarePrivateT_SpYRNahcpNYYRQ;
      if ( WinbaseIsolationAwarePrivateT_SpYRNahcpNYYRQ )
      {
        OutputDebugStringA("IsolationAware function called after IsolationAwareCleanup\n");
        v0 = IsolationAwarePrivateT_SqbjaYRiRY;
        v2 = (unsigned int)WinbaseIsolationAwarePrivateT_SpYRNahcpNYYRQ;
      }
      if ( !v0 )
      {
        if ( ((_DWORD)v2 || (unsigned int)WinbaseIsolationAwarePrivatetRgzlnPgpgk(v2))
          && ActivateActCtx(WinbaseIsolationAwarePrivateT_UnPgpgk, &Cookie) )
        {
          v1 = 1;
        }
        if ( !v1 )
        {
          LastError = GetLastError();
          if ( LastError - 126 <= 1 || LastError == 120 || LastError == 1 || LastError == 50 )
          {
            IsolationAwarePrivateT_SqbjaYRiRY = 1;
            v1 = 1;
          }
          if ( !v1 )
            return 0LL;
        }
      }
    }
  }
  Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
  v6 = Library;
  if ( !IsolationAwarePrivateT_SAbnPgpgk || !IsolationAwarePrivateT_SqbjaYRiRY )
  {
    v7 = Library == 0LL;
    if ( Library )
      v8 = 0;
    else
      v8 = GetLastError();
    DeactivateActCtx(0, Cookie);
    if ( v7 )
      SetLastError(v8);
  }
  return v6;
}
