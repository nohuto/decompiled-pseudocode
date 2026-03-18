/*
 * XREFs of _SetWindowStationUser @ 0x1C010C9D4
 * Callers:
 *     NtUserSetWindowStationUser @ 0x1C010C8D0 (NtUserSetWindowStationUser.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall SetWindowStationUser(__int64 a1, _QWORD *a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  __int64 v8; // rcx
  void *v10; // rax
  int v11; // ecx

  v4 = a4;
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    if ( *(struct tagTERMINAL *const *)(a1 + 24) == gTermIO )
      CitUserChange(*a2);
    v8 = *(_QWORD *)(a1 + 160);
    if ( v8 )
      Win32FreePool(v8);
    if ( !a3 )
    {
      *(_QWORD *)(a1 + 160) = 0LL;
LABEL_8:
      *(_QWORD *)(a1 + 152) = *a2;
      return 1LL;
    }
    v10 = (void *)Win32AllocPoolWithQuota(v4, 1702064981LL);
    *(_QWORD *)(a1 + 160) = v10;
    if ( v10 )
    {
      memmove(v10, a3, v4);
      goto LABEL_8;
    }
    v11 = 14;
  }
  else
  {
    v11 = 5;
  }
  UserSetLastError(v11);
  return 0LL;
}
