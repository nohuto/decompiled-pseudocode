/*
 * XREFs of rimIsValidDeviceClassNotifyContext @ 0x1C00C0C58
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0075BD0 (RIMDeviceClassNotify.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 */

__int64 __fastcall rimIsValidDeviceClassNotifyContext(struct _LIST_ENTRY *a1)
{
  unsigned int v2; // ebx
  struct _LIST_ENTRY *i; // rdx
  unsigned int v4; // ecx

  v2 = 0;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    v4 = 0;
    while ( a1 != &i[v4 + 23] )
    {
      if ( ++v4 > 2 )
        goto LABEL_7;
    }
    v2 = 1;
LABEL_7:
    ;
  }
  RIMUnlockExclusive((__int64)&gObListLock);
  return v2;
}
