/*
 * XREFs of ValidateHmenu @ 0x1C004F690
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     HMValidateHandle @ 0x1C004F6D8 (HMValidateHandle.c)
 */

__int64 __fastcall ValidateHmenu(void *a1)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 result; // rax
  __int64 v4; // rdx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = HMValidateHandle(a1);
  if ( result )
  {
    if ( *(_QWORD *)(result + 24) != *(_QWORD *)(ThreadWin32Thread + 416) )
    {
      UserSetLastError(1401LL, v4);
      return 0LL;
    }
  }
  return result;
}
