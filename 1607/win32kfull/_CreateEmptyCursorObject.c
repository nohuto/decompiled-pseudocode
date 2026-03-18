/*
 * XREFs of _CreateEmptyCursorObject @ 0x1C005CBB0
 * Callers:
 *     _DuplicateCursor @ 0x1C01536CC (_DuplicateCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateEmptyCursorObject(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi

  LOBYTE(a3) = 3;
  v4 = HMAllocObject(gptiCurrent, 0LL, a3);
  v5 = 0LL;
  v6 = v4;
  if ( a1 )
  {
    if ( !v4 )
      return v5;
    if ( PsGetCurrentProcess() == gpepCSRSS )
      *(_QWORD *)(v6 + 24) = 0LL;
  }
  if ( v6 )
  {
    v5 = *(_QWORD *)v6;
    *(_DWORD *)(v6 + 80) = 2048;
    *(_QWORD *)(v6 + 48) = v6;
  }
  return v5;
}
