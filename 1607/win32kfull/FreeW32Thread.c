/*
 * XREFs of FreeW32Thread @ 0x1C01016C4
 * Callers:
 *     W32pThreadCallout @ 0x1C0101580 (W32pThreadCallout.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall FreeW32Thread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rax

  v4 = 0LL;
  v6 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(a1, a2, a3, a4);
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  vMarkFreeW32Thread(v6);
  v11 = (__int64 *)PsGetThreadWin32Thread(a1, v8, v9, v10);
  if ( v11 )
    v4 = *v11;
  return DereferenceW32Thread(v4);
}
