/*
 * XREFs of ?GetIndependentFlipNotifyDwm@CFlipExBuffer@@UEBA_NXZ @ 0x1C00F3F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipExBuffer::GetIndependentFlipNotifyDwm(CFlipExBuffer *this)
{
  char result; // al

  result = 1;
  if ( *((int *)this + 89) >= 1 )
    return *((_BYTE *)this + 385);
  return result;
}
