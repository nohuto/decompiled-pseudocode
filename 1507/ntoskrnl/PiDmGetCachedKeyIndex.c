/*
 * XREFs of PiDmGetCachedKeyIndex @ 0x140439E00
 * Callers:
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140439BE0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14043A8B8 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E0000 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140547318 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectCreate @ 0x1405AC0E8 (PiDmObjectCreate.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1405AF49C (PiDmListUpdateAggregationCountWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDmGetCachedKeyIndex(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r10

  result = 0LL;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 24 * result);
    if ( *(_DWORD *)(a3 + 16) == *(_DWORD *)(v4 + 16) )
    {
      v5 = *(_QWORD *)a3 - *(_QWORD *)v4;
      if ( *(_QWORD *)a3 == *(_QWORD *)v4 )
        v5 = *(_QWORD *)(a3 + 8) - *(_QWORD *)(v4 + 8);
      if ( !v5 )
        break;
    }
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= a2 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
