/*
 * XREFs of ndisIfFindInterface @ 0x1C001AD60
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00119B4 (ndisIfDeregisterInterfaceEx.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C001A948 (ndisIfUpdateFilterIfStack.c)
 *     NdisIfAddIfStackEntry @ 0x1C001AC00 (NdisIfAddIfStackEntry.c)
 *     ?ndisNsiEnumerateAllIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0040EF0 (-ndisNsiEnumerateAllIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllInvertedIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0041080 (-ndisNsiEnumerateAllInvertedIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@.c)
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
