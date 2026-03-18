/*
 * XREFs of NtGdiAbortDoc @ 0x1C0267A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiAbortDoc(HDC a1)
{
  return bEndDocInternal(a1, 1u, 1);
}
