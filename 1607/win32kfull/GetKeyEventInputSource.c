/*
 * XREFs of GetKeyEventInputSource @ 0x1C00A3DD0
 * Callers:
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall GetKeyEventInputSource(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // edi
  int v5; // esi

  v3 = 0;
  *a3 = 1;
  v5 = a1;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 8);
  }
  else if ( gbEnforceUIPI && (a1 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL), (int)a1 < 0)
         || PsGetCurrentProcess(a1) == gpepCSRSS )
  {
    v3 = 1;
  }
  if ( !v5 || v3 )
    a3[1] = 1;
  else
    a3[1] = 2;
}
