/*
 * XREFs of safe_cast_wf_to_PDIALOG @ 0x1C00A20C0
 * Callers:
 *     xxxSetWindowLong @ 0x1C009B210 (xxxSetWindowLong.c)
 *     xxxSetWindowLongPtr @ 0x1C00A1014 (xxxSetWindowLongPtr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_wf_to_PDIALOG(__int64 a1)
{
  if ( a1 )
    return a1 & -(__int64)((*(_BYTE *)(a1 + 42) & 1) != 0);
  else
    return 0LL;
}
