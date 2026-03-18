/*
 * XREFs of ?HwndLookupFreeTableData@@YAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1C012BC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HwndLookupFreeTableData(struct _RTL_GENERIC_TABLE *Table, PVOID Buffer, __int64 a3)
{
  Win32FreePool(Buffer, Buffer, a3);
}
