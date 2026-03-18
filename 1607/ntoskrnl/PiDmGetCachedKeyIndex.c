/*
 * XREFs of PiDmGetCachedKeyIndex @ 0x1404FF530
 * Callers:
 *     PiDmObjectGetCachedObjectReference @ 0x1404DE73C (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1404FF354 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1404FFCDC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectProcessPropertyChange @ 0x14050539C (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectCreate @ 0x1405641DC (PiDmObjectCreate.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1405663BC (PiDmListUpdateAggregationCountWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDmGetCachedKeyIndex(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r11d
  __int64 v6; // r9
  __int64 v7; // r8

  result = 0LL;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v5 = *(_DWORD *)(a3 + 16);
  while ( 1 )
  {
    v6 = *(_QWORD *)(a1 + 24 * result);
    if ( v5 == *(_DWORD *)(v6 + 16) )
    {
      v7 = *(_QWORD *)a3 - *(_QWORD *)v6;
      if ( *(_QWORD *)a3 == *(_QWORD *)v6 )
        v7 = *(_QWORD *)(a3 + 8) - *(_QWORD *)(v6 + 8);
      if ( !v7 )
        break;
    }
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= a2 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
