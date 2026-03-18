/*
 * XREFs of ?DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z @ 0x1C017079C
 * Callers:
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0171368 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01706D4 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

void __fastcall DpiBrightnessCleanupAggregateEvents(struct _DEVICE_OBJECT *a1, char a2)
{
  __int64 v2; // rsi
  char v3; // di
  _QWORD *v6; // rbx

  v2 = 2LL;
  v3 = 0;
  v6 = (char *)a1->DeviceExtension + 2936;
  do
  {
    if ( *v6 )
    {
      EADeleteAggregateEvent();
      if ( *((_BYTE *)v6 - 8) )
        v3 = 1;
      *((_BYTE *)v6 - 8) = 0;
      *v6 = 0LL;
    }
    v6 += 3;
    --v2;
  }
  while ( v2 );
  if ( v3 )
  {
    if ( a2 )
      DpiBrightnessAISetBacklightOptLevel(a1);
  }
}
