/*
 * XREFs of safe_cast_wf_to_PDIALOG @ 0x1C012466C
 * Callers:
 *     xxxSetWindowLong @ 0x1C0080CF0 (xxxSetWindowLong.c)
 *     xxxSetWindowLongPtr @ 0x1C00FBAB4 (xxxSetWindowLongPtr.c)
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
