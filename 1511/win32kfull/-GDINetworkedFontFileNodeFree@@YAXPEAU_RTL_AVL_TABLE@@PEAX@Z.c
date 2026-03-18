/*
 * XREFs of ?GDINetworkedFontFileNodeFree@@YAXPEAU_RTL_AVL_TABLE@@PEAX@Z @ 0x1C027DA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GDINetworkedFontFileNodeFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x66666E47u);
}
