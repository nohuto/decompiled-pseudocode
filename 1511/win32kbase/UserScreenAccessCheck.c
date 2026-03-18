/*
 * XREFs of UserScreenAccessCheck @ 0x1C006E870
 * Callers:
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00B8A00 (NtGdiDdDDICreateOutputDupl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserScreenAccessCheck(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  v3 = 0;
  v4 = 0LL;
  if ( grpdeskRitInput )
    v4 = *(_QWORD *)(grpdeskRitInput + 40);
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3);
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  if ( (!v4
     || (v8 = *(_QWORD *)(v5 + 408)) != 0 && *(_QWORD *)(v8 + 40) == v4
     || (*(_DWORD *)(v5 + 440) & 8) != 0
     || (*(_DWORD *)(v5 + 1072) & 4) != 0)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 12) & 0x40010) == 0x40010 )
  {
    return 1;
  }
  return v3;
}
