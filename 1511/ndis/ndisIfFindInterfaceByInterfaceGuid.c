/*
 * XREFs of ndisIfFindInterfaceByInterfaceGuid @ 0x1C001B354
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C0013E60 (ndisIfCreateOrUpdateInterface.c)
 *     ndisIfAliasChange @ 0x1C003F5D0 (ndisIfAliasChange.c)
 *     ndisAddDevice @ 0x1C00E1708 (ndisAddDevice.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C001B3C4 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 */

struct _LIST_ENTRY *__fastcall ndisIfFindInterfaceByInterfaceGuid(struct _GUID *a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v3; // rdi

  Flink = ndisIfList.Flink;
  v3 = 0LL;
  while ( Flink != &ndisIfList )
  {
    if ( !(unsigned int)ndisCompareGuid(a1, (const struct _GUID *)((char *)&Flink[-44].Blink + 4)) )
      return Flink - 77;
    Flink = Flink->Flink;
  }
  return (struct _LIST_ENTRY *)v3;
}
