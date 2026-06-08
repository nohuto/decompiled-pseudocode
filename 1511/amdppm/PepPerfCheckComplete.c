/*
 * XREFs of PepPerfCheckComplete @ 0x1C0004ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PepPerfCheckComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // [rsp+40h] [rbp+18h] BYREF

  if ( !PepSkipPerfCheckNotification )
  {
    v2 = a2;
    PepSkipPerfCheckNotification = (int)PoFxProcessorNotification(a1, 33LL, &v2) < 0;
  }
}
