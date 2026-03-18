/*
 * XREFs of UserScreenAccessCheck @ 0x1C0074110
 * Callers:
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00C3DE0 (NtGdiDdDDICreateOutputDupl.c)
 * Callees:
 *     <none>
 */

__int64 UserScreenAccessCheck()
{
  unsigned int v0; // ebx
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  v0 = 0;
  v1 = 0LL;
  if ( grpdeskRitInput )
    v1 = *(_QWORD *)(grpdeskRitInput + 40);
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( (!v1
     || (v5 = *(_QWORD *)(v2 + 408)) != 0 && *(_QWORD *)(v5 + 40) == v1
     || (*(_DWORD *)(v2 + 440) & 8) != 0
     || (*(_DWORD *)(v2 + 1096) & 4) != 0)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 12) & 0x40010) == 0x40010 )
  {
    return 1;
  }
  return v0;
}
