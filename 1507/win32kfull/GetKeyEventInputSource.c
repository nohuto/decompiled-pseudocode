/*
 * XREFs of GetKeyEventInputSource @ 0x1C004A394
 * Callers:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall GetKeyEventInputSource(int a1, __int64 a2, _DWORD *a3)
{
  int v3; // edi

  v3 = 0;
  *a3 = 1;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 8);
  }
  else if ( gbEnforceUIPI && *(int *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL) < 0 || PsGetCurrentProcess() == gpepCSRSS )
  {
    v3 = 1;
  }
  if ( !a1 || v3 )
    a3[1] = 1;
  else
    a3[1] = 2;
}
