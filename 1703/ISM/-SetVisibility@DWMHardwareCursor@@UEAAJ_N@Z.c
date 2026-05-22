/*
 * XREFs of ?SetVisibility@DWMHardwareCursor@@UEAAJ_N@Z @ 0x180020BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMHardwareCursor::SetVisibility(DWMHardwareCursor *this, char a2)
{
  *((_BYTE *)this + 40) = a2;
  return 0LL;
}
