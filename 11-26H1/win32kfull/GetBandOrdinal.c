/*
 * XREFs of GetBandOrdinal @ 0x14012E344
 * Callers:
 *     LinkWindow @ 0x14012DC64 (LinkWindow.c)
 *     SetWindowGroupBand @ 0x14017A7AC (SetWindowGroupBand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBandOrdinal(int a1)
{
  __int64 result; // rax
  _DWORD *v2; // rdx

  result = 0LL;
  v2 = &unk_140360D20;
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
