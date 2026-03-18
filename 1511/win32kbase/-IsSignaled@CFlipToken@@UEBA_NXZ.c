/*
 * XREFs of ?IsSignaled@CFlipToken@@UEBA_NXZ @ 0x1C00E3230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CFlipToken::IsSignaled(CFlipToken *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !*((_QWORD *)this + 14) )
    return *((_BYTE *)this + 97) != 0;
  return result;
}
