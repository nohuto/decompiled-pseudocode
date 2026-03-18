/*
 * XREFs of NtGdiGetDeviceCaps @ 0x1C004AB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiGetDeviceCaps(__int64 a1, __int64 a2)
{
  return GreGetDeviceCaps(a1, a2);
}
