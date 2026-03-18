/*
 * XREFs of ?GetSize@CBitmapLock@@W7EAAJPEAI0@Z @ 0x1800BE5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::GetSize(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  return CBitmapLock::GetSize((CBitmapLock *)(a1 - 8), a2, a3);
}
