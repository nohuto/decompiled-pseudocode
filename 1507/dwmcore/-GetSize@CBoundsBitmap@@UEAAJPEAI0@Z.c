/*
 * XREFs of ?GetSize@CBoundsBitmap@@UEAAJPEAI0@Z @ 0x18009AB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBoundsBitmap::GetSize(CBoundsBitmap *this, unsigned int *a2, unsigned int *a3)
{
  *a2 = *((_DWORD *)this + 2);
  *a3 = *((_DWORD *)this + 3);
  return 0LL;
}
