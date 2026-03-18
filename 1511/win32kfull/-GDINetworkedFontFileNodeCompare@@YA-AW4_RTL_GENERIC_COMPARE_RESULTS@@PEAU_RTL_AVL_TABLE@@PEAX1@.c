/*
 * XREFs of ?GDINetworkedFontFileNodeCompare@@YA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_AVL_TABLE@@PEAX1@Z @ 0x1C027DA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall GDINetworkedFontFileNodeCompare(struct _RTL_AVL_TABLE *Table, char *FirstStruct, char *SecondStruct)
{
  LONG v3; // ecx

  v3 = RtlCompareUnicodeString((PCUNICODE_STRING)(FirstStruct + 24), (PCUNICODE_STRING)(SecondStruct + 24), 0);
  if ( v3 )
    return v3 > 0;
  else
    return 2;
}
