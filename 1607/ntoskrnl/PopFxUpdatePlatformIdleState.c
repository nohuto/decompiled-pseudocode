/*
 * XREFs of PopFxUpdatePlatformIdleState @ 0x14020416C
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x14009D57C (IoReleaseRemoveLockEx.c)
 *     IoAcquireRemoveLockEx @ 0x1400BF5C0 (IoAcquireRemoveLockEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall PopFxUpdatePlatformIdleState(__int64 a1, int a2, _DWORD *a3)
{
  NTSTATUS v6; // ebx
  struct _IO_REMOVE_LOCK *v7; // rbp
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v12[4]; // [rsp+48h] [rbp-40h] BYREF

  if ( *a3 )
  {
    v6 = -1073741822;
    if ( *(_QWORD *)(a1 + 152) )
    {
      v7 = (struct _IO_REMOVE_LOCK *)(a1 + 208);
      v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 208), 0LL, &File, 1u, 0x20u);
      if ( v6 >= 0 )
      {
        v8 = a3[1];
        v9 = *(_QWORD *)(a1 + 168);
        v11 = 0LL;
        v12[1] = v8;
        v12[2] = a3[2];
        v12[0] = a2;
        v6 = (*(__int64 (__fastcall **)(__int64, GUID *, _DWORD *, __int64, _QWORD, _QWORD, __int64 *))(a1 + 152))(
               v9,
               &GUID_PLATFORM_IDLE_UPDATE,
               v12,
               12LL,
               0LL,
               0LL,
               &v11);
        IoReleaseRemoveLockEx(v7, 0LL, 0x20u);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
