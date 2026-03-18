/*
 * XREFs of ?DeferPointerCursorOperation@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB4F0
 * Callers:
 *     ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01DB1E0 (-ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DeferPointerCursorOperation(const struct tagPOINTERCURSORDATA *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  int v3; // eax
  signed __int64 v4; // r8

  v1 = 0LL;
  while ( 1 )
  {
    v2 = _InterlockedExchange64((volatile __int64 *)&(&Feedback::gppcdFree)[v1], 0LL);
    if ( v2 )
      break;
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 3 )
      return;
  }
  v3 = *((_DWORD *)a1 + 2);
  *(_QWORD *)v2 = *(_QWORD *)a1;
  *(_DWORD *)(v2 + 8) = v3;
  v4 = _InterlockedExchange64((volatile __int64 *)&Feedback::gppcdLatest, v2);
  if ( v4 )
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&(&Feedback::gppcdFree)[(unsigned int)((v4 - (__int64)&Feedback::gpcd) / 0xCuLL)],
      v4,
      0LL);
  KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
}
