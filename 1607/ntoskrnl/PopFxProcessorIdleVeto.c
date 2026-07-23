/*
 * XREFs of PopFxProcessorIdleVeto @ 0x14020319C
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x14009D57C (IoReleaseRemoveLockEx.c)
 *     IoAcquireRemoveLockEx @ 0x1400BF5C0 (IoAcquireRemoveLockEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall PopFxProcessorIdleVeto(__int64 a1, int a2, int a3, char a4)
{
  NTSTATUS v8; // ebx
  struct _IO_REMOVE_LOCK *v9; // rsi
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp-58h] BYREF
  _DWORD v13[2]; // [rsp+48h] [rbp-50h] BYREF
  char v14; // [rsp+50h] [rbp-48h]

  v8 = -1073741822;
  if ( *(_QWORD *)(a1 + 152) )
  {
    v9 = (struct _IO_REMOVE_LOCK *)(a1 + 208);
    v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 208), 0LL, &File, 1u, 0x20u);
    if ( v8 >= 0 )
    {
      v10 = *(_QWORD *)(a1 + 168);
      v12 = 0LL;
      v13[0] = a2;
      v13[1] = a3;
      v14 = a4;
      v8 = (*(__int64 (__fastcall **)(__int64, GUID *, _DWORD *, __int64, _QWORD, _QWORD, __int64 *))(a1 + 152))(
             v10,
             &GUID_PROCESSOR_IDLE_VETO,
             v13,
             12LL,
             0LL,
             0LL,
             &v12);
      IoReleaseRemoveLockEx(v9, 0LL, 0x20u);
    }
  }
  return (unsigned int)v8;
}
