/*
 * XREFs of _SetWindowStationUser @ 0x1C012DDF4
 * Callers:
 *     NtUserSetWindowStationUser @ 0x1C012DCF0 (NtUserSetWindowStationUser.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall SetWindowStationUser(__int64 a1, _QWORD *a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  void *v12; // rax
  __int64 v13; // rcx

  v4 = a4;
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    if ( *(struct tagTERMINAL *const *)(a1 + 24) == gTermIO )
      CitUserChange(*a2);
    v10 = *(_QWORD *)(a1 + 160);
    if ( v10 )
      Win32FreePool(v10, v8, v9);
    if ( !a3 )
    {
      *(_QWORD *)(a1 + 160) = 0LL;
LABEL_8:
      *(_QWORD *)(a1 + 152) = *a2;
      return 1LL;
    }
    v12 = (void *)Win32AllocPoolWithQuota(v4, 1702064981LL);
    *(_QWORD *)(a1 + 160) = v12;
    if ( v12 )
    {
      memmove(v12, a3, v4);
      goto LABEL_8;
    }
    v13 = 14LL;
  }
  else
  {
    v13 = 5LL;
  }
  UserSetLastError(v13);
  return 0LL;
}
