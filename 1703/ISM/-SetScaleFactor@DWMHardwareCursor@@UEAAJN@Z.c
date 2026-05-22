/*
 * XREFs of ?SetScaleFactor@DWMHardwareCursor@@UEAAJN@Z @ 0x180020B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMHardwareCursor::SetScaleFactor(DWMHardwareCursor *this, double a2)
{
  __int64 result; // rax

  *((double *)this + 6) = a2;
  result = 0LL;
  *((_BYTE *)this + 72) = 1;
  return result;
}
