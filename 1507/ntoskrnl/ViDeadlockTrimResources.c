/*
 * XREFs of ViDeadlockTrimResources @ 0x140751920
 * Callers:
 *     ViDeadlockSearchResource @ 0x1407517B8 (ViDeadlockSearchResource.c)
 * Callees:
 *     ViDeadlockForgetResourceHistory @ 0x140750EF8 (ViDeadlockForgetResourceHistory.c)
 */

void __fastcall ViDeadlockTrimResources(_QWORD **a1, _QWORD *a2)
{
  _DWORD *v2; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx

  v2 = ViDeadlockGlobals;
  ++*((_DWORD *)ViDeadlockGlobals + 8212);
  if ( (v2[8212] & 0xF) == 0 )
  {
    v5 = *a1;
    while ( v5 != a1 )
    {
      v6 = (__int64)(v5 - 5);
      v5 = (_QWORD *)*v5;
      ViDeadlockForgetResourceHistory(v6, ViDeadlockTrimThreshold, ViDeadlockAgeWindow, a2);
    }
  }
}
