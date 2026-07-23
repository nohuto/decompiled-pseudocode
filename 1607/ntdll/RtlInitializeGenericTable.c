/*
 * XREFs of RtlInitializeGenericTable @ 0x18007DA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlInitializeGenericTable(
        PRTL_GENERIC_TABLE Table,
        PRTL_GENERIC_COMPARE_ROUTINE CompareRoutine,
        PRTL_GENERIC_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_GENERIC_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  Table->TableRoot = 0LL;
  Table->InsertOrderList.Blink = &Table->InsertOrderList;
  Table->InsertOrderList.Flink = &Table->InsertOrderList;
  Table->OrderedPointer = &Table->InsertOrderList;
  Table->TableContext = TableContext;
  *(_QWORD *)&Table->WhichOrderedElement = 0LL;
  Table->CompareRoutine = CompareRoutine;
  Table->AllocateRoutine = AllocateRoutine;
  Table->FreeRoutine = FreeRoutine;
}
