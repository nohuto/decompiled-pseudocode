/*
 * XREFs of ?SetCurrentFenceValue@CFlipExBuffer@@IEAA_N_K@Z @ 0x1C00A3FA8
 * Callers:
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0049550 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CFlipExBuffer::SetCurrentFenceValue(CFlipExBuffer *this, unsigned __int64 a2)
{
  char result; // al

  result = 0;
  if ( a2 > *((_QWORD *)this + 47) && a2 > *((_QWORD *)this + 48) )
  {
    *((_QWORD *)this + 47) = a2;
    return 1;
  }
  return result;
}
