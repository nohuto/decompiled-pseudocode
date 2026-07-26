/*
 * XREFs of ndisIfFindInterface @ 0x1C001AA70
 * Callers:
 *     ndisIfUpdateFilterIfStack @ 0x1C001A154 (ndisIfUpdateFilterIfStack.c)
 *     NdisIfAddIfStackEntry @ 0x1C001A910 (NdisIfAddIfStackEntry.c)
 *     ?ndisNsiEnumerateAllIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003C1B0 (-ndisNsiEnumerateAllIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllInvertedIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003C340 (-ndisNsiEnumerateAllInvertedIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@.c)
 *     ndisIfDeregisterInterfaceEx @ 0x1C003E7CC (ndisIfDeregisterInterfaceEx.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall ndisIfFindInterface(int a1)
{
  struct _LIST_ENTRY *Flink; // rax
  __int64 v2; // rdx

  Flink = ndisIfList.Flink;
  v2 = 0LL;
  while ( Flink != &ndisIfList )
  {
    if ( HIDWORD(Flink[-77].Flink) == a1 )
      return Flink - 77;
    Flink = Flink->Flink;
  }
  return (struct _LIST_ENTRY *)v2;
}
