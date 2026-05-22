/*
 * XREFs of ?GetPosition@MobileCursor@@UEAAJPEAJ0@Z @ 0x1800270F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobileCursor::GetPosition(MobileCursor *this, int *a2, int *a3)
{
  *a2 = *((_DWORD *)this + 17);
  *a3 = *((_DWORD *)this + 18);
  return 0LL;
}
