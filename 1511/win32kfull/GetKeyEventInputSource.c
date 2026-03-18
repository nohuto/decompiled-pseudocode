/*
 * XREFs of GetKeyEventInputSource @ 0x1C00844F0
 * Callers:
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall GetKeyEventInputSource(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v4; // edi
  int v6; // esi

  v4 = 0;
  *a3 = 1;
  v6 = a1;
  if ( a2 )
  {
    v4 = *(_DWORD *)(a2 + 8);
  }
  else if ( gbEnforceUIPI && (a1 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL), (int)a1 < 0)
         || PsGetCurrentProcess(a1, 0LL, a3, a4) == gpepCSRSS )
  {
    v4 = 1;
  }
  if ( !v6 || v4 )
    a3[1] = 1;
  else
    a3[1] = 2;
}
