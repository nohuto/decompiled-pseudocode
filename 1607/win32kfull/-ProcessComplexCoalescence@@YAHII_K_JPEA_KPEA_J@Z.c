/*
 * XREFs of ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C0120720
 * Callers:
 *     ProcessSuspendedPostMessage @ 0x1C0120570 (ProcessSuspendedPostMessage.c)
 *     ProcessSuspendedEventMessage @ 0x1C0120610 (ProcessSuspendedEventMessage.c)
 *     ProcessSuspendedSendMessage @ 0x1C0129AA0 (ProcessSuspendedSendMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ProcessComplexCoalescence(
        int a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 *a6)
{
  int v6; // ecx

  v6 = a1 - 2;
  if ( !v6 )
    return a3 != *a5 || a4 != *a6;
  if ( v6 != 1 )
  {
    *a5 = a3;
LABEL_12:
    *a6 = a4;
    return 0LL;
  }
  if ( a2 != 536 )
  {
    if ( !*a5 && !a3 )
    {
      *a5 = 0LL;
      goto LABEL_12;
    }
    return 1LL;
  }
  if ( *a5 != a3 || (a3 & 0x8000) != 0 )
    return 1LL;
  return *a6 != a4;
}
