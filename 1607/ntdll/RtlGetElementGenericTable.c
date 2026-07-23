/*
 * XREFs of RtlGetElementGenericTable @ 0x18007E8F0
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
  ULONG v7; // edx
  unsigned int v8; // eax
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
      if ( v3 > WhichOrderedElement >> 1 )
      {
        for ( i = WhichOrderedElement - v3; i; --i )
          OrderedPointer = OrderedPointer->Blink;
      }
      else
      {
        OrderedPointer = &Table->InsertOrderList;
        do
        {
          OrderedPointer = OrderedPointer->Flink;
          --v6;
        }
        while ( v6 );
      }
    }
    else
    {
      v7 = v3 - WhichOrderedElement;
      v8 = NumberGenericTableElements - v3 + 1;
      if ( v3 - WhichOrderedElement > v8 )
      {
        for ( OrderedPointer = &Table->InsertOrderList; v8; --v8 )
          OrderedPointer = OrderedPointer->Blink;
      }
      else
      {
        for ( ; v7; --v7 )
          OrderedPointer = OrderedPointer->Flink;
      }
    }
    Table->OrderedPointer = OrderedPointer;
    Table->WhichOrderedElement = v3;
  }
  return &OrderedPointer[1];
}
