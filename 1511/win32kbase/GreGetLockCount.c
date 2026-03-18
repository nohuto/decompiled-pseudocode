/*
 * XREFs of GreGetLockCount @ 0x1C0070640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetLockCount(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax

  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3);
  if ( ThreadWin32Thread && (v4 = *ThreadWin32Thread) != 0 )
    return *(unsigned int *)(v4 + 104);
  else
    return 0LL;
}
