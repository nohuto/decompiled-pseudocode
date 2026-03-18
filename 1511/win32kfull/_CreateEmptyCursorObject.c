/*
 * XREFs of _CreateEmptyCursorObject @ 0x1C00EF040
 * Callers:
 *     _DuplicateCursor @ 0x1C014C640 (_DuplicateCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateEmptyCursorObject(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rdi

  LOBYTE(a3) = 3;
  v4 = HMAllocObject(gptiCurrent, 0LL, a3);
  v9 = 0LL;
  v10 = v4;
  if ( a1 )
  {
    if ( !v4 )
      return v9;
    if ( PsGetCurrentProcess(v6, v5, v7, v8) == gpepCSRSS )
      *(_QWORD *)(v10 + 24) = 0LL;
  }
  if ( v10 )
  {
    v9 = *(_QWORD *)v10;
    *(_DWORD *)(v10 + 80) = 2048;
    *(_QWORD *)(v10 + 48) = v10;
  }
  return v9;
}
