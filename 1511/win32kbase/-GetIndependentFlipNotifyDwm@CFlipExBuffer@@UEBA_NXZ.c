/*
 * XREFs of ?GetIndependentFlipNotifyDwm@CFlipExBuffer@@UEBA_NXZ @ 0x1C00E1840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipExBuffer::GetIndependentFlipNotifyDwm(CFlipExBuffer *this)
{
  char result; // al

  result = 1;
  if ( *((int *)this + 97) >= 1 )
    return *((_BYTE *)this + 396);
  return result;
}
