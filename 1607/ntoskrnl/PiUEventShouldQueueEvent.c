/*
 * XREFs of PiUEventShouldQueueEvent @ 0x140086B34
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14048D5A4 (PiUEventNotifyUserMode.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiUEventShouldQueueEvent(__int64 a1)
{
  char v1; // dl
  int v2; // eax
  bool v3; // zf

  v1 = 1;
  if ( !PiUEventBroadcastSubscriberPresent )
  {
    v2 = *(_DWORD *)(a1 + 120);
    switch ( v2 )
    {
      case 1:
        goto LABEL_14;
      case 2:
        v3 = PiUEventDevInterfaceClientCount == 0;
        return !v3;
      case 4:
        goto LABEL_10;
      case 3:
LABEL_14:
        v3 = PiUEventDevHandleClientCount == 0;
        return !v3;
      case 9:
        v3 = PiUEventDevInstancePropertyClientCount == 0;
        return !v3;
    }
    if ( v2 > 9 && v2 <= 11 )
    {
LABEL_10:
      v3 = PiUEventDevInstanceClientCount == 0;
      return !v3;
    }
  }
  return v1;
}
