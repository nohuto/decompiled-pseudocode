/*
 * XREFs of UserSurfaceAccessCheck @ 0x1C006E710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserSurfaceAccessCheck(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rcx
  _BOOL8 result; // rax

  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3);
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  result = (!a1
         || (v6 = *(_QWORD *)(v4 + 408)) != 0 && *(_QWORD *)(v6 + 40) == a1
         || (v6 = *(unsigned int *)(v4 + 440), (v6 & 8) != 0)
         || (v6 = *(unsigned int *)(v4 + 1072), (v6 & 4) != 0))
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 12) & 0x40010) == 0x40010;
  return result;
}
