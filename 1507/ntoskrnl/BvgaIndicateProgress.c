/*
 * XREFs of BvgaIndicateProgress @ 0x1407F93C0
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x1401F18CC (BvgaUpdateProgressBar.c)
 */

__int64 BvgaIndicateProgress()
{
  __int64 result; // rax

  ++BvgaProgressIndicator;
  result = 100 * BvgaProgressIndicator / (unsigned int)dword_14080B1B4;
  if ( (unsigned int)result > 0x63 )
    result = 99LL;
  if ( (_DWORD)result != dword_14080B1B8 )
  {
    dword_14080B1B8 = result;
    return BvgaUpdateProgressBar(result);
  }
  return result;
}
