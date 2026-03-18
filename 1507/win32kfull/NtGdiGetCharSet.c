/*
 * XREFs of NtGdiGetCharSet @ 0x1C00DD230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
