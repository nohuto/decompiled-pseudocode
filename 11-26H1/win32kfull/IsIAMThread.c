/*
 * XREFs of IsIAMThread @ 0x140059A4C
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x140059968 (IsAdaptiveQueueDetachExempted.c)
 *     NtUserSetActivationFilter @ 0x1401A1510 (NtUserSetActivationFilter.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1402AE7B0 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsIAMThread(__int64 a1)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *(_QWORD *)(a1 + 488);
  result = 0;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 288) == a1 )
      return 1;
  }
  return result;
}
