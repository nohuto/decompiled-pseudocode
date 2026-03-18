/*
 * XREFs of ValidateHmenu @ 0x1C0041540
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     HMValidateHandle @ 0x1C0041588 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 */

__int64 __fastcall ValidateHmenu(void *a1, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  result = HMValidateHandle(a1);
  if ( result )
  {
    if ( *(_QWORD *)(result + 24) != *(_QWORD *)(ThreadWin32Thread + 408) )
    {
      UserSetLastError(1401LL);
      return 0LL;
    }
  }
  return result;
}
