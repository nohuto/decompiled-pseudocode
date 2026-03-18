/*
 * XREFs of FreeW32Thread @ 0x1C00DDC44
 * Callers:
 *     W32pThreadCallout @ 0x1C00DDBB0 (W32pThreadCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeW32Thread(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v5; // rax

  v1 = 0LL;
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(a1);
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  vMarkFreeW32Thread(v3);
  v5 = (__int64 *)PsGetThreadWin32Thread(a1);
  if ( v5 )
    v1 = *v5;
  return DereferenceW32Thread(v1);
}
