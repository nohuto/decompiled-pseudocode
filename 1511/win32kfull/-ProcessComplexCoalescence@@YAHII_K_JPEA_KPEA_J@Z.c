/*
 * XREFs of ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C000D8B8
 * Callers:
 *     ProcessSuspendedPostMessage @ 0x1C0001650 (ProcessSuspendedPostMessage.c)
 *     ProcessSuspendedSendMessage @ 0x1C000D418 (ProcessSuspendedSendMessage.c)
 *     ProcessSuspendedEventMessage @ 0x1C000D7A8 (ProcessSuspendedEventMessage.c)
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
LABEL_14:
    *a6 = a4;
    return 0LL;
  }
  if ( a2 != 536 )
  {
    if ( *a5 )
    {
      if ( !a3 )
        return 1LL;
    }
    else if ( a3 )
    {
      return 1LL;
    }
    *a5 = a3;
    goto LABEL_14;
  }
  if ( *a5 != a3 || (a3 & 0x8000) != 0 )
    return 1LL;
  return *a6 != a4;
}
