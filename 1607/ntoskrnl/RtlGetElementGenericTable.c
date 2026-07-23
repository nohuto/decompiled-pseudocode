/*
 * XREFs of RtlGetElementGenericTable @ 0x14009F498
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall RtlGetElementGenericTable(PRTL_GENERIC_TABLE Table, ULONG I)
{
  ULONG WhichOrderedElement; // r10d
  ULONG v3; // r11d
  ULONG NumberGenericTableElements; // eax
  PLIST_ENTRY OrderedPointer; // r8
  ULONG v6; // r9d
  ULONG v8; // edx
  unsigned int v9; // eax
  ULONG i; // r10d

  WhichOrderedElement = Table->WhichOrderedElement;
  v3 = I + 1;
  NumberGenericTableElements = Table->NumberGenericTableElements;
  OrderedPointer = Table->OrderedPointer;
  v6 = I + 1;
  if ( I == -1 || v3 > NumberGenericTableElements )
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
