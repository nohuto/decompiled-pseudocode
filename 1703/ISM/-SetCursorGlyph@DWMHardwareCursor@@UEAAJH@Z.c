/*
 * XREFs of ?SetCursorGlyph@DWMHardwareCursor@@UEAAJH@Z @ 0x180020BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMHardwareCursor::SetCursorGlyph(DWMHardwareCursor *this, int a2)
{
  __int64 result; // rax

  *((_DWORD *)this + 24) = a2;
  result = 0LL;
  *((_BYTE *)this + 72) = 1;
  return result;
}
