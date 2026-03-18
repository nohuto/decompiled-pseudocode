/*
 * XREFs of ?GDIEngUserMemAllocNodeCompare@@YA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_AVL_TABLE@@PEAX1@Z @ 0x1C00844C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GDIEngUserMemAllocNodeCompare(
        struct _RTL_AVL_TABLE *Table,
        _QWORD *FirstStruct,
        _QWORD *SecondStruct)
{
  if ( *FirstStruct > *SecondStruct )
    return 1LL;
  else
    return *FirstStruct < *SecondStruct ? 0 : 2;
}
