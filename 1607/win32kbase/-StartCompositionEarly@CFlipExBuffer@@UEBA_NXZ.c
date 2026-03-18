/*
 * XREFs of ?StartCompositionEarly@CFlipExBuffer@@UEBA_NXZ @ 0x1C001D920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CFlipExBuffer::StartCompositionEarly(CFlipExBuffer *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 386) )
  {
    if ( !*((_DWORD *)this + 89) )
      return *((_DWORD *)this + 62) == 2;
  }
  return result;
}
