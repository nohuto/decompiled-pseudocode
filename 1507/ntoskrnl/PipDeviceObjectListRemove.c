/*
 * XREFs of PipDeviceObjectListRemove @ 0x1406959D0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     IopRemoveCurrentRelationFromList @ 0x140695924 (IopRemoveCurrentRelationFromList.c)
 *     IopRemoveRelationFromList @ 0x14069599C (IopRemoveRelationFromList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall PipDeviceObjectListRemove(unsigned int *a1, unsigned int a2)
{
  PVOID *v5; // rsi

  if ( a2 >= *a1 )
    return 3221225612LL;
  v5 = (PVOID *)&a1[6 * a2];
  ObfDereferenceObject(v5[2]);
  if ( ((_DWORD)v5[4] & 1) != 0 )
    --a1[2];
  if ( a2 < *a1 - 1 )
    memmove(v5 + 2, &a1[4 * a2 + 10 + 2 * a2], 24LL * (*a1 - a2 - 1));
  --*a1;
  return 0LL;
}
