/*
 * XREFs of SmProcessDeleteRequest @ 0x1406570F8
 * Callers:
 *     SmSetStoreInformation @ 0x1404ACFC0 (SmSetStoreInformation.c)
 * Callees:
 *     SmKmStoreDelete @ 0x1404D1364 (SmKmStoreDelete.c)
 *     SmpUpdateCacheStatsBucketIndex @ 0x1404D1B8C (SmpUpdateCacheStatsBucketIndex.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessDeleteRequest(__int64 a1, __int64 *a2, int a3, char a4)
{
  int v4; // ebx
  __int64 v5; // rax

  if ( a3 == 8 )
  {
    if ( a4 && ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = *a2;
    if ( (unsigned __int8)*a2 != 1 || (v5 & 0xFFFFFF00) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v4 = SmKmStoreDelete(a1, HIDWORD(v5), a4);
      if ( v4 >= 0 )
        SmpUpdateCacheStatsBucketIndex();
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return (unsigned int)v4;
}
