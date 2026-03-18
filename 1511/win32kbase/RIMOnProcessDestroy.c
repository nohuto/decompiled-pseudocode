/*
 * XREFs of RIMOnProcessDestroy @ 0x1C0046810
 * Callers:
 *     DestroyProcessInfo @ 0x1C00448B4 (DestroyProcessInfo.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 */

__int64 __fastcall RIMOnProcessDestroy(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *i; // rax

  RIMLockExclusive(&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( i[1].Flink == a1 )
      BYTE1(i[-1].Blink) = 1;
  }
  RIMUnlockExclusive(&gObListLock);
  return RIMUnregisterCurrentProcessForInput();
}
