/*
 * XREFs of GetBandOrdinal @ 0x1C007B43C
 * Callers:
 *     DCESpeedHitTest @ 0x1C0058D3C (DCESpeedHitTest.c)
 *     LinkWindow @ 0x1C007B12C (LinkWindow.c)
 *     SetWindowGroupBand @ 0x1C00A4DA4 (SetWindowGroupBand.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C01282BC (IsWindowUnderActiveLockScreen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBandOrdinal(int a1)
{
  __int64 result; // rax
  _DWORD *v2; // rdx

  result = 0LL;
  v2 = &gazbidOrder;
  do
  {
    if ( *v2 == a1 )
      break;
    result = (unsigned int)(result + 1);
    ++v2;
  }
  while ( (unsigned int)result < 0x12 );
  return result;
}
