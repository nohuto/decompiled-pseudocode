/*
 * XREFs of ?Reset@CraneCarryRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x180038570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CraneCarryRecognizer::Reset(CraneCarryRecognizer *this, const struct GestureSession *a2)
{
  if ( *((_DWORD *)this + 4) != 2 )
  {
    *((_DWORD *)this + 4) = 0;
    *((_BYTE *)this + 20) = 0;
    *((_DWORD *)this + 7) = 0xFFFF;
  }
}
