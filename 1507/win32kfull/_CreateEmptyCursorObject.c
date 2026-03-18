/*
 * XREFs of _CreateEmptyCursorObject @ 0x1C00E94B0
 * Callers:
 *     _DuplicateCursor @ 0x1C012366C (_DuplicateCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateEmptyCursorObject(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi

  LOBYTE(a3) = 3;
  v4 = HMAllocObject(gptiCurrent, 0LL, a3, 152LL);
  v7 = 0LL;
  v8 = v4;
  if ( a1 )
  {
    if ( !v4 )
      return v7;
    if ( PsGetCurrentProcess(v6, v5) == gpepCSRSS )
      *(_QWORD *)(v8 + 24) = 0LL;
  }
  if ( v8 )
  {
    v7 = *(_QWORD *)v8;
    *(_DWORD *)(v8 + 80) = 2048;
  }
  return v7;
}
