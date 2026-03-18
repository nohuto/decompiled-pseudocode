/*
 * XREFs of NtGdiDeleteColorSpace @ 0x1C00CA310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiDeleteColorSpace(struct HOBJ__ *a1)
{
  return bDeleteColorSpace(a1, 0);
}
