/*
 * XREFs of NtGdiGetDeviceCaps @ 0x1C0056DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiGetDeviceCaps(HDC a1)
{
  return GreGetDeviceCaps(a1);
}
