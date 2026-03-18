/*
 * XREFs of ValidateHmenu @ 0x1C0076AD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     HMValidateHandle @ 0x1C0076B18 (HMValidateHandle.c)
 */

__int64 __fastcall ValidateHmenu(void *a1)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
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
