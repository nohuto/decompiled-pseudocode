/*
 * XREFs of ndisIfFindInterfaceByInterfaceGuid @ 0x1C001D5A0
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C000FF3C (ndisIfCreateOrUpdateInterface.c)
 *     ndisIfAliasChange @ 0x1C00207CC (ndisIfAliasChange.c)
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall ndisIfFindInterfaceByInterfaceGuid(__int64 a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v3; // rbp
  unsigned int Blink_high; // ecx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // cx

  Flink = ndisIfList.Flink;
  v3 = 0LL;
  while ( Flink != &ndisIfList )
  {
    Blink_high = HIDWORD(Flink[-44].Blink);
    if ( *(_DWORD *)a1 <= Blink_high && *(_DWORD *)a1 >= Blink_high )
    {
      v5 = *(_WORD *)(a1 + 4);
      v6 = (unsigned __int16)Flink[-43].Flink;
      if ( v5 <= v6 && v5 >= v6 )
      {
        v7 = *(_WORD *)(a1 + 6);
        v8 = WORD1(Flink[-43].Flink);
        if ( v7 <= v8 && v7 >= v8 && RtlCompareMemory((const void *)(a1 + 8), (char *)&Flink[-43].Flink + 4, 8uLL) == 8 )
          return Flink - 77;
      }
    }
    Flink = Flink->Flink;
  }
  return (struct _LIST_ENTRY *)v3;
}
