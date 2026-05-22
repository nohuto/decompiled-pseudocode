/*
 * XREFs of ?GetPosition@DWMCursor@@UEAAJPEAJ0@Z @ 0x18001FB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::GetPosition(DWMCursor *this, int *a2, int *a3)
{
  *a2 = *((_DWORD *)this + 26);
  *a3 = *((_DWORD *)this + 27);
  return 0LL;
}
