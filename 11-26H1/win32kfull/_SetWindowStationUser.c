/*
 * XREFs of _SetWindowStationUser @ 0x14022EB3C
 * Callers:
 *     NtUserSetWindowStationUser @ 0x1402BEB90 (NtUserSetWindowStationUser.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall SetWindowStationUser(_QWORD *a1, _QWORD *a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  HANDLE v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rcx
  void *v11; // rax
  int v13; // ecx

  v4 = a4;
  v7 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63536);
  if ( PsGetCurrentProcessId() == v7 )
  {
    if ( a1[3] == W32GetUserSessionState(v9, v8) + 68456 )
      CitUserChange(*a2);
    v10 = (void *)a1[20];
    if ( v10 )
      Win32FreePool(v10);
    if ( !a3 )
    {
      a1[20] = 0LL;
      goto LABEL_9;
    }
    v11 = (void *)Win32AllocPoolWithQuotaZInit(v4, 1702064981LL);
    a1[20] = v11;
    if ( v11 )
    {
      memmove(v11, a3, v4);
LABEL_9:
      a1[19] = *a2;
      return 1LL;
    }
    v13 = 14;
  }
  else
  {
    v13 = 5;
  }
  UserSetLastError(v13);
  return 0LL;
}
