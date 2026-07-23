/*
 * XREFs of RtlGetElementGenericTable @ 0x180074F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlGetElementGenericTable(PRTL_GENERIC_TABLE Table, ULONG I)
{
  ULONG NumberGenericTableElements; // eax
  ULONG v3; // r11d
  ULONG WhichOrderedElement; // r10d
  PLIST_ENTRY OrderedPointer; // r8
  ULONG v6; // r9d
  ULONG v8; // edx
  unsigned int v9; // eax
  ULONG i; // r10d

  NumberGenericTableElements = Table->NumberGenericTableElements;
  v3 = I + 1;
  WhichOrderedElement = Table->WhichOrderedElement;
  OrderedPointer = Table->OrderedPointer;
  v6 = I + 1;
  if ( I + 1 > NumberGenericTableElements || I == -1 )
    return 0LL;
  if ( WhichOrderedElement != v3 )
  {
    if ( WhichOrderedElement > v3 )
    {
      if ( v3 <= WhichOrderedElement >> 1 )
      {
        OrderedPointer = &Table->InsertOrderList;
        do
        {
          OrderedPointer = OrderedPointer->Flink;
          --v6;
        }
        while ( v6 );
      }
      else
      {
        for ( i = WhichOrderedElement - v3; i; --i )
          OrderedPointer = OrderedPointer->Blink;
      }
    }
    else
    {
      v8 = v3 - WhichOrderedElement;
      v9 = NumberGenericTableElements - v3 + 1;
      if ( v3 - WhichOrderedElement > v9 )
      {
        for ( OrderedPointer = &Table->InsertOrderList; v9; --v9 )
          OrderedPointer = OrderedPointer->Blink;
      }
      else
      {
        for ( ; v8; --v8 )
          OrderedPointer = OrderedPointer->Flink;
      }
    }
    Table->OrderedPointer = OrderedPointer;
    Table->WhichOrderedElement = v3;
  }
  return &OrderedPointer[1];
}
