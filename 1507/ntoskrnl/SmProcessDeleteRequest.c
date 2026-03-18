/*
 * XREFs of SmProcessDeleteRequest @ 0x1406D9384
 * Callers:
 *     SmSetStoreInformation @ 0x140546F94 (SmSetStoreInformation.c)
 * Callees:
 *     SmpUpdateCacheStatsBucketIndex @ 0x1404F9788 (SmpUpdateCacheStatsBucketIndex.c)
 *     SmKmStoreDelete @ 0x1404FA05C (SmKmStoreDelete.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessDeleteRequest(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rax

  if ( a3 == 8 )
  {
    if ( (_BYTE)a4 && ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = *a2;
    if ( (unsigned __int8)*a2 != 1 || (v5 & 0xFFFFFF00) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v4 = SmKmStoreDelete(a1, HIDWORD(v5), a4, a4);
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
